// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: steammessages_oauth.steamworkssdk.proto

#ifndef PROTOBUF_steammessages_5foauth_2esteamworkssdk_2eproto__INCLUDED
#define PROTOBUF_steammessages_5foauth_2esteamworkssdk_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3003000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3003000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "steammessages_unified_base.steamworkssdk.pb.h"
// @@protoc_insertion_point(includes)
namespace proto {
namespace dota {
class COAuthToken_ImplicitGrantNoPrompt_Request;
class COAuthToken_ImplicitGrantNoPrompt_RequestDefaultTypeInternal;
extern COAuthToken_ImplicitGrantNoPrompt_RequestDefaultTypeInternal _COAuthToken_ImplicitGrantNoPrompt_Request_default_instance_;
class COAuthToken_ImplicitGrantNoPrompt_Response;
class COAuthToken_ImplicitGrantNoPrompt_ResponseDefaultTypeInternal;
extern COAuthToken_ImplicitGrantNoPrompt_ResponseDefaultTypeInternal _COAuthToken_ImplicitGrantNoPrompt_Response_default_instance_;
}  // namespace dota
}  // namespace proto

namespace proto {
namespace dota {

namespace protobuf_steammessages_5foauth_2esteamworkssdk_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[];
  static const ::google::protobuf::uint32 offsets[];
  static void InitDefaultsImpl();
  static void Shutdown();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_steammessages_5foauth_2esteamworkssdk_2eproto

// ===================================================================

class COAuthToken_ImplicitGrantNoPrompt_Request : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:proto.dota.COAuthToken_ImplicitGrantNoPrompt_Request) */ {
 public:
  COAuthToken_ImplicitGrantNoPrompt_Request();
  virtual ~COAuthToken_ImplicitGrantNoPrompt_Request();

  COAuthToken_ImplicitGrantNoPrompt_Request(const COAuthToken_ImplicitGrantNoPrompt_Request& from);

  inline COAuthToken_ImplicitGrantNoPrompt_Request& operator=(const COAuthToken_ImplicitGrantNoPrompt_Request& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const COAuthToken_ImplicitGrantNoPrompt_Request& default_instance();

  static inline const COAuthToken_ImplicitGrantNoPrompt_Request* internal_default_instance() {
    return reinterpret_cast<const COAuthToken_ImplicitGrantNoPrompt_Request*>(
               &_COAuthToken_ImplicitGrantNoPrompt_Request_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(COAuthToken_ImplicitGrantNoPrompt_Request* other);

  // implements Message ----------------------------------------------

  inline COAuthToken_ImplicitGrantNoPrompt_Request* New() const PROTOBUF_FINAL { return New(NULL); }

  COAuthToken_ImplicitGrantNoPrompt_Request* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const COAuthToken_ImplicitGrantNoPrompt_Request& from);
  void MergeFrom(const COAuthToken_ImplicitGrantNoPrompt_Request& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(COAuthToken_ImplicitGrantNoPrompt_Request* other);
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

  // optional string clientid = 1 [(.proto.dota.description) = "Client ID for which to count the number of issued tokens"];
  bool has_clientid() const;
  void clear_clientid();
  static const int kClientidFieldNumber = 1;
  const ::std::string& clientid() const;
  void set_clientid(const ::std::string& value);
  #if LANG_CXX11
  void set_clientid(::std::string&& value);
  #endif
  void set_clientid(const char* value);
  void set_clientid(const char* value, size_t size);
  ::std::string* mutable_clientid();
  ::std::string* release_clientid();
  void set_allocated_clientid(::std::string* clientid);

  // @@protoc_insertion_point(class_scope:proto.dota.COAuthToken_ImplicitGrantNoPrompt_Request)
 private:
  void set_has_clientid();
  void clear_has_clientid();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr clientid_;
  friend struct protobuf_steammessages_5foauth_2esteamworkssdk_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class COAuthToken_ImplicitGrantNoPrompt_Response : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:proto.dota.COAuthToken_ImplicitGrantNoPrompt_Response) */ {
 public:
  COAuthToken_ImplicitGrantNoPrompt_Response();
  virtual ~COAuthToken_ImplicitGrantNoPrompt_Response();

  COAuthToken_ImplicitGrantNoPrompt_Response(const COAuthToken_ImplicitGrantNoPrompt_Response& from);

  inline COAuthToken_ImplicitGrantNoPrompt_Response& operator=(const COAuthToken_ImplicitGrantNoPrompt_Response& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const COAuthToken_ImplicitGrantNoPrompt_Response& default_instance();

  static inline const COAuthToken_ImplicitGrantNoPrompt_Response* internal_default_instance() {
    return reinterpret_cast<const COAuthToken_ImplicitGrantNoPrompt_Response*>(
               &_COAuthToken_ImplicitGrantNoPrompt_Response_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(COAuthToken_ImplicitGrantNoPrompt_Response* other);

  // implements Message ----------------------------------------------

  inline COAuthToken_ImplicitGrantNoPrompt_Response* New() const PROTOBUF_FINAL { return New(NULL); }

  COAuthToken_ImplicitGrantNoPrompt_Response* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const COAuthToken_ImplicitGrantNoPrompt_Response& from);
  void MergeFrom(const COAuthToken_ImplicitGrantNoPrompt_Response& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(COAuthToken_ImplicitGrantNoPrompt_Response* other);
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

  // optional string access_token = 1 [(.proto.dota.description) = "OAuth Token, granted on success"];
  bool has_access_token() const;
  void clear_access_token();
  static const int kAccessTokenFieldNumber = 1;
  const ::std::string& access_token() const;
  void set_access_token(const ::std::string& value);
  #if LANG_CXX11
  void set_access_token(::std::string&& value);
  #endif
  void set_access_token(const char* value);
  void set_access_token(const char* value, size_t size);
  ::std::string* mutable_access_token();
  ::std::string* release_access_token();
  void set_allocated_access_token(::std::string* access_token);

  // optional string redirect_uri = 2 [(.proto.dota.description) = "Redirection URI provided during client registration."];
  bool has_redirect_uri() const;
  void clear_redirect_uri();
  static const int kRedirectUriFieldNumber = 2;
  const ::std::string& redirect_uri() const;
  void set_redirect_uri(const ::std::string& value);
  #if LANG_CXX11
  void set_redirect_uri(::std::string&& value);
  #endif
  void set_redirect_uri(const char* value);
  void set_redirect_uri(const char* value, size_t size);
  ::std::string* mutable_redirect_uri();
  ::std::string* release_redirect_uri();
  void set_allocated_redirect_uri(::std::string* redirect_uri);

  // @@protoc_insertion_point(class_scope:proto.dota.COAuthToken_ImplicitGrantNoPrompt_Response)
 private:
  void set_has_access_token();
  void clear_has_access_token();
  void set_has_redirect_uri();
  void clear_has_redirect_uri();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr access_token_;
  ::google::protobuf::internal::ArenaStringPtr redirect_uri_;
  friend struct protobuf_steammessages_5foauth_2esteamworkssdk_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// COAuthToken_ImplicitGrantNoPrompt_Request

// optional string clientid = 1 [(.proto.dota.description) = "Client ID for which to count the number of issued tokens"];
inline bool COAuthToken_ImplicitGrantNoPrompt_Request::has_clientid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void COAuthToken_ImplicitGrantNoPrompt_Request::set_has_clientid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void COAuthToken_ImplicitGrantNoPrompt_Request::clear_has_clientid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void COAuthToken_ImplicitGrantNoPrompt_Request::clear_clientid() {
  clientid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_clientid();
}
inline const ::std::string& COAuthToken_ImplicitGrantNoPrompt_Request::clientid() const {
  // @@protoc_insertion_point(field_get:proto.dota.COAuthToken_ImplicitGrantNoPrompt_Request.clientid)
  return clientid_.GetNoArena();
}
inline void COAuthToken_ImplicitGrantNoPrompt_Request::set_clientid(const ::std::string& value) {
  set_has_clientid();
  clientid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:proto.dota.COAuthToken_ImplicitGrantNoPrompt_Request.clientid)
}
#if LANG_CXX11
inline void COAuthToken_ImplicitGrantNoPrompt_Request::set_clientid(::std::string&& value) {
  set_has_clientid();
  clientid_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:proto.dota.COAuthToken_ImplicitGrantNoPrompt_Request.clientid)
}
#endif
inline void COAuthToken_ImplicitGrantNoPrompt_Request::set_clientid(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_clientid();
  clientid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:proto.dota.COAuthToken_ImplicitGrantNoPrompt_Request.clientid)
}
inline void COAuthToken_ImplicitGrantNoPrompt_Request::set_clientid(const char* value, size_t size) {
  set_has_clientid();
  clientid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:proto.dota.COAuthToken_ImplicitGrantNoPrompt_Request.clientid)
}
inline ::std::string* COAuthToken_ImplicitGrantNoPrompt_Request::mutable_clientid() {
  set_has_clientid();
  // @@protoc_insertion_point(field_mutable:proto.dota.COAuthToken_ImplicitGrantNoPrompt_Request.clientid)
  return clientid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* COAuthToken_ImplicitGrantNoPrompt_Request::release_clientid() {
  // @@protoc_insertion_point(field_release:proto.dota.COAuthToken_ImplicitGrantNoPrompt_Request.clientid)
  clear_has_clientid();
  return clientid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void COAuthToken_ImplicitGrantNoPrompt_Request::set_allocated_clientid(::std::string* clientid) {
  if (clientid != NULL) {
    set_has_clientid();
  } else {
    clear_has_clientid();
  }
  clientid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), clientid);
  // @@protoc_insertion_point(field_set_allocated:proto.dota.COAuthToken_ImplicitGrantNoPrompt_Request.clientid)
}

// -------------------------------------------------------------------

// COAuthToken_ImplicitGrantNoPrompt_Response

// optional string access_token = 1 [(.proto.dota.description) = "OAuth Token, granted on success"];
inline bool COAuthToken_ImplicitGrantNoPrompt_Response::has_access_token() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void COAuthToken_ImplicitGrantNoPrompt_Response::set_has_access_token() {
  _has_bits_[0] |= 0x00000001u;
}
inline void COAuthToken_ImplicitGrantNoPrompt_Response::clear_has_access_token() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void COAuthToken_ImplicitGrantNoPrompt_Response::clear_access_token() {
  access_token_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_access_token();
}
inline const ::std::string& COAuthToken_ImplicitGrantNoPrompt_Response::access_token() const {
  // @@protoc_insertion_point(field_get:proto.dota.COAuthToken_ImplicitGrantNoPrompt_Response.access_token)
  return access_token_.GetNoArena();
}
inline void COAuthToken_ImplicitGrantNoPrompt_Response::set_access_token(const ::std::string& value) {
  set_has_access_token();
  access_token_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:proto.dota.COAuthToken_ImplicitGrantNoPrompt_Response.access_token)
}
#if LANG_CXX11
inline void COAuthToken_ImplicitGrantNoPrompt_Response::set_access_token(::std::string&& value) {
  set_has_access_token();
  access_token_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:proto.dota.COAuthToken_ImplicitGrantNoPrompt_Response.access_token)
}
#endif
inline void COAuthToken_ImplicitGrantNoPrompt_Response::set_access_token(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_access_token();
  access_token_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:proto.dota.COAuthToken_ImplicitGrantNoPrompt_Response.access_token)
}
inline void COAuthToken_ImplicitGrantNoPrompt_Response::set_access_token(const char* value, size_t size) {
  set_has_access_token();
  access_token_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:proto.dota.COAuthToken_ImplicitGrantNoPrompt_Response.access_token)
}
inline ::std::string* COAuthToken_ImplicitGrantNoPrompt_Response::mutable_access_token() {
  set_has_access_token();
  // @@protoc_insertion_point(field_mutable:proto.dota.COAuthToken_ImplicitGrantNoPrompt_Response.access_token)
  return access_token_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* COAuthToken_ImplicitGrantNoPrompt_Response::release_access_token() {
  // @@protoc_insertion_point(field_release:proto.dota.COAuthToken_ImplicitGrantNoPrompt_Response.access_token)
  clear_has_access_token();
  return access_token_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void COAuthToken_ImplicitGrantNoPrompt_Response::set_allocated_access_token(::std::string* access_token) {
  if (access_token != NULL) {
    set_has_access_token();
  } else {
    clear_has_access_token();
  }
  access_token_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), access_token);
  // @@protoc_insertion_point(field_set_allocated:proto.dota.COAuthToken_ImplicitGrantNoPrompt_Response.access_token)
}

// optional string redirect_uri = 2 [(.proto.dota.description) = "Redirection URI provided during client registration."];
inline bool COAuthToken_ImplicitGrantNoPrompt_Response::has_redirect_uri() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void COAuthToken_ImplicitGrantNoPrompt_Response::set_has_redirect_uri() {
  _has_bits_[0] |= 0x00000002u;
}
inline void COAuthToken_ImplicitGrantNoPrompt_Response::clear_has_redirect_uri() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void COAuthToken_ImplicitGrantNoPrompt_Response::clear_redirect_uri() {
  redirect_uri_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_redirect_uri();
}
inline const ::std::string& COAuthToken_ImplicitGrantNoPrompt_Response::redirect_uri() const {
  // @@protoc_insertion_point(field_get:proto.dota.COAuthToken_ImplicitGrantNoPrompt_Response.redirect_uri)
  return redirect_uri_.GetNoArena();
}
inline void COAuthToken_ImplicitGrantNoPrompt_Response::set_redirect_uri(const ::std::string& value) {
  set_has_redirect_uri();
  redirect_uri_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:proto.dota.COAuthToken_ImplicitGrantNoPrompt_Response.redirect_uri)
}
#if LANG_CXX11
inline void COAuthToken_ImplicitGrantNoPrompt_Response::set_redirect_uri(::std::string&& value) {
  set_has_redirect_uri();
  redirect_uri_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:proto.dota.COAuthToken_ImplicitGrantNoPrompt_Response.redirect_uri)
}
#endif
inline void COAuthToken_ImplicitGrantNoPrompt_Response::set_redirect_uri(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_redirect_uri();
  redirect_uri_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:proto.dota.COAuthToken_ImplicitGrantNoPrompt_Response.redirect_uri)
}
inline void COAuthToken_ImplicitGrantNoPrompt_Response::set_redirect_uri(const char* value, size_t size) {
  set_has_redirect_uri();
  redirect_uri_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:proto.dota.COAuthToken_ImplicitGrantNoPrompt_Response.redirect_uri)
}
inline ::std::string* COAuthToken_ImplicitGrantNoPrompt_Response::mutable_redirect_uri() {
  set_has_redirect_uri();
  // @@protoc_insertion_point(field_mutable:proto.dota.COAuthToken_ImplicitGrantNoPrompt_Response.redirect_uri)
  return redirect_uri_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* COAuthToken_ImplicitGrantNoPrompt_Response::release_redirect_uri() {
  // @@protoc_insertion_point(field_release:proto.dota.COAuthToken_ImplicitGrantNoPrompt_Response.redirect_uri)
  clear_has_redirect_uri();
  return redirect_uri_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void COAuthToken_ImplicitGrantNoPrompt_Response::set_allocated_redirect_uri(::std::string* redirect_uri) {
  if (redirect_uri != NULL) {
    set_has_redirect_uri();
  } else {
    clear_has_redirect_uri();
  }
  redirect_uri_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), redirect_uri);
  // @@protoc_insertion_point(field_set_allocated:proto.dota.COAuthToken_ImplicitGrantNoPrompt_Response.redirect_uri)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


}  // namespace dota
}  // namespace proto

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_steammessages_5foauth_2esteamworkssdk_2eproto__INCLUDED
