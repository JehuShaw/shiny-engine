/* 
 * File:   TimestampManager.cpp
 * Author: Jehu Shaw
 * 
 * Created on 2011_7_26, 11:09
 */
#ifdef _WIN32
#include <winsock2.h>
#endif

#include "TimestampManager.h"
#include <time.h>
#include "Log.h"
#include "AtomicLock.h"

#ifdef _WIN32

#pragma comment(lib, "WS2_32")

#pragma comment(lib, "Winmm.lib")

#else
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#include <unistd.h>
#include <signal.h>
#include <string.h>
#endif

using namespace thd;
using namespace util;

namespace evt {

const char* TimeServerURL[] = {
	"time-b.nist.gov",
	"time-a.nist.gov",
	"cuckoo.nevada.edu",
	"ntp.nblug.org",
	"ntp0.cornell.edu",
	"pubts0-sj.witime.net",
	"pubts1-sj.witime.net",
	"pubts2-sj.witime.net",
	"rolex.usg.edu",
	"timekeeper.isi.edu",
	"nist1.symmetricom.com",
	"clock.via.net",
	"nist1.aol-ca.truetime.com",
	"nist.expertsmi.com",
	"nist1-dc.WiTime.net",
	"nist1-sj.WiTime.net",
	"time-a.timefreq.bldrdoc.gov",
	"time-b.timefreq.bldrdoc.gov",
	"time-c.timefreq.bldrdoc.gov",
	"utcnist.colorado.edu",
};

SHARED_DLL_DECL volatile uint64_t CTimestampManager::m_uTimestamp(0);

CTimestampManager::CTimestampManager() {

#ifdef _WIN32
	WSADATA wsaData;
	WORD sockVersion = MAKEWORD(2, 2);
	if(::WSAStartup(sockVersion, &wsaData) != 0)
	{
		OutputError("WSAStartup failed with error code: %d\n", GetLastError());
	}
#endif

	startTick();
	atomic_xchg64(&m_uTimestamp, time(NULL));
}

CTimestampManager::~CTimestampManager() {
#ifdef _WIN32
	::WSACleanup();
#endif
	stopTick();
}

time_t CTimestampManager::GetNetTimestamp()
{
#ifdef _WIN32
	SOCKET s = ::socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
	if(s == INVALID_SOCKET)
#else
        int s = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP); 
        if(s == -1)
#endif
	{
#ifdef _WIN32
		OutputError("::socket() failed with error code: %d\n", GetLastError());
#else
		OutputError("::socket() failed with error code: %d\n", errno);
#endif
		return 0;
	}

	sockaddr_in servAddr; 
	servAddr.sin_family = AF_INET;
	servAddr.sin_port = htons(37); 

	int nSize = sizeof(TimeServerURL)/sizeof(char*);
	int nIdx = 0;
	for(; nIdx < nSize; ++nIdx) {

		const char* hostname = TimeServerURL[nIdx];

		struct hostent* hp;
#if defined(HAVE_GETHOSTBYNAME_R) && !defined(NO_PTHREADS)
		struct hostent ent;  // entry in hosts table
		char buf[GETHOSTBYNAME_BUF_SIZE];
		int h_err;
#if defined(__sun)
		if ((hp = gethostbyname_r(hostname, &ent, buf, sizeof buf, &h_err)) == NULL
#else
		if (gethostbyname_r(hostname, &ent, buf, sizeof buf, &hp, &h_err) != 0
			|| hp == NULL
#endif
			|| hp->h_addrtype != AF_INET)
#else
		if ((hp = gethostbyname(hostname)) == NULL || hp->h_addrtype != AF_INET)
#endif
		{
			continue;
		}
		memcpy(&servAddr.sin_addr, hp->h_addr,
			sizeof servAddr.sin_addr);

		//You can get time server from http://tf.nist.gov/service/its.htm
		if(::connect(s, (sockaddr*)&servAddr, sizeof(servAddr)) == -1)
		{
			continue;
		}
		break;
	}

	unsigned long ulTime = 0;
	int nRecv = ::recv(s, (char*)&ulTime, sizeof(ulTime), 0);
	if(nRecv > 0)
	{
		ulTime = ntohl(ulTime);
	}
#ifdef _WIN32
	::shutdown(s, SD_BOTH);
	::closesocket(s);
#else
        ::shutdown(s, SHUT_RDWR);
        ::close(s);
#endif
	if(ulTime < UNIXEPOCH) {
		return (time_t)ulTime;
	}
	return (time_t)(ulTime - UNIXEPOCH);
}

#ifdef _WIN32
void WINAPI CTimestampManager::onTimeFunc(UINT wTimerID, UINT msg,
	DWORD dwUser, DWORD dwl, DWORD dw2) {
		atomic_inc64(&m_uTimestamp);
}
#else
void CTimestampManager::onTimeFunc(int signo)
{
	atomic_inc64(&m_uTimestamp);
	signal(signo, onTimeFunc);
}
#endif

bool CTimestampManager::startTick(){
#ifdef _WIN32
	UINT wMsecInterval = 1000;
	m_iTimerID = timeSetEvent(wMsecInterval, 1, 
		(LPTIMECALLBACK)onTimeFunc, DWORD(1), TIME_PERIODIC);
	if(NULL == m_iTimerID) {
		return false;
	}
	return true;
#else
	//set timer
	struct itimerval value;
	value.it_interval.tv_sec = 1;
	value.it_interval.tv_usec = 0;
	value.it_value.tv_sec = 1;
	value.it_value.tv_usec = 0;
        if((oldOnTimeFunc = signal(SIGALRM, onTimeFunc)) != SIG_ERR){
            if(setitimer(ITIMER_REAL, &value, &m_ovalue) == 0){
                return true;
            }
        }
	return false;
#endif
}

bool CTimestampManager::stopTick(){
#ifdef _WIN32
	return timeKillEvent(m_iTimerID) == 0;
#else
    struct itimerval value;
    if(signal(SIGALRM, oldOnTimeFunc) != SIG_ERR){
        if(setitimer(ITIMER_REAL, &m_ovalue, &value) == 0){
            return true;
        }
    }
    return false;
#endif
}

} // end using namespace evt


