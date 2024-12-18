// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: contacts.proto

#ifndef PROTOBUF_contacts_2eproto__INCLUDED
#define PROTOBUF_contacts_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3002000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3002000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
namespace contacts {
class contact;
class contactDefaultTypeInternal;
extern contactDefaultTypeInternal _contact_default_instance_;
}  // namespace contacts

namespace contacts {

namespace protobuf_contacts_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::uint32 offsets[];
  static void InitDefaultsImpl();
  static void Shutdown();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_contacts_2eproto

// ===================================================================

class contact : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:contacts.contact) */ {
 public:
  contact();
  virtual ~contact();

  contact(const contact& from);

  inline contact& operator=(const contact& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const contact& default_instance();

  static inline const contact* internal_default_instance() {
    return reinterpret_cast<const contact*>(
               &_contact_default_instance_);
  }

  void Swap(contact* other);

  // implements Message ----------------------------------------------

  inline contact* New() const PROTOBUF_FINAL { return New(NULL); }

  contact* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const contact& from);
  void MergeFrom(const contact& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output)
      const PROTOBUF_FINAL {
    return InternalSerializeWithCachedSizesToArray(
        ::google::protobuf::io::CodedOutputStream::IsDefaultSerializationDeterministic(), output);
  }
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(contact* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string name = 2;
  void clear_name();
  static const int kNameFieldNumber = 2;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  #if LANG_CXX11
  void set_name(::std::string&& value);
  #endif
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // uint64 sn = 1;
  void clear_sn();
  static const int kSnFieldNumber = 1;
  ::google::protobuf::uint64 sn() const;
  void set_sn(::google::protobuf::uint64 value);

  // float score = 3;
  void clear_score();
  static const int kScoreFieldNumber = 3;
  float score() const;
  void set_score(float value);

  // @@protoc_insertion_point(class_scope:contacts.contact)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::uint64 sn_;
  float score_;
  mutable int _cached_size_;
  friend struct  protobuf_contacts_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// contact

// uint64 sn = 1;
inline void contact::clear_sn() {
  sn_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 contact::sn() const {
  // @@protoc_insertion_point(field_get:contacts.contact.sn)
  return sn_;
}
inline void contact::set_sn(::google::protobuf::uint64 value) {
  
  sn_ = value;
  // @@protoc_insertion_point(field_set:contacts.contact.sn)
}

// string name = 2;
inline void contact::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& contact::name() const {
  // @@protoc_insertion_point(field_get:contacts.contact.name)
  return name_.GetNoArena();
}
inline void contact::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:contacts.contact.name)
}
#if LANG_CXX11
inline void contact::set_name(::std::string&& value) {
  
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:contacts.contact.name)
}
#endif
inline void contact::set_name(const char* value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:contacts.contact.name)
}
inline void contact::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:contacts.contact.name)
}
inline ::std::string* contact::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:contacts.contact.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* contact::release_name() {
  // @@protoc_insertion_point(field_release:contacts.contact.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void contact::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:contacts.contact.name)
}

// float score = 3;
inline void contact::clear_score() {
  score_ = 0;
}
inline float contact::score() const {
  // @@protoc_insertion_point(field_get:contacts.contact.score)
  return score_;
}
inline void contact::set_score(float value) {
  
  score_ = value;
  // @@protoc_insertion_point(field_set:contacts.contact.score)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace contacts

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_contacts_2eproto__INCLUDED
