// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: steammessages_econ.steamclient.proto

#ifndef PROTOBUF_steammessages_5fecon_2esteamclient_2eproto__INCLUDED
#define PROTOBUF_steammessages_5fecon_2esteamclient_2eproto__INCLUDED

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
#include <google/protobuf/service.h>
#include <google/protobuf/unknown_field_set.h>
#include "steammessages_unified_base.steamclient.pb.h"
// @@protoc_insertion_point(includes)
namespace proto {
namespace steam {
class CEcon_ClientGetItemShopOverlayAuthURL_Request;
class CEcon_ClientGetItemShopOverlayAuthURL_RequestDefaultTypeInternal;
extern CEcon_ClientGetItemShopOverlayAuthURL_RequestDefaultTypeInternal _CEcon_ClientGetItemShopOverlayAuthURL_Request_default_instance_;
class CEcon_ClientGetItemShopOverlayAuthURL_Response;
class CEcon_ClientGetItemShopOverlayAuthURL_ResponseDefaultTypeInternal;
extern CEcon_ClientGetItemShopOverlayAuthURL_ResponseDefaultTypeInternal _CEcon_ClientGetItemShopOverlayAuthURL_Response_default_instance_;
class NoResponse;
class NoResponseDefaultTypeInternal;
extern NoResponseDefaultTypeInternal _NoResponse_default_instance_;
}  // namespace steam
}  // namespace proto

namespace proto {
namespace steam {

namespace protobuf_steammessages_5fecon_2esteamclient_2eproto {
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
}  // namespace protobuf_steammessages_5fecon_2esteamclient_2eproto

// ===================================================================

class CEcon_ClientGetItemShopOverlayAuthURL_Request : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:proto.steam.CEcon_ClientGetItemShopOverlayAuthURL_Request) */ {
 public:
  CEcon_ClientGetItemShopOverlayAuthURL_Request();
  virtual ~CEcon_ClientGetItemShopOverlayAuthURL_Request();

  CEcon_ClientGetItemShopOverlayAuthURL_Request(const CEcon_ClientGetItemShopOverlayAuthURL_Request& from);

  inline CEcon_ClientGetItemShopOverlayAuthURL_Request& operator=(const CEcon_ClientGetItemShopOverlayAuthURL_Request& from) {
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
  static const CEcon_ClientGetItemShopOverlayAuthURL_Request& default_instance();

  static inline const CEcon_ClientGetItemShopOverlayAuthURL_Request* internal_default_instance() {
    return reinterpret_cast<const CEcon_ClientGetItemShopOverlayAuthURL_Request*>(
               &_CEcon_ClientGetItemShopOverlayAuthURL_Request_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(CEcon_ClientGetItemShopOverlayAuthURL_Request* other);

  // implements Message ----------------------------------------------

  inline CEcon_ClientGetItemShopOverlayAuthURL_Request* New() const PROTOBUF_FINAL { return New(NULL); }

  CEcon_ClientGetItemShopOverlayAuthURL_Request* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const CEcon_ClientGetItemShopOverlayAuthURL_Request& from);
  void MergeFrom(const CEcon_ClientGetItemShopOverlayAuthURL_Request& from);
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
  void InternalSwap(CEcon_ClientGetItemShopOverlayAuthURL_Request* other);
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

  // optional string return_url = 1;
  bool has_return_url() const;
  void clear_return_url();
  static const int kReturnUrlFieldNumber = 1;
  const ::std::string& return_url() const;
  void set_return_url(const ::std::string& value);
  #if LANG_CXX11
  void set_return_url(::std::string&& value);
  #endif
  void set_return_url(const char* value);
  void set_return_url(const char* value, size_t size);
  ::std::string* mutable_return_url();
  ::std::string* release_return_url();
  void set_allocated_return_url(::std::string* return_url);

  // @@protoc_insertion_point(class_scope:proto.steam.CEcon_ClientGetItemShopOverlayAuthURL_Request)
 private:
  void set_has_return_url();
  void clear_has_return_url();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr return_url_;
  friend struct protobuf_steammessages_5fecon_2esteamclient_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class CEcon_ClientGetItemShopOverlayAuthURL_Response : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:proto.steam.CEcon_ClientGetItemShopOverlayAuthURL_Response) */ {
 public:
  CEcon_ClientGetItemShopOverlayAuthURL_Response();
  virtual ~CEcon_ClientGetItemShopOverlayAuthURL_Response();

  CEcon_ClientGetItemShopOverlayAuthURL_Response(const CEcon_ClientGetItemShopOverlayAuthURL_Response& from);

  inline CEcon_ClientGetItemShopOverlayAuthURL_Response& operator=(const CEcon_ClientGetItemShopOverlayAuthURL_Response& from) {
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
  static const CEcon_ClientGetItemShopOverlayAuthURL_Response& default_instance();

  static inline const CEcon_ClientGetItemShopOverlayAuthURL_Response* internal_default_instance() {
    return reinterpret_cast<const CEcon_ClientGetItemShopOverlayAuthURL_Response*>(
               &_CEcon_ClientGetItemShopOverlayAuthURL_Response_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(CEcon_ClientGetItemShopOverlayAuthURL_Response* other);

  // implements Message ----------------------------------------------

  inline CEcon_ClientGetItemShopOverlayAuthURL_Response* New() const PROTOBUF_FINAL { return New(NULL); }

  CEcon_ClientGetItemShopOverlayAuthURL_Response* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const CEcon_ClientGetItemShopOverlayAuthURL_Response& from);
  void MergeFrom(const CEcon_ClientGetItemShopOverlayAuthURL_Response& from);
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
  void InternalSwap(CEcon_ClientGetItemShopOverlayAuthURL_Response* other);
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

  // optional string url = 1;
  bool has_url() const;
  void clear_url();
  static const int kUrlFieldNumber = 1;
  const ::std::string& url() const;
  void set_url(const ::std::string& value);
  #if LANG_CXX11
  void set_url(::std::string&& value);
  #endif
  void set_url(const char* value);
  void set_url(const char* value, size_t size);
  ::std::string* mutable_url();
  ::std::string* release_url();
  void set_allocated_url(::std::string* url);

  // @@protoc_insertion_point(class_scope:proto.steam.CEcon_ClientGetItemShopOverlayAuthURL_Response)
 private:
  void set_has_url();
  void clear_has_url();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr url_;
  friend struct protobuf_steammessages_5fecon_2esteamclient_2eproto::TableStruct;
};
// ===================================================================

class Econ_Stub;

class Econ : public ::google::protobuf::Service {
 protected:
  // This class should be treated as an abstract interface.
  inline Econ() {};
 public:
  virtual ~Econ();

  typedef Econ_Stub Stub;

  static const ::google::protobuf::ServiceDescriptor* descriptor();

  virtual void ClientGetItemShopOverlayAuthURL(::google::protobuf::RpcController* controller,
                       const ::proto::steam::CEcon_ClientGetItemShopOverlayAuthURL_Request* request,
                       ::proto::steam::CEcon_ClientGetItemShopOverlayAuthURL_Response* response,
                       ::google::protobuf::Closure* done);

  // implements Service ----------------------------------------------

  const ::google::protobuf::ServiceDescriptor* GetDescriptor();
  void CallMethod(const ::google::protobuf::MethodDescriptor* method,
                  ::google::protobuf::RpcController* controller,
                  const ::google::protobuf::Message* request,
                  ::google::protobuf::Message* response,
                  ::google::protobuf::Closure* done);
  const ::google::protobuf::Message& GetRequestPrototype(
    const ::google::protobuf::MethodDescriptor* method) const;
  const ::google::protobuf::Message& GetResponsePrototype(
    const ::google::protobuf::MethodDescriptor* method) const;

 private:
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(Econ);
};

class Econ_Stub : public Econ {
 public:
  Econ_Stub(::google::protobuf::RpcChannel* channel);
  Econ_Stub(::google::protobuf::RpcChannel* channel,
                   ::google::protobuf::Service::ChannelOwnership ownership);
  ~Econ_Stub();

  inline ::google::protobuf::RpcChannel* channel() { return channel_; }

  // implements Econ ------------------------------------------

  void ClientGetItemShopOverlayAuthURL(::google::protobuf::RpcController* controller,
                       const ::proto::steam::CEcon_ClientGetItemShopOverlayAuthURL_Request* request,
                       ::proto::steam::CEcon_ClientGetItemShopOverlayAuthURL_Response* response,
                       ::google::protobuf::Closure* done);
 private:
  ::google::protobuf::RpcChannel* channel_;
  bool owns_channel_;
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(Econ_Stub);
};


// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// CEcon_ClientGetItemShopOverlayAuthURL_Request

// optional string return_url = 1;
inline bool CEcon_ClientGetItemShopOverlayAuthURL_Request::has_return_url() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CEcon_ClientGetItemShopOverlayAuthURL_Request::set_has_return_url() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CEcon_ClientGetItemShopOverlayAuthURL_Request::clear_has_return_url() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CEcon_ClientGetItemShopOverlayAuthURL_Request::clear_return_url() {
  return_url_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_return_url();
}
inline const ::std::string& CEcon_ClientGetItemShopOverlayAuthURL_Request::return_url() const {
  // @@protoc_insertion_point(field_get:proto.steam.CEcon_ClientGetItemShopOverlayAuthURL_Request.return_url)
  return return_url_.GetNoArena();
}
inline void CEcon_ClientGetItemShopOverlayAuthURL_Request::set_return_url(const ::std::string& value) {
  set_has_return_url();
  return_url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:proto.steam.CEcon_ClientGetItemShopOverlayAuthURL_Request.return_url)
}
#if LANG_CXX11
inline void CEcon_ClientGetItemShopOverlayAuthURL_Request::set_return_url(::std::string&& value) {
  set_has_return_url();
  return_url_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:proto.steam.CEcon_ClientGetItemShopOverlayAuthURL_Request.return_url)
}
#endif
inline void CEcon_ClientGetItemShopOverlayAuthURL_Request::set_return_url(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_return_url();
  return_url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:proto.steam.CEcon_ClientGetItemShopOverlayAuthURL_Request.return_url)
}
inline void CEcon_ClientGetItemShopOverlayAuthURL_Request::set_return_url(const char* value, size_t size) {
  set_has_return_url();
  return_url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:proto.steam.CEcon_ClientGetItemShopOverlayAuthURL_Request.return_url)
}
inline ::std::string* CEcon_ClientGetItemShopOverlayAuthURL_Request::mutable_return_url() {
  set_has_return_url();
  // @@protoc_insertion_point(field_mutable:proto.steam.CEcon_ClientGetItemShopOverlayAuthURL_Request.return_url)
  return return_url_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* CEcon_ClientGetItemShopOverlayAuthURL_Request::release_return_url() {
  // @@protoc_insertion_point(field_release:proto.steam.CEcon_ClientGetItemShopOverlayAuthURL_Request.return_url)
  clear_has_return_url();
  return return_url_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void CEcon_ClientGetItemShopOverlayAuthURL_Request::set_allocated_return_url(::std::string* return_url) {
  if (return_url != NULL) {
    set_has_return_url();
  } else {
    clear_has_return_url();
  }
  return_url_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), return_url);
  // @@protoc_insertion_point(field_set_allocated:proto.steam.CEcon_ClientGetItemShopOverlayAuthURL_Request.return_url)
}

// -------------------------------------------------------------------

// CEcon_ClientGetItemShopOverlayAuthURL_Response

// optional string url = 1;
inline bool CEcon_ClientGetItemShopOverlayAuthURL_Response::has_url() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CEcon_ClientGetItemShopOverlayAuthURL_Response::set_has_url() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CEcon_ClientGetItemShopOverlayAuthURL_Response::clear_has_url() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CEcon_ClientGetItemShopOverlayAuthURL_Response::clear_url() {
  url_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_url();
}
inline const ::std::string& CEcon_ClientGetItemShopOverlayAuthURL_Response::url() const {
  // @@protoc_insertion_point(field_get:proto.steam.CEcon_ClientGetItemShopOverlayAuthURL_Response.url)
  return url_.GetNoArena();
}
inline void CEcon_ClientGetItemShopOverlayAuthURL_Response::set_url(const ::std::string& value) {
  set_has_url();
  url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:proto.steam.CEcon_ClientGetItemShopOverlayAuthURL_Response.url)
}
#if LANG_CXX11
inline void CEcon_ClientGetItemShopOverlayAuthURL_Response::set_url(::std::string&& value) {
  set_has_url();
  url_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:proto.steam.CEcon_ClientGetItemShopOverlayAuthURL_Response.url)
}
#endif
inline void CEcon_ClientGetItemShopOverlayAuthURL_Response::set_url(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_url();
  url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:proto.steam.CEcon_ClientGetItemShopOverlayAuthURL_Response.url)
}
inline void CEcon_ClientGetItemShopOverlayAuthURL_Response::set_url(const char* value, size_t size) {
  set_has_url();
  url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:proto.steam.CEcon_ClientGetItemShopOverlayAuthURL_Response.url)
}
inline ::std::string* CEcon_ClientGetItemShopOverlayAuthURL_Response::mutable_url() {
  set_has_url();
  // @@protoc_insertion_point(field_mutable:proto.steam.CEcon_ClientGetItemShopOverlayAuthURL_Response.url)
  return url_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* CEcon_ClientGetItemShopOverlayAuthURL_Response::release_url() {
  // @@protoc_insertion_point(field_release:proto.steam.CEcon_ClientGetItemShopOverlayAuthURL_Response.url)
  clear_has_url();
  return url_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void CEcon_ClientGetItemShopOverlayAuthURL_Response::set_allocated_url(::std::string* url) {
  if (url != NULL) {
    set_has_url();
  } else {
    clear_has_url();
  }
  url_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), url);
  // @@protoc_insertion_point(field_set_allocated:proto.steam.CEcon_ClientGetItemShopOverlayAuthURL_Response.url)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


}  // namespace steam
}  // namespace proto

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_steammessages_5fecon_2esteamclient_2eproto__INCLUDED
