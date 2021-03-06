// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: msg_send_mail.proto

#ifndef PROTOBUF_msg_5fsend_5fmail_2eproto__INCLUDED
#define PROTOBUF_msg_5fsend_5fmail_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace game {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_msg_5fsend_5fmail_2eproto();
void protobuf_AssignDesc_msg_5fsend_5fmail_2eproto();
void protobuf_ShutdownFile_msg_5fsend_5fmail_2eproto();

class SendMailPacket;

// ===================================================================

class SendMailPacket : public ::google::protobuf::Message {
 public:
  SendMailPacket();
  virtual ~SendMailPacket();

  SendMailPacket(const SendMailPacket& from);

  inline SendMailPacket& operator=(const SendMailPacket& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const SendMailPacket& default_instance();

  void Swap(SendMailPacket* other);

  // implements Message ----------------------------------------------

  SendMailPacket* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const SendMailPacket& from);
  void MergeFrom(const SendMailPacket& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional uint64 sender = 1;
  inline bool has_sender() const;
  inline void clear_sender();
  static const int kSenderFieldNumber = 1;
  inline ::google::protobuf::uint64 sender() const;
  inline void set_sender(::google::protobuf::uint64 value);

  // optional string sender_name = 2;
  inline bool has_sender_name() const;
  inline void clear_sender_name();
  static const int kSenderNameFieldNumber = 2;
  inline const ::std::string& sender_name() const;
  inline void set_sender_name(const ::std::string& value);
  inline void set_sender_name(const char* value);
  inline void set_sender_name(const char* value, size_t size);
  inline ::std::string* mutable_sender_name();
  inline ::std::string* release_sender_name();
  inline void set_allocated_sender_name(::std::string* sender_name);

  // optional int32 sender_type = 3;
  inline bool has_sender_type() const;
  inline void clear_sender_type();
  static const int kSenderTypeFieldNumber = 3;
  inline ::google::protobuf::int32 sender_type() const;
  inline void set_sender_type(::google::protobuf::int32 value);

  // repeated uint64 receivers = 4;
  inline int receivers_size() const;
  inline void clear_receivers();
  static const int kReceiversFieldNumber = 4;
  inline ::google::protobuf::uint64 receivers(int index) const;
  inline void set_receivers(int index, ::google::protobuf::uint64 value);
  inline void add_receivers(::google::protobuf::uint64 value);
  inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >&
      receivers() const;
  inline ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >*
      mutable_receivers();

  // optional int32 receiver_type = 5;
  inline bool has_receiver_type() const;
  inline void clear_receiver_type();
  static const int kReceiverTypeFieldNumber = 5;
  inline ::google::protobuf::int32 receiver_type() const;
  inline void set_receiver_type(::google::protobuf::int32 value);

  // required string title = 6;
  inline bool has_title() const;
  inline void clear_title();
  static const int kTitleFieldNumber = 6;
  inline const ::std::string& title() const;
  inline void set_title(const ::std::string& value);
  inline void set_title(const char* value);
  inline void set_title(const char* value, size_t size);
  inline ::std::string* mutable_title();
  inline ::std::string* release_title();
  inline void set_allocated_title(::std::string* title);

  // optional string brief = 7;
  inline bool has_brief() const;
  inline void clear_brief();
  static const int kBriefFieldNumber = 7;
  inline const ::std::string& brief() const;
  inline void set_brief(const ::std::string& value);
  inline void set_brief(const char* value);
  inline void set_brief(const char* value, size_t size);
  inline ::std::string* mutable_brief();
  inline ::std::string* release_brief();
  inline void set_allocated_brief(::std::string* brief);

  // optional string content = 8;
  inline bool has_content() const;
  inline void clear_content();
  static const int kContentFieldNumber = 8;
  inline const ::std::string& content() const;
  inline void set_content(const ::std::string& value);
  inline void set_content(const char* value);
  inline void set_content(const char* value, size_t size);
  inline ::std::string* mutable_content();
  inline ::std::string* release_content();
  inline void set_allocated_content(::std::string* content);

  // optional int32 mail_type = 9;
  inline bool has_mail_type() const;
  inline void clear_mail_type();
  static const int kMailTypeFieldNumber = 9;
  inline ::google::protobuf::int32 mail_type() const;
  inline void set_mail_type(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:game.SendMailPacket)
 private:
  inline void set_has_sender();
  inline void clear_has_sender();
  inline void set_has_sender_name();
  inline void clear_has_sender_name();
  inline void set_has_sender_type();
  inline void clear_has_sender_type();
  inline void set_has_receiver_type();
  inline void clear_has_receiver_type();
  inline void set_has_title();
  inline void clear_has_title();
  inline void set_has_brief();
  inline void clear_has_brief();
  inline void set_has_content();
  inline void clear_has_content();
  inline void set_has_mail_type();
  inline void clear_has_mail_type();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint64 sender_;
  ::std::string* sender_name_;
  ::google::protobuf::RepeatedField< ::google::protobuf::uint64 > receivers_;
  ::google::protobuf::int32 sender_type_;
  ::google::protobuf::int32 receiver_type_;
  ::std::string* title_;
  ::std::string* brief_;
  ::std::string* content_;
  ::google::protobuf::int32 mail_type_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(9 + 31) / 32];

  friend void  protobuf_AddDesc_msg_5fsend_5fmail_2eproto();
  friend void protobuf_AssignDesc_msg_5fsend_5fmail_2eproto();
  friend void protobuf_ShutdownFile_msg_5fsend_5fmail_2eproto();

  void InitAsDefaultInstance();
  static SendMailPacket* default_instance_;
};
// ===================================================================


// ===================================================================

// SendMailPacket

// optional uint64 sender = 1;
inline bool SendMailPacket::has_sender() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SendMailPacket::set_has_sender() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SendMailPacket::clear_has_sender() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void SendMailPacket::clear_sender() {
  sender_ = GOOGLE_ULONGLONG(0);
  clear_has_sender();
}
inline ::google::protobuf::uint64 SendMailPacket::sender() const {
  return sender_;
}
inline void SendMailPacket::set_sender(::google::protobuf::uint64 value) {
  set_has_sender();
  sender_ = value;
}

// optional string sender_name = 2;
inline bool SendMailPacket::has_sender_name() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void SendMailPacket::set_has_sender_name() {
  _has_bits_[0] |= 0x00000002u;
}
inline void SendMailPacket::clear_has_sender_name() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void SendMailPacket::clear_sender_name() {
  if (sender_name_ != &::google::protobuf::internal::kEmptyString) {
    sender_name_->clear();
  }
  clear_has_sender_name();
}
inline const ::std::string& SendMailPacket::sender_name() const {
  return *sender_name_;
}
inline void SendMailPacket::set_sender_name(const ::std::string& value) {
  set_has_sender_name();
  if (sender_name_ == &::google::protobuf::internal::kEmptyString) {
    sender_name_ = new ::std::string;
  }
  sender_name_->assign(value);
}
inline void SendMailPacket::set_sender_name(const char* value) {
  set_has_sender_name();
  if (sender_name_ == &::google::protobuf::internal::kEmptyString) {
    sender_name_ = new ::std::string;
  }
  sender_name_->assign(value);
}
inline void SendMailPacket::set_sender_name(const char* value, size_t size) {
  set_has_sender_name();
  if (sender_name_ == &::google::protobuf::internal::kEmptyString) {
    sender_name_ = new ::std::string;
  }
  sender_name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* SendMailPacket::mutable_sender_name() {
  set_has_sender_name();
  if (sender_name_ == &::google::protobuf::internal::kEmptyString) {
    sender_name_ = new ::std::string;
  }
  return sender_name_;
}
inline ::std::string* SendMailPacket::release_sender_name() {
  clear_has_sender_name();
  if (sender_name_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = sender_name_;
    sender_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void SendMailPacket::set_allocated_sender_name(::std::string* sender_name) {
  if (sender_name_ != &::google::protobuf::internal::kEmptyString) {
    delete sender_name_;
  }
  if (sender_name) {
    set_has_sender_name();
    sender_name_ = sender_name;
  } else {
    clear_has_sender_name();
    sender_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional int32 sender_type = 3;
inline bool SendMailPacket::has_sender_type() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void SendMailPacket::set_has_sender_type() {
  _has_bits_[0] |= 0x00000004u;
}
inline void SendMailPacket::clear_has_sender_type() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void SendMailPacket::clear_sender_type() {
  sender_type_ = 0;
  clear_has_sender_type();
}
inline ::google::protobuf::int32 SendMailPacket::sender_type() const {
  return sender_type_;
}
inline void SendMailPacket::set_sender_type(::google::protobuf::int32 value) {
  set_has_sender_type();
  sender_type_ = value;
}

// repeated uint64 receivers = 4;
inline int SendMailPacket::receivers_size() const {
  return receivers_.size();
}
inline void SendMailPacket::clear_receivers() {
  receivers_.Clear();
}
inline ::google::protobuf::uint64 SendMailPacket::receivers(int index) const {
  return receivers_.Get(index);
}
inline void SendMailPacket::set_receivers(int index, ::google::protobuf::uint64 value) {
  receivers_.Set(index, value);
}
inline void SendMailPacket::add_receivers(::google::protobuf::uint64 value) {
  receivers_.Add(value);
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >&
SendMailPacket::receivers() const {
  return receivers_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >*
SendMailPacket::mutable_receivers() {
  return &receivers_;
}

// optional int32 receiver_type = 5;
inline bool SendMailPacket::has_receiver_type() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void SendMailPacket::set_has_receiver_type() {
  _has_bits_[0] |= 0x00000010u;
}
inline void SendMailPacket::clear_has_receiver_type() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void SendMailPacket::clear_receiver_type() {
  receiver_type_ = 0;
  clear_has_receiver_type();
}
inline ::google::protobuf::int32 SendMailPacket::receiver_type() const {
  return receiver_type_;
}
inline void SendMailPacket::set_receiver_type(::google::protobuf::int32 value) {
  set_has_receiver_type();
  receiver_type_ = value;
}

// required string title = 6;
inline bool SendMailPacket::has_title() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void SendMailPacket::set_has_title() {
  _has_bits_[0] |= 0x00000020u;
}
inline void SendMailPacket::clear_has_title() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void SendMailPacket::clear_title() {
  if (title_ != &::google::protobuf::internal::kEmptyString) {
    title_->clear();
  }
  clear_has_title();
}
inline const ::std::string& SendMailPacket::title() const {
  return *title_;
}
inline void SendMailPacket::set_title(const ::std::string& value) {
  set_has_title();
  if (title_ == &::google::protobuf::internal::kEmptyString) {
    title_ = new ::std::string;
  }
  title_->assign(value);
}
inline void SendMailPacket::set_title(const char* value) {
  set_has_title();
  if (title_ == &::google::protobuf::internal::kEmptyString) {
    title_ = new ::std::string;
  }
  title_->assign(value);
}
inline void SendMailPacket::set_title(const char* value, size_t size) {
  set_has_title();
  if (title_ == &::google::protobuf::internal::kEmptyString) {
    title_ = new ::std::string;
  }
  title_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* SendMailPacket::mutable_title() {
  set_has_title();
  if (title_ == &::google::protobuf::internal::kEmptyString) {
    title_ = new ::std::string;
  }
  return title_;
}
inline ::std::string* SendMailPacket::release_title() {
  clear_has_title();
  if (title_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = title_;
    title_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void SendMailPacket::set_allocated_title(::std::string* title) {
  if (title_ != &::google::protobuf::internal::kEmptyString) {
    delete title_;
  }
  if (title) {
    set_has_title();
    title_ = title;
  } else {
    clear_has_title();
    title_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional string brief = 7;
inline bool SendMailPacket::has_brief() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void SendMailPacket::set_has_brief() {
  _has_bits_[0] |= 0x00000040u;
}
inline void SendMailPacket::clear_has_brief() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void SendMailPacket::clear_brief() {
  if (brief_ != &::google::protobuf::internal::kEmptyString) {
    brief_->clear();
  }
  clear_has_brief();
}
inline const ::std::string& SendMailPacket::brief() const {
  return *brief_;
}
inline void SendMailPacket::set_brief(const ::std::string& value) {
  set_has_brief();
  if (brief_ == &::google::protobuf::internal::kEmptyString) {
    brief_ = new ::std::string;
  }
  brief_->assign(value);
}
inline void SendMailPacket::set_brief(const char* value) {
  set_has_brief();
  if (brief_ == &::google::protobuf::internal::kEmptyString) {
    brief_ = new ::std::string;
  }
  brief_->assign(value);
}
inline void SendMailPacket::set_brief(const char* value, size_t size) {
  set_has_brief();
  if (brief_ == &::google::protobuf::internal::kEmptyString) {
    brief_ = new ::std::string;
  }
  brief_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* SendMailPacket::mutable_brief() {
  set_has_brief();
  if (brief_ == &::google::protobuf::internal::kEmptyString) {
    brief_ = new ::std::string;
  }
  return brief_;
}
inline ::std::string* SendMailPacket::release_brief() {
  clear_has_brief();
  if (brief_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = brief_;
    brief_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void SendMailPacket::set_allocated_brief(::std::string* brief) {
  if (brief_ != &::google::protobuf::internal::kEmptyString) {
    delete brief_;
  }
  if (brief) {
    set_has_brief();
    brief_ = brief;
  } else {
    clear_has_brief();
    brief_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional string content = 8;
inline bool SendMailPacket::has_content() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void SendMailPacket::set_has_content() {
  _has_bits_[0] |= 0x00000080u;
}
inline void SendMailPacket::clear_has_content() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void SendMailPacket::clear_content() {
  if (content_ != &::google::protobuf::internal::kEmptyString) {
    content_->clear();
  }
  clear_has_content();
}
inline const ::std::string& SendMailPacket::content() const {
  return *content_;
}
inline void SendMailPacket::set_content(const ::std::string& value) {
  set_has_content();
  if (content_ == &::google::protobuf::internal::kEmptyString) {
    content_ = new ::std::string;
  }
  content_->assign(value);
}
inline void SendMailPacket::set_content(const char* value) {
  set_has_content();
  if (content_ == &::google::protobuf::internal::kEmptyString) {
    content_ = new ::std::string;
  }
  content_->assign(value);
}
inline void SendMailPacket::set_content(const char* value, size_t size) {
  set_has_content();
  if (content_ == &::google::protobuf::internal::kEmptyString) {
    content_ = new ::std::string;
  }
  content_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* SendMailPacket::mutable_content() {
  set_has_content();
  if (content_ == &::google::protobuf::internal::kEmptyString) {
    content_ = new ::std::string;
  }
  return content_;
}
inline ::std::string* SendMailPacket::release_content() {
  clear_has_content();
  if (content_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = content_;
    content_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void SendMailPacket::set_allocated_content(::std::string* content) {
  if (content_ != &::google::protobuf::internal::kEmptyString) {
    delete content_;
  }
  if (content) {
    set_has_content();
    content_ = content;
  } else {
    clear_has_content();
    content_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional int32 mail_type = 9;
inline bool SendMailPacket::has_mail_type() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void SendMailPacket::set_has_mail_type() {
  _has_bits_[0] |= 0x00000100u;
}
inline void SendMailPacket::clear_has_mail_type() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void SendMailPacket::clear_mail_type() {
  mail_type_ = 0;
  clear_has_mail_type();
}
inline ::google::protobuf::int32 SendMailPacket::mail_type() const {
  return mail_type_;
}
inline void SendMailPacket::set_mail_type(::google::protobuf::int32 value) {
  set_has_mail_type();
  mail_type_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace game

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_msg_5fsend_5fmail_2eproto__INCLUDED
