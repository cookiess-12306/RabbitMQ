// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: request.proto

#ifndef PROTOBUF_request_2eproto__INCLUDED
#define PROTOBUF_request_2eproto__INCLUDED

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
namespace bit {
class AddRequest;
class AddRequestDefaultTypeInternal;
extern AddRequestDefaultTypeInternal _AddRequest_default_instance_;
class AddResponse;
class AddResponseDefaultTypeInternal;
extern AddResponseDefaultTypeInternal _AddResponse_default_instance_;
class TranslateRequest;
class TranslateRequestDefaultTypeInternal;
extern TranslateRequestDefaultTypeInternal _TranslateRequest_default_instance_;
class TranslateResponse;
class TranslateResponseDefaultTypeInternal;
extern TranslateResponseDefaultTypeInternal _TranslateResponse_default_instance_;
}  // namespace bit

namespace bit {

namespace protobuf_request_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::uint32 offsets[];
  static void InitDefaultsImpl();
  static void Shutdown();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_request_2eproto

// ===================================================================

class TranslateRequest : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:bit.TranslateRequest) */ {
 public:
  TranslateRequest();
  virtual ~TranslateRequest();

  TranslateRequest(const TranslateRequest& from);

  inline TranslateRequest& operator=(const TranslateRequest& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const TranslateRequest& default_instance();

  static inline const TranslateRequest* internal_default_instance() {
    return reinterpret_cast<const TranslateRequest*>(
               &_TranslateRequest_default_instance_);
  }

  void Swap(TranslateRequest* other);

  // implements Message ----------------------------------------------

  inline TranslateRequest* New() const PROTOBUF_FINAL { return New(NULL); }

  TranslateRequest* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const TranslateRequest& from);
  void MergeFrom(const TranslateRequest& from);
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
  void InternalSwap(TranslateRequest* other);
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

  // string msg = 1;
  void clear_msg();
  static const int kMsgFieldNumber = 1;
  const ::std::string& msg() const;
  void set_msg(const ::std::string& value);
  #if LANG_CXX11
  void set_msg(::std::string&& value);
  #endif
  void set_msg(const char* value);
  void set_msg(const char* value, size_t size);
  ::std::string* mutable_msg();
  ::std::string* release_msg();
  void set_allocated_msg(::std::string* msg);

  // @@protoc_insertion_point(class_scope:bit.TranslateRequest)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr msg_;
  mutable int _cached_size_;
  friend struct  protobuf_request_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class TranslateResponse : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:bit.TranslateResponse) */ {
 public:
  TranslateResponse();
  virtual ~TranslateResponse();

  TranslateResponse(const TranslateResponse& from);

  inline TranslateResponse& operator=(const TranslateResponse& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const TranslateResponse& default_instance();

  static inline const TranslateResponse* internal_default_instance() {
    return reinterpret_cast<const TranslateResponse*>(
               &_TranslateResponse_default_instance_);
  }

  void Swap(TranslateResponse* other);

  // implements Message ----------------------------------------------

  inline TranslateResponse* New() const PROTOBUF_FINAL { return New(NULL); }

  TranslateResponse* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const TranslateResponse& from);
  void MergeFrom(const TranslateResponse& from);
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
  void InternalSwap(TranslateResponse* other);
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

  // string msg = 1;
  void clear_msg();
  static const int kMsgFieldNumber = 1;
  const ::std::string& msg() const;
  void set_msg(const ::std::string& value);
  #if LANG_CXX11
  void set_msg(::std::string&& value);
  #endif
  void set_msg(const char* value);
  void set_msg(const char* value, size_t size);
  ::std::string* mutable_msg();
  ::std::string* release_msg();
  void set_allocated_msg(::std::string* msg);

  // @@protoc_insertion_point(class_scope:bit.TranslateResponse)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr msg_;
  mutable int _cached_size_;
  friend struct  protobuf_request_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class AddRequest : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:bit.AddRequest) */ {
 public:
  AddRequest();
  virtual ~AddRequest();

  AddRequest(const AddRequest& from);

  inline AddRequest& operator=(const AddRequest& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const AddRequest& default_instance();

  static inline const AddRequest* internal_default_instance() {
    return reinterpret_cast<const AddRequest*>(
               &_AddRequest_default_instance_);
  }

  void Swap(AddRequest* other);

  // implements Message ----------------------------------------------

  inline AddRequest* New() const PROTOBUF_FINAL { return New(NULL); }

  AddRequest* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const AddRequest& from);
  void MergeFrom(const AddRequest& from);
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
  void InternalSwap(AddRequest* other);
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

  // int32 num1 = 1;
  void clear_num1();
  static const int kNum1FieldNumber = 1;
  ::google::protobuf::int32 num1() const;
  void set_num1(::google::protobuf::int32 value);

  // int32 num2 = 2;
  void clear_num2();
  static const int kNum2FieldNumber = 2;
  ::google::protobuf::int32 num2() const;
  void set_num2(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:bit.AddRequest)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::int32 num1_;
  ::google::protobuf::int32 num2_;
  mutable int _cached_size_;
  friend struct  protobuf_request_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class AddResponse : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:bit.AddResponse) */ {
 public:
  AddResponse();
  virtual ~AddResponse();

  AddResponse(const AddResponse& from);

  inline AddResponse& operator=(const AddResponse& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const AddResponse& default_instance();

  static inline const AddResponse* internal_default_instance() {
    return reinterpret_cast<const AddResponse*>(
               &_AddResponse_default_instance_);
  }

  void Swap(AddResponse* other);

  // implements Message ----------------------------------------------

  inline AddResponse* New() const PROTOBUF_FINAL { return New(NULL); }

  AddResponse* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const AddResponse& from);
  void MergeFrom(const AddResponse& from);
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
  void InternalSwap(AddResponse* other);
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

  // int32 result = 1;
  void clear_result();
  static const int kResultFieldNumber = 1;
  ::google::protobuf::int32 result() const;
  void set_result(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:bit.AddResponse)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::int32 result_;
  mutable int _cached_size_;
  friend struct  protobuf_request_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// TranslateRequest

// string msg = 1;
inline void TranslateRequest::clear_msg() {
  msg_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& TranslateRequest::msg() const {
  // @@protoc_insertion_point(field_get:bit.TranslateRequest.msg)
  return msg_.GetNoArena();
}
inline void TranslateRequest::set_msg(const ::std::string& value) {
  
  msg_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:bit.TranslateRequest.msg)
}
#if LANG_CXX11
inline void TranslateRequest::set_msg(::std::string&& value) {
  
  msg_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:bit.TranslateRequest.msg)
}
#endif
inline void TranslateRequest::set_msg(const char* value) {
  
  msg_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:bit.TranslateRequest.msg)
}
inline void TranslateRequest::set_msg(const char* value, size_t size) {
  
  msg_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:bit.TranslateRequest.msg)
}
inline ::std::string* TranslateRequest::mutable_msg() {
  
  // @@protoc_insertion_point(field_mutable:bit.TranslateRequest.msg)
  return msg_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* TranslateRequest::release_msg() {
  // @@protoc_insertion_point(field_release:bit.TranslateRequest.msg)
  
  return msg_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void TranslateRequest::set_allocated_msg(::std::string* msg) {
  if (msg != NULL) {
    
  } else {
    
  }
  msg_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), msg);
  // @@protoc_insertion_point(field_set_allocated:bit.TranslateRequest.msg)
}

// -------------------------------------------------------------------

// TranslateResponse

// string msg = 1;
inline void TranslateResponse::clear_msg() {
  msg_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& TranslateResponse::msg() const {
  // @@protoc_insertion_point(field_get:bit.TranslateResponse.msg)
  return msg_.GetNoArena();
}
inline void TranslateResponse::set_msg(const ::std::string& value) {
  
  msg_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:bit.TranslateResponse.msg)
}
#if LANG_CXX11
inline void TranslateResponse::set_msg(::std::string&& value) {
  
  msg_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:bit.TranslateResponse.msg)
}
#endif
inline void TranslateResponse::set_msg(const char* value) {
  
  msg_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:bit.TranslateResponse.msg)
}
inline void TranslateResponse::set_msg(const char* value, size_t size) {
  
  msg_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:bit.TranslateResponse.msg)
}
inline ::std::string* TranslateResponse::mutable_msg() {
  
  // @@protoc_insertion_point(field_mutable:bit.TranslateResponse.msg)
  return msg_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* TranslateResponse::release_msg() {
  // @@protoc_insertion_point(field_release:bit.TranslateResponse.msg)
  
  return msg_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void TranslateResponse::set_allocated_msg(::std::string* msg) {
  if (msg != NULL) {
    
  } else {
    
  }
  msg_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), msg);
  // @@protoc_insertion_point(field_set_allocated:bit.TranslateResponse.msg)
}

// -------------------------------------------------------------------

// AddRequest

// int32 num1 = 1;
inline void AddRequest::clear_num1() {
  num1_ = 0;
}
inline ::google::protobuf::int32 AddRequest::num1() const {
  // @@protoc_insertion_point(field_get:bit.AddRequest.num1)
  return num1_;
}
inline void AddRequest::set_num1(::google::protobuf::int32 value) {
  
  num1_ = value;
  // @@protoc_insertion_point(field_set:bit.AddRequest.num1)
}

// int32 num2 = 2;
inline void AddRequest::clear_num2() {
  num2_ = 0;
}
inline ::google::protobuf::int32 AddRequest::num2() const {
  // @@protoc_insertion_point(field_get:bit.AddRequest.num2)
  return num2_;
}
inline void AddRequest::set_num2(::google::protobuf::int32 value) {
  
  num2_ = value;
  // @@protoc_insertion_point(field_set:bit.AddRequest.num2)
}

// -------------------------------------------------------------------

// AddResponse

// int32 result = 1;
inline void AddResponse::clear_result() {
  result_ = 0;
}
inline ::google::protobuf::int32 AddResponse::result() const {
  // @@protoc_insertion_point(field_get:bit.AddResponse.result)
  return result_;
}
inline void AddResponse::set_result(::google::protobuf::int32 value) {
  
  result_ = value;
  // @@protoc_insertion_point(field_set:bit.AddResponse.result)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


}  // namespace bit

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_request_2eproto__INCLUDED
