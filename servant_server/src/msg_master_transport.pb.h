// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: msg_master_transport.proto

#ifndef PROTOBUF_msg_5fmaster_5ftransport_2eproto__INCLUDED
#define PROTOBUF_msg_5fmaster_5ftransport_2eproto__INCLUDED

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

namespace node {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_msg_5fmaster_5ftransport_2eproto();
void protobuf_AssignDesc_msg_5fmaster_5ftransport_2eproto();
void protobuf_ShutdownFile_msg_5fmaster_5ftransport_2eproto();

class MasterTransportPacket;

// ===================================================================

class MasterTransportPacket : public ::google::protobuf::Message {
 public:
  MasterTransportPacket();
  virtual ~MasterTransportPacket();

  MasterTransportPacket(const MasterTransportPacket& from);

  inline MasterTransportPacket& operator=(const MasterTransportPacket& from) {
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
  static const MasterTransportPacket& default_instance();

  void Swap(MasterTransportPacket* other);

  // implements Message ----------------------------------------------

  MasterTransportPacket* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const MasterTransportPacket& from);
  void MergeFrom(const MasterTransportPacket& from);
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

  // required int32 cmd = 1;
  inline bool has_cmd() const;
  inline void clear_cmd();
  static const int kCmdFieldNumber = 1;
  inline ::google::protobuf::int32 cmd() const;
  inline void set_cmd(::google::protobuf::int32 value);

  // required string servername = 2;
  inline bool has_servername() const;
  inline void clear_servername();
  static const int kServernameFieldNumber = 2;
  inline const ::std::string& servername() const;
  inline void set_servername(const ::std::string& value);
  inline void set_servername(const char* value);
  inline void set_servername(const char* value, size_t size);
  inline ::std::string* mutable_servername();
  inline ::std::string* release_servername();
  inline void set_allocated_servername(::std::string* servername);

  // required bytes data = 3;
  inline bool has_data() const;
  inline void clear_data();
  static const int kDataFieldNumber = 3;
  inline const ::std::string& data() const;
  inline void set_data(const ::std::string& value);
  inline void set_data(const char* value);
  inline void set_data(const void* value, size_t size);
  inline ::std::string* mutable_data();
  inline ::std::string* release_data();
  inline void set_allocated_data(::std::string* data);

  // @@protoc_insertion_point(class_scope:node.MasterTransportPacket)
 private:
  inline void set_has_cmd();
  inline void clear_has_cmd();
  inline void set_has_servername();
  inline void clear_has_servername();
  inline void set_has_data();
  inline void clear_has_data();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* servername_;
  ::std::string* data_;
  ::google::protobuf::int32 cmd_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  friend void  protobuf_AddDesc_msg_5fmaster_5ftransport_2eproto();
  friend void protobuf_AssignDesc_msg_5fmaster_5ftransport_2eproto();
  friend void protobuf_ShutdownFile_msg_5fmaster_5ftransport_2eproto();

  void InitAsDefaultInstance();
  static MasterTransportPacket* default_instance_;
};
// ===================================================================


// ===================================================================

// MasterTransportPacket

// required int32 cmd = 1;
inline bool MasterTransportPacket::has_cmd() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void MasterTransportPacket::set_has_cmd() {
  _has_bits_[0] |= 0x00000001u;
}
inline void MasterTransportPacket::clear_has_cmd() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void MasterTransportPacket::clear_cmd() {
  cmd_ = 0;
  clear_has_cmd();
}
inline ::google::protobuf::int32 MasterTransportPacket::cmd() const {
  return cmd_;
}
inline void MasterTransportPacket::set_cmd(::google::protobuf::int32 value) {
  set_has_cmd();
  cmd_ = value;
}

// required string servername = 2;
inline bool MasterTransportPacket::has_servername() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void MasterTransportPacket::set_has_servername() {
  _has_bits_[0] |= 0x00000002u;
}
inline void MasterTransportPacket::clear_has_servername() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void MasterTransportPacket::clear_servername() {
  if (servername_ != &::google::protobuf::internal::kEmptyString) {
    servername_->clear();
  }
  clear_has_servername();
}
inline const ::std::string& MasterTransportPacket::servername() const {
  return *servername_;
}
inline void MasterTransportPacket::set_servername(const ::std::string& value) {
  set_has_servername();
  if (servername_ == &::google::protobuf::internal::kEmptyString) {
    servername_ = new ::std::string;
  }
  servername_->assign(value);
}
inline void MasterTransportPacket::set_servername(const char* value) {
  set_has_servername();
  if (servername_ == &::google::protobuf::internal::kEmptyString) {
    servername_ = new ::std::string;
  }
  servername_->assign(value);
}
inline void MasterTransportPacket::set_servername(const char* value, size_t size) {
  set_has_servername();
  if (servername_ == &::google::protobuf::internal::kEmptyString) {
    servername_ = new ::std::string;
  }
  servername_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* MasterTransportPacket::mutable_servername() {
  set_has_servername();
  if (servername_ == &::google::protobuf::internal::kEmptyString) {
    servername_ = new ::std::string;
  }
  return servername_;
}
inline ::std::string* MasterTransportPacket::release_servername() {
  clear_has_servername();
  if (servername_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = servername_;
    servername_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void MasterTransportPacket::set_allocated_servername(::std::string* servername) {
  if (servername_ != &::google::protobuf::internal::kEmptyString) {
    delete servername_;
  }
  if (servername) {
    set_has_servername();
    servername_ = servername;
  } else {
    clear_has_servername();
    servername_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// required bytes data = 3;
inline bool MasterTransportPacket::has_data() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void MasterTransportPacket::set_has_data() {
  _has_bits_[0] |= 0x00000004u;
}
inline void MasterTransportPacket::clear_has_data() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void MasterTransportPacket::clear_data() {
  if (data_ != &::google::protobuf::internal::kEmptyString) {
    data_->clear();
  }
  clear_has_data();
}
inline const ::std::string& MasterTransportPacket::data() const {
  return *data_;
}
inline void MasterTransportPacket::set_data(const ::std::string& value) {
  set_has_data();
  if (data_ == &::google::protobuf::internal::kEmptyString) {
    data_ = new ::std::string;
  }
  data_->assign(value);
}
inline void MasterTransportPacket::set_data(const char* value) {
  set_has_data();
  if (data_ == &::google::protobuf::internal::kEmptyString) {
    data_ = new ::std::string;
  }
  data_->assign(value);
}
inline void MasterTransportPacket::set_data(const void* value, size_t size) {
  set_has_data();
  if (data_ == &::google::protobuf::internal::kEmptyString) {
    data_ = new ::std::string;
  }
  data_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* MasterTransportPacket::mutable_data() {
  set_has_data();
  if (data_ == &::google::protobuf::internal::kEmptyString) {
    data_ = new ::std::string;
  }
  return data_;
}
inline ::std::string* MasterTransportPacket::release_data() {
  clear_has_data();
  if (data_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = data_;
    data_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void MasterTransportPacket::set_allocated_data(::std::string* data) {
  if (data_ != &::google::protobuf::internal::kEmptyString) {
    delete data_;
  }
  if (data) {
    set_has_data();
    data_ = data;
  } else {
    clear_has_data();
    data_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace node

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_msg_5fmaster_5ftransport_2eproto__INCLUDED
