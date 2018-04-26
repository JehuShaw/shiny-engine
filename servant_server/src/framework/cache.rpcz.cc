// Generated by the protocol buffer compiler.  DO NOT EDIT!

#include "cache.rpcz.h"
#include "cache.pb.h"
#include <google/protobuf/descriptor.h>
#include <google/protobuf/stubs/once.h>
#include <rpcz/rpcz.hpp>
namespace {
const ::google::protobuf::ServiceDescriptor* CacheService_descriptor_ = NULL;
}  // anonymouse namespace

namespace node {

void rpcz_protobuf_AssignDesc_cache_2eproto() {
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "cache.proto");
  GOOGLE_CHECK(file != NULL);
  CacheService_descriptor_ = file->service(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &rpcz_protobuf_AssignDesc_cache_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
}

}  // namespace

void rpcz_protobuf_ShutdownFile_cache_2eproto() {
}

void rpcz_protobuf_AddDesc_cache_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::node::protobuf_AddDesc_void_5fpacket_2eproto();
  ::node::protobuf_AddDesc_interest_5fpacket_2eproto();
  ::node::protobuf_AddDesc_data_5fpacket_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\013cache.proto\022\004node\032\021void_packet.proto\032\025"
    "interest_packet.proto\032\021data_packet.proto"
    "\"c\n\tMCRequest\022\013\n\003key\030\001 \002(\t\022\r\n\005value\030\002 \001("
    "\014\022\r\n\005flags\030\003 \001(\r\022\016\n\006expiry\030\004 \001(\r\022\013\n\003cas\030"
    "\005 \001(\004\022\016\n\006result\030\006 \001(\005\"y\n\014CacheRequest\022\037\n"
    "\006values\030\001 \003(\0132\017.node.MCRequest\022\013\n\003key\030\002 "
    "\001(\t\022\014\n\004data\030\003 \001(\014\022\016\n\006offset\030\004 \001(\r\022\r\n\005cou"
    "nt\030\005 \001(\r\022\016\n\006result\030\006 \001(\005\"[\n\rCacheRespons"
    "e\022\037\n\006values\030\001 \003(\0132\017.node.MCRequest\022\013\n\003ke"
    "y\030\002 \001(\t\022\014\n\004data\030\003 \001(\014\022\016\n\006result\030\004 \001(\0052\204\002"
    "\n\014CacheService\0228\n\022HandleNotification\022\020.n"
    "ode.DataPacket\032\020.node.DataPacket\0224\n\016Hand"
    "leProtocol\022\020.node.DataPacket\032\020.node.Data"
    "Packet\022C\n\031ListNotificationInterests\022\020.no"
    "de.VoidPacket\032\024.node.InterestPacket\022\?\n\025L"
    "istProtocolInterests\022\020.node.VoidPacket\032\024"
    ".node.InterestPacket", 660);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "cache.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&rpcz_protobuf_ShutdownFile_cache_2eproto);
}

// ===================================================================

CacheService::~CacheService() {}

const ::google::protobuf::ServiceDescriptor* CacheService::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return CacheService_descriptor_;
}

const ::google::protobuf::ServiceDescriptor* CacheService::GetDescriptor() {
  protobuf_AssignDescriptorsOnce();
  return CacheService_descriptor_;
}

void CacheService::HandleNotification(const ::node::DataPacket&,
                         ::rpcz::reply< ::node::DataPacket> reply) {
  reply.Error(::rpcz::application_error::METHOD_NOT_IMPLEMENTED,
              "Method HandleNotification() not implemented.");
}

void CacheService::HandleProtocol(const ::node::DataPacket&,
                         ::rpcz::reply< ::node::DataPacket> reply) {
  reply.Error(::rpcz::application_error::METHOD_NOT_IMPLEMENTED,
              "Method HandleProtocol() not implemented.");
}

void CacheService::ListNotificationInterests(const ::node::VoidPacket&,
                         ::rpcz::reply< ::node::InterestPacket> reply) {
  reply.Error(::rpcz::application_error::METHOD_NOT_IMPLEMENTED,
              "Method ListNotificationInterests() not implemented.");
}

void CacheService::ListProtocolInterests(const ::node::VoidPacket&,
                         ::rpcz::reply< ::node::InterestPacket> reply) {
  reply.Error(::rpcz::application_error::METHOD_NOT_IMPLEMENTED,
              "Method ListProtocolInterests() not implemented.");
}

void CacheService::call_method(const ::google::protobuf::MethodDescriptor* method,
                             const ::google::protobuf::Message& request,
                             ::rpcz::server_channel* channel) {
  GOOGLE_DCHECK_EQ(method->service(), CacheService_descriptor_);
  switch(method->index()) {
    case 0:
      HandleNotification(
          *::google::protobuf::down_cast<const ::node::DataPacket*>(&request),
          ::rpcz::reply< ::node::DataPacket>(channel));
      break;
    case 1:
      HandleProtocol(
          *::google::protobuf::down_cast<const ::node::DataPacket*>(&request),
          ::rpcz::reply< ::node::DataPacket>(channel));
      break;
    case 2:
      ListNotificationInterests(
          *::google::protobuf::down_cast<const ::node::VoidPacket*>(&request),
          ::rpcz::reply< ::node::InterestPacket>(channel));
      break;
    case 3:
      ListProtocolInterests(
          *::google::protobuf::down_cast<const ::node::VoidPacket*>(&request),
          ::rpcz::reply< ::node::InterestPacket>(channel));
      break;
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      break;
  }
}

const ::google::protobuf::Message& CacheService::GetRequestPrototype(
    const ::google::protobuf::MethodDescriptor* method) const {
  GOOGLE_DCHECK_EQ(method->service(), descriptor());
  switch(method->index()) {
    case 0:
      return ::node::DataPacket::default_instance();
    case 1:
      return ::node::DataPacket::default_instance();
    case 2:
      return ::node::VoidPacket::default_instance();
    case 3:
      return ::node::VoidPacket::default_instance();
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      return *reinterpret_cast< ::google::protobuf::Message*>(NULL);
  }
}

const ::google::protobuf::Message& CacheService::GetResponsePrototype(
    const ::google::protobuf::MethodDescriptor* method) const {
  GOOGLE_DCHECK_EQ(method->service(), descriptor());
  switch(method->index()) {
    case 0:
      return ::node::DataPacket::default_instance();
    case 1:
      return ::node::DataPacket::default_instance();
    case 2:
      return ::node::InterestPacket::default_instance();
    case 3:
      return ::node::InterestPacket::default_instance();
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      return *reinterpret_cast< ::google::protobuf::Message*>(NULL);
  }
}

CacheService_Stub::CacheService_Stub(::rpcz::rpc_channel* channel,
                                   const ::std::string& service_name,
                                   bool owns_channel)
  : channel_(channel), service_name_(service_name),
    owns_channel_(owns_channel) {}
CacheService_Stub::CacheService_Stub(::rpcz::rpc_channel* channel,
                                   bool owns_channel)
  : channel_(channel), service_name_(CacheService::descriptor()->name()),
    owns_channel_(owns_channel) {}
CacheService_Stub::~CacheService_Stub() {
  if (owns_channel_) delete channel_;
}

void CacheService_Stub::HandleNotification(const ::node::DataPacket& request,
                              ::node::DataPacket* response,
                              ::rpcz::rpc_controller* rpc_controller,
                              ::rpcz::closure* done) {
  channel_->call_method(service_name_,
                        CacheService::descriptor()->method(0),
                        request, response, rpc_controller, done);
}
void CacheService_Stub::HandleNotification(const ::node::DataPacket& request,
                              ::node::DataPacket* response,
                              long deadline_ms) {
  ::rpcz::rpc_controller rpc_controller;
  rpc_controller.set_deadline_ms(deadline_ms);
  channel_->call_method(service_name_,
                        CacheService::descriptor()->method(0),
                        request, response, &rpc_controller, NULL);
  rpc_controller.wait();
  if (!rpc_controller.ok()) {
    throw ::rpcz::rpc_error(rpc_controller);
  }
}
void CacheService_Stub::HandleProtocol(const ::node::DataPacket& request,
                              ::node::DataPacket* response,
                              ::rpcz::rpc_controller* rpc_controller,
                              ::rpcz::closure* done) {
  channel_->call_method(service_name_,
                        CacheService::descriptor()->method(1),
                        request, response, rpc_controller, done);
}
void CacheService_Stub::HandleProtocol(const ::node::DataPacket& request,
                              ::node::DataPacket* response,
                              long deadline_ms) {
  ::rpcz::rpc_controller rpc_controller;
  rpc_controller.set_deadline_ms(deadline_ms);
  channel_->call_method(service_name_,
                        CacheService::descriptor()->method(1),
                        request, response, &rpc_controller, NULL);
  rpc_controller.wait();
  if (!rpc_controller.ok()) {
    throw ::rpcz::rpc_error(rpc_controller);
  }
}
void CacheService_Stub::ListNotificationInterests(const ::node::VoidPacket& request,
                              ::node::InterestPacket* response,
                              ::rpcz::rpc_controller* rpc_controller,
                              ::rpcz::closure* done) {
  channel_->call_method(service_name_,
                        CacheService::descriptor()->method(2),
                        request, response, rpc_controller, done);
}
void CacheService_Stub::ListNotificationInterests(const ::node::VoidPacket& request,
                              ::node::InterestPacket* response,
                              long deadline_ms) {
  ::rpcz::rpc_controller rpc_controller;
  rpc_controller.set_deadline_ms(deadline_ms);
  channel_->call_method(service_name_,
                        CacheService::descriptor()->method(2),
                        request, response, &rpc_controller, NULL);
  rpc_controller.wait();
  if (!rpc_controller.ok()) {
    throw ::rpcz::rpc_error(rpc_controller);
  }
}
void CacheService_Stub::ListProtocolInterests(const ::node::VoidPacket& request,
                              ::node::InterestPacket* response,
                              ::rpcz::rpc_controller* rpc_controller,
                              ::rpcz::closure* done) {
  channel_->call_method(service_name_,
                        CacheService::descriptor()->method(3),
                        request, response, rpc_controller, done);
}
void CacheService_Stub::ListProtocolInterests(const ::node::VoidPacket& request,
                              ::node::InterestPacket* response,
                              long deadline_ms) {
  ::rpcz::rpc_controller rpc_controller;
  rpc_controller.set_deadline_ms(deadline_ms);
  channel_->call_method(service_name_,
                        CacheService::descriptor()->method(3),
                        request, response, &rpc_controller, NULL);
  rpc_controller.wait();
  if (!rpc_controller.ok()) {
    throw ::rpcz::rpc_error(rpc_controller);
  }
}

}  // namespace node