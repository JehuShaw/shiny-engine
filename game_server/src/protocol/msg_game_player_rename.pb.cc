// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: msg_game_player_rename.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "msg_game_player_rename.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace game {

namespace {

const ::google::protobuf::Descriptor* PlayerRenamePacket_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  PlayerRenamePacket_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_msg_5fgame_5fplayer_5frename_2eproto() {
  protobuf_AddDesc_msg_5fgame_5fplayer_5frename_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "msg_game_player_rename.proto");
  GOOGLE_CHECK(file != NULL);
  PlayerRenamePacket_descriptor_ = file->message_type(0);
  static const int PlayerRenamePacket_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PlayerRenamePacket, name_),
  };
  PlayerRenamePacket_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      PlayerRenamePacket_descriptor_,
      PlayerRenamePacket::default_instance_,
      PlayerRenamePacket_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PlayerRenamePacket, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PlayerRenamePacket, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(PlayerRenamePacket));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_msg_5fgame_5fplayer_5frename_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    PlayerRenamePacket_descriptor_, &PlayerRenamePacket::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_msg_5fgame_5fplayer_5frename_2eproto() {
  delete PlayerRenamePacket::default_instance_;
  delete PlayerRenamePacket_reflection_;
}

void protobuf_AddDesc_msg_5fgame_5fplayer_5frename_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\034msg_game_player_rename.proto\022\004game\"\"\n\022"
    "PlayerRenamePacket\022\014\n\004name\030\001 \002(\t", 72);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "msg_game_player_rename.proto", &protobuf_RegisterTypes);
  PlayerRenamePacket::default_instance_ = new PlayerRenamePacket();
  PlayerRenamePacket::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_msg_5fgame_5fplayer_5frename_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_msg_5fgame_5fplayer_5frename_2eproto {
  StaticDescriptorInitializer_msg_5fgame_5fplayer_5frename_2eproto() {
    protobuf_AddDesc_msg_5fgame_5fplayer_5frename_2eproto();
  }
} static_descriptor_initializer_msg_5fgame_5fplayer_5frename_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int PlayerRenamePacket::kNameFieldNumber;
#endif  // !_MSC_VER

PlayerRenamePacket::PlayerRenamePacket()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void PlayerRenamePacket::InitAsDefaultInstance() {
}

PlayerRenamePacket::PlayerRenamePacket(const PlayerRenamePacket& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void PlayerRenamePacket::SharedCtor() {
  _cached_size_ = 0;
  name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

PlayerRenamePacket::~PlayerRenamePacket() {
  SharedDtor();
}

void PlayerRenamePacket::SharedDtor() {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    delete name_;
  }
  if (this != default_instance_) {
  }
}

void PlayerRenamePacket::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* PlayerRenamePacket::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return PlayerRenamePacket_descriptor_;
}

const PlayerRenamePacket& PlayerRenamePacket::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_msg_5fgame_5fplayer_5frename_2eproto();
  return *default_instance_;
}

PlayerRenamePacket* PlayerRenamePacket::default_instance_ = NULL;

PlayerRenamePacket* PlayerRenamePacket::New() const {
  return new PlayerRenamePacket;
}

void PlayerRenamePacket::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_name()) {
      if (name_ != &::google::protobuf::internal::kEmptyString) {
        name_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool PlayerRenamePacket::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string name = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->name().data(), this->name().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void PlayerRenamePacket::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required string name = 1;
  if (has_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->name(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* PlayerRenamePacket::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required string name = 1;
  if (has_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->name(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int PlayerRenamePacket::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required string name = 1;
    if (has_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->name());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void PlayerRenamePacket::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const PlayerRenamePacket* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const PlayerRenamePacket*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void PlayerRenamePacket::MergeFrom(const PlayerRenamePacket& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_name()) {
      set_name(from.name());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void PlayerRenamePacket::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PlayerRenamePacket::CopyFrom(const PlayerRenamePacket& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PlayerRenamePacket::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void PlayerRenamePacket::Swap(PlayerRenamePacket* other) {
  if (other != this) {
    std::swap(name_, other->name_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata PlayerRenamePacket::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = PlayerRenamePacket_descriptor_;
  metadata.reflection = PlayerRenamePacket_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace game

// @@protoc_insertion_point(global_scope)
