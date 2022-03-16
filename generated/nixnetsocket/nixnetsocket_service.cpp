
//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Service implementation for the NI-XNETSOCKET Metadata
//---------------------------------------------------------------------
#include "nixnetsocket_service.h"

#include <sstream>
#include <fstream>
#include <iostream>
#include <atomic>
#include <vector>
#include "custom/xnetsocket_converters.h"
#include "custom/xnetsocket_errors.h"
#include <server/converters.h>

namespace nixnetsocket_grpc {

  using nidevice_grpc::converters::allocate_output_storage;
  using nidevice_grpc::converters::calculate_linked_array_size;
  using nidevice_grpc::converters::convert_from_grpc;
  using nidevice_grpc::converters::convert_to_grpc;
  using nidevice_grpc::converters::MatchState;

  NiXnetSocketService::NiXnetSocketService(
      NiXnetSocketLibraryInterface* library,
      ResourceRepositorySharedPtr resource_repository,
      nxIpStackRef_tResourceRepositorySharedPtr nx_ip_stack_ref_t_resource_repository,
      const NiXnetSocketFeatureToggles& feature_toggles)
      : library_(library),
      session_repository_(resource_repository),
      nx_ip_stack_ref_t_resource_repository_(nx_ip_stack_ref_t_resource_repository),
      feature_toggles_(feature_toggles)
  {
  }

  NiXnetSocketService::~NiXnetSocketService()
  {
  }

  // Returns true if it's safe to use outputs of a method with the given status.
  inline bool status_ok(int32 status)
  {
    return status >= 0;
  }

  //---------------------------------------------------------------------
  //---------------------------------------------------------------------
  ::grpc::Status NiXnetSocketService::Accept(::grpc::ServerContext* context, const AcceptRequest* request, AcceptResponse* response)
  {
    if (context->IsCancelled()) {
      return ::grpc::Status::CANCELLED;
    }
    try {
      auto socket_grpc_session = request->socket();
      nxSOCKET socket = session_repository_->access_session(socket_grpc_session.id(), socket_grpc_session.name());
      auto addr = allocate_output_storage<nxsockaddr, SockAddr>();
      nxsocklen_t addrlen {};
      auto status = library_->Accept(socket, &addr, &addrlen);
      response->set_status(status);
      if (status_ok(status)) {
        convert_to_grpc(addr, response->mutable_addr());
      }
      else {
        const auto error_message = get_last_error_message(library_);
        response->set_error_message(error_message);
        const auto error_num = get_last_error_num(library_);
        response->set_error_num(error_num);
      }
      return ::grpc::Status::OK;
    }
    catch (nidevice_grpc::LibraryLoadException& ex) {
      return ::grpc::Status(::grpc::NOT_FOUND, ex.what());
    }
  }

  //---------------------------------------------------------------------
  //---------------------------------------------------------------------
  ::grpc::Status NiXnetSocketService::Bind(::grpc::ServerContext* context, const BindRequest* request, BindResponse* response)
  {
    if (context->IsCancelled()) {
      return ::grpc::Status::CANCELLED;
    }
    try {
      auto socket_grpc_session = request->socket();
      nxSOCKET socket = session_repository_->access_session(socket_grpc_session.id(), socket_grpc_session.name());
      auto name = convert_from_grpc<nxsockaddr>(request->name());
      auto namelen = name.size();
      auto status = library_->Bind(socket, name, namelen);
      response->set_status(status);
      if (status_ok(status)) {
      }
      else {
        const auto error_message = get_last_error_message(library_);
        response->set_error_message(error_message);
        const auto error_num = get_last_error_num(library_);
        response->set_error_num(error_num);
      }
      return ::grpc::Status::OK;
    }
    catch (nidevice_grpc::LibraryLoadException& ex) {
      return ::grpc::Status(::grpc::NOT_FOUND, ex.what());
    }
  }

  //---------------------------------------------------------------------
  //---------------------------------------------------------------------
  ::grpc::Status NiXnetSocketService::Connect(::grpc::ServerContext* context, const ConnectRequest* request, ConnectResponse* response)
  {
    if (context->IsCancelled()) {
      return ::grpc::Status::CANCELLED;
    }
    try {
      auto socket_grpc_session = request->socket();
      nxSOCKET socket = session_repository_->access_session(socket_grpc_session.id(), socket_grpc_session.name());
      auto name = convert_from_grpc<nxsockaddr>(request->name());
      auto namelen = name.size();
      auto status = library_->Connect(socket, name, namelen);
      response->set_status(status);
      if (status_ok(status)) {
      }
      else {
        const auto error_message = get_last_error_message(library_);
        response->set_error_message(error_message);
        const auto error_num = get_last_error_num(library_);
        response->set_error_num(error_num);
      }
      return ::grpc::Status::OK;
    }
    catch (nidevice_grpc::LibraryLoadException& ex) {
      return ::grpc::Status(::grpc::NOT_FOUND, ex.what());
    }
  }

  //---------------------------------------------------------------------
  //---------------------------------------------------------------------
  ::grpc::Status NiXnetSocketService::Listen(::grpc::ServerContext* context, const ListenRequest* request, ListenResponse* response)
  {
    if (context->IsCancelled()) {
      return ::grpc::Status::CANCELLED;
    }
    try {
      auto socket_grpc_session = request->socket();
      nxSOCKET socket = session_repository_->access_session(socket_grpc_session.id(), socket_grpc_session.name());
      int32_t backlog = request->backlog();
      auto status = library_->Listen(socket, backlog);
      response->set_status(status);
      if (status_ok(status)) {
      }
      else {
        const auto error_message = get_last_error_message(library_);
        response->set_error_message(error_message);
        const auto error_num = get_last_error_num(library_);
        response->set_error_num(error_num);
      }
      return ::grpc::Status::OK;
    }
    catch (nidevice_grpc::LibraryLoadException& ex) {
      return ::grpc::Status(::grpc::NOT_FOUND, ex.what());
    }
  }

  //---------------------------------------------------------------------
  //---------------------------------------------------------------------
  ::grpc::Status NiXnetSocketService::SendTo(::grpc::ServerContext* context, const SendToRequest* request, SendToResponse* response)
  {
    if (context->IsCancelled()) {
      return ::grpc::Status::CANCELLED;
    }
    try {
      auto socket_grpc_session = request->socket();
      nxSOCKET socket = session_repository_->access_session(socket_grpc_session.id(), socket_grpc_session.name());
      char* dataptr = (char*)request->dataptr().c_str();
      int32_t size = static_cast<int32_t>(request->dataptr().size());
      int32_t flags = request->flags();
      auto to = convert_from_grpc<nxsockaddr>(request->to());
      auto tolen = to.size();
      auto status = library_->SendTo(socket, dataptr, size, flags, to, tolen);
      response->set_status(status);
      if (status_ok(status)) {
      }
      else {
        const auto error_message = get_last_error_message(library_);
        response->set_error_message(error_message);
        const auto error_num = get_last_error_num(library_);
        response->set_error_num(error_num);
      }
      return ::grpc::Status::OK;
    }
    catch (nidevice_grpc::LibraryLoadException& ex) {
      return ::grpc::Status(::grpc::NOT_FOUND, ex.what());
    }
  }

  //---------------------------------------------------------------------
  //---------------------------------------------------------------------
  ::grpc::Status NiXnetSocketService::Send(::grpc::ServerContext* context, const SendRequest* request, SendResponse* response)
  {
    if (context->IsCancelled()) {
      return ::grpc::Status::CANCELLED;
    }
    try {
      auto socket_grpc_session = request->socket();
      nxSOCKET socket = session_repository_->access_session(socket_grpc_session.id(), socket_grpc_session.name());
      char* dataptr = (char*)request->dataptr().c_str();
      int32_t size = static_cast<int32_t>(request->dataptr().size());
      int32_t flags = request->flags();
      auto status = library_->Send(socket, dataptr, size, flags);
      response->set_status(status);
      if (status_ok(status)) {
      }
      else {
        const auto error_message = get_last_error_message(library_);
        response->set_error_message(error_message);
        const auto error_num = get_last_error_num(library_);
        response->set_error_num(error_num);
      }
      return ::grpc::Status::OK;
    }
    catch (nidevice_grpc::LibraryLoadException& ex) {
      return ::grpc::Status(::grpc::NOT_FOUND, ex.what());
    }
  }

  //---------------------------------------------------------------------
  //---------------------------------------------------------------------
  ::grpc::Status NiXnetSocketService::RecvFrom(::grpc::ServerContext* context, const RecvFromRequest* request, RecvFromResponse* response)
  {
    if (context->IsCancelled()) {
      return ::grpc::Status::CANCELLED;
    }
    try {
      auto socket_grpc_session = request->socket();
      nxSOCKET socket = session_repository_->access_session(socket_grpc_session.id(), socket_grpc_session.name());
      char* mem = (char*)request->mem().c_str();
      int32_t size = static_cast<int32_t>(request->mem().size());
      int32_t flags = request->flags();
      auto from = allocate_output_storage<nxsockaddr, SockAddr>();
      nxsocklen_t fromlen {};
      auto status = library_->RecvFrom(socket, mem, size, flags, &from, &fromlen);
      response->set_status(status);
      if (status_ok(status)) {
        convert_to_grpc(from, response->mutable_from());
      }
      else {
        const auto error_message = get_last_error_message(library_);
        response->set_error_message(error_message);
        const auto error_num = get_last_error_num(library_);
        response->set_error_num(error_num);
      }
      return ::grpc::Status::OK;
    }
    catch (nidevice_grpc::LibraryLoadException& ex) {
      return ::grpc::Status(::grpc::NOT_FOUND, ex.what());
    }
  }

  //---------------------------------------------------------------------
  //---------------------------------------------------------------------
  ::grpc::Status NiXnetSocketService::Recv(::grpc::ServerContext* context, const RecvRequest* request, RecvResponse* response)
  {
    if (context->IsCancelled()) {
      return ::grpc::Status::CANCELLED;
    }
    try {
      auto socket_grpc_session = request->socket();
      nxSOCKET socket = session_repository_->access_session(socket_grpc_session.id(), socket_grpc_session.name());
      char* mem = (char*)request->mem().c_str();
      int32_t size = static_cast<int32_t>(request->mem().size());
      int32_t flags = request->flags();
      auto status = library_->Recv(socket, mem, size, flags);
      response->set_status(status);
      if (status_ok(status)) {
      }
      else {
        const auto error_message = get_last_error_message(library_);
        response->set_error_message(error_message);
        const auto error_num = get_last_error_num(library_);
        response->set_error_num(error_num);
      }
      return ::grpc::Status::OK;
    }
    catch (nidevice_grpc::LibraryLoadException& ex) {
      return ::grpc::Status(::grpc::NOT_FOUND, ex.what());
    }
  }

  //---------------------------------------------------------------------
  //---------------------------------------------------------------------
  ::grpc::Status NiXnetSocketService::GetSockName(::grpc::ServerContext* context, const GetSockNameRequest* request, GetSockNameResponse* response)
  {
    if (context->IsCancelled()) {
      return ::grpc::Status::CANCELLED;
    }
    try {
      auto socket_grpc_session = request->socket();
      nxSOCKET socket = session_repository_->access_session(socket_grpc_session.id(), socket_grpc_session.name());
      auto addr = allocate_output_storage<nxsockaddr, SockAddr>();
      nxsocklen_t addrlen {};
      auto status = library_->GetSockName(socket, &addr, &addrlen);
      response->set_status(status);
      if (status_ok(status)) {
        convert_to_grpc(addr, response->mutable_addr());
      }
      else {
        const auto error_message = get_last_error_message(library_);
        response->set_error_message(error_message);
        const auto error_num = get_last_error_num(library_);
        response->set_error_num(error_num);
      }
      return ::grpc::Status::OK;
    }
    catch (nidevice_grpc::LibraryLoadException& ex) {
      return ::grpc::Status(::grpc::NOT_FOUND, ex.what());
    }
  }

  //---------------------------------------------------------------------
  //---------------------------------------------------------------------
  ::grpc::Status NiXnetSocketService::GetPeerName(::grpc::ServerContext* context, const GetPeerNameRequest* request, GetPeerNameResponse* response)
  {
    if (context->IsCancelled()) {
      return ::grpc::Status::CANCELLED;
    }
    try {
      auto socket_grpc_session = request->socket();
      nxSOCKET socket = session_repository_->access_session(socket_grpc_session.id(), socket_grpc_session.name());
      auto addr = allocate_output_storage<nxsockaddr, SockAddr>();
      nxsocklen_t addrlen {};
      auto status = library_->GetPeerName(socket, &addr, &addrlen);
      response->set_status(status);
      if (status_ok(status)) {
        convert_to_grpc(addr, response->mutable_addr());
      }
      else {
        const auto error_message = get_last_error_message(library_);
        response->set_error_message(error_message);
        const auto error_num = get_last_error_num(library_);
        response->set_error_num(error_num);
      }
      return ::grpc::Status::OK;
    }
    catch (nidevice_grpc::LibraryLoadException& ex) {
      return ::grpc::Status(::grpc::NOT_FOUND, ex.what());
    }
  }

  //---------------------------------------------------------------------
  //---------------------------------------------------------------------
  ::grpc::Status NiXnetSocketService::Shutdown(::grpc::ServerContext* context, const ShutdownRequest* request, ShutdownResponse* response)
  {
    if (context->IsCancelled()) {
      return ::grpc::Status::CANCELLED;
    }
    try {
      auto socket_grpc_session = request->socket();
      nxSOCKET socket = session_repository_->access_session(socket_grpc_session.id(), socket_grpc_session.name());
      int32_t how = request->how();
      auto status = library_->Shutdown(socket, how);
      response->set_status(status);
      if (status_ok(status)) {
      }
      else {
        const auto error_message = get_last_error_message(library_);
        response->set_error_message(error_message);
        const auto error_num = get_last_error_num(library_);
        response->set_error_num(error_num);
      }
      return ::grpc::Status::OK;
    }
    catch (nidevice_grpc::LibraryLoadException& ex) {
      return ::grpc::Status(::grpc::NOT_FOUND, ex.what());
    }
  }

  //---------------------------------------------------------------------
  //---------------------------------------------------------------------
  ::grpc::Status NiXnetSocketService::Close(::grpc::ServerContext* context, const CloseRequest* request, CloseResponse* response)
  {
    if (context->IsCancelled()) {
      return ::grpc::Status::CANCELLED;
    }
    try {
      auto socket_grpc_session = request->socket();
      nxSOCKET socket = session_repository_->access_session(socket_grpc_session.id(), socket_grpc_session.name());
      session_repository_->remove_session(socket_grpc_session.id(), socket_grpc_session.name());
      auto status = library_->Close(socket);
      response->set_status(status);
      if (status_ok(status)) {
      }
      else {
        const auto error_message = get_last_error_message(library_);
        response->set_error_message(error_message);
        const auto error_num = get_last_error_num(library_);
        response->set_error_num(error_num);
      }
      return ::grpc::Status::OK;
    }
    catch (nidevice_grpc::LibraryLoadException& ex) {
      return ::grpc::Status(::grpc::NOT_FOUND, ex.what());
    }
  }

  //---------------------------------------------------------------------
  //---------------------------------------------------------------------
  ::grpc::Status NiXnetSocketService::GetSockOpt(::grpc::ServerContext* context, const GetSockOptRequest* request, GetSockOptResponse* response)
  {
    if (context->IsCancelled()) {
      return ::grpc::Status::CANCELLED;
    }
    try {
      auto socket_grpc_session = request->socket();
      nxSOCKET socket = session_repository_->access_session(socket_grpc_session.id(), socket_grpc_session.name());
      int32_t level = request->level();
      int32_t optname;
      switch (request->optname_enum_case()) {
        case nixnetsocket_grpc::GetSockOptRequest::OptnameEnumCase::kOptname: {
          optname = static_cast<int32_t>(request->optname());
          break;
        }
        case nixnetsocket_grpc::GetSockOptRequest::OptnameEnumCase::kOptnameRaw: {
          optname = static_cast<int32_t>(request->optname_raw());
          break;
        }
        case nixnetsocket_grpc::GetSockOptRequest::OptnameEnumCase::OPTNAME_ENUM_NOT_SET: {
          return ::grpc::Status(::grpc::INVALID_ARGUMENT, "The value for optname was not specified or out of range");
          break;
        }
      }

      auto optval = allocate_output_storage<void *, SockOptData>(optname);
      nxsocklen_t optlen {};
      auto status = library_->GetSockOpt(socket, level, optname, optval.data(), &optlen);
      response->set_status(status);
      if (status_ok(status)) {
        convert_to_grpc(optval, response->mutable_optval());
      }
      else {
        const auto error_message = get_last_error_message(library_);
        response->set_error_message(error_message);
        const auto error_num = get_last_error_num(library_);
        response->set_error_num(error_num);
      }
      return ::grpc::Status::OK;
    }
    catch (nidevice_grpc::LibraryLoadException& ex) {
      return ::grpc::Status(::grpc::NOT_FOUND, ex.what());
    }
  }

  //---------------------------------------------------------------------
  //---------------------------------------------------------------------
  ::grpc::Status NiXnetSocketService::IpStackClear(::grpc::ServerContext* context, const IpStackClearRequest* request, IpStackClearResponse* response)
  {
    if (context->IsCancelled()) {
      return ::grpc::Status::CANCELLED;
    }
    try {
      auto stack_ref_grpc_session = request->stack_ref();
      nxIpStackRef_t stack_ref = nx_ip_stack_ref_t_resource_repository_->access_session(stack_ref_grpc_session.id(), stack_ref_grpc_session.name());
      nx_ip_stack_ref_t_resource_repository_->remove_session(stack_ref_grpc_session.id(), stack_ref_grpc_session.name());
      auto status = library_->IpStackClear(stack_ref);
      response->set_status(status);
      if (status_ok(status)) {
      }
      else {
        const auto error_message = get_last_error_message(library_);
        response->set_error_message(error_message);
        const auto error_num = get_last_error_num(library_);
        response->set_error_num(error_num);
      }
      return ::grpc::Status::OK;
    }
    catch (nidevice_grpc::LibraryLoadException& ex) {
      return ::grpc::Status(::grpc::NOT_FOUND, ex.what());
    }
  }

  //---------------------------------------------------------------------
  //---------------------------------------------------------------------
  ::grpc::Status NiXnetSocketService::IpStackCreate(::grpc::ServerContext* context, const IpStackCreateRequest* request, IpStackCreateResponse* response)
  {
    if (context->IsCancelled()) {
      return ::grpc::Status::CANCELLED;
    }
    try {
      char* stack_name = (char*)request->stack_name().c_str();
      char* config = (char*)request->config().c_str();

      auto init_lambda = [&] () {
        nxIpStackRef_t stack_ref;
        auto status = library_->IpStackCreate(stack_name, config, &stack_ref);
        return std::make_tuple(status, stack_ref);
      };
      uint32_t session_id = 0;
      const std::string& grpc_device_session_name = request->session_name();
      auto cleanup_lambda = [&] (nxIpStackRef_t id) { library_->IpStackClear(id); };
      int status = nx_ip_stack_ref_t_resource_repository_->add_session(grpc_device_session_name, init_lambda, cleanup_lambda, session_id);
      response->set_status(status);
      if (status_ok(status)) {
        response->mutable_stack_ref()->set_id(session_id);
      }
      else {
        const auto error_message = get_last_error_message(library_);
        response->set_error_message(error_message);
        const auto error_num = get_last_error_num(library_);
        response->set_error_num(error_num);
      }
      return ::grpc::Status::OK;
    }
    catch (nidevice_grpc::LibraryLoadException& ex) {
      return ::grpc::Status(::grpc::NOT_FOUND, ex.what());
    }
  }

  //---------------------------------------------------------------------
  //---------------------------------------------------------------------
  ::grpc::Status NiXnetSocketService::IsSet(::grpc::ServerContext* context, const IsSetRequest* request, IsSetResponse* response)
  {
    if (context->IsCancelled()) {
      return ::grpc::Status::CANCELLED;
    }
    try {
      auto fd_grpc_session = request->fd();
      nxSOCKET fd = session_repository_->access_session(fd_grpc_session.id(), fd_grpc_session.name());
      auto set = convert_from_grpc<nxfd_set>(request->set(), session_repository_);
      auto is_set = library_->IsSet(fd, set);
      auto status = 0;
      response->set_status(status);
      if (status_ok(status)) {
        response->set_is_set(is_set);
      }
      else {
        const auto error_message = get_last_error_message(library_);
        response->set_error_message(error_message);
        const auto error_num = get_last_error_num(library_);
        response->set_error_num(error_num);
      }
      return ::grpc::Status::OK;
    }
    catch (nidevice_grpc::LibraryLoadException& ex) {
      return ::grpc::Status(::grpc::NOT_FOUND, ex.what());
    }
  }

  //---------------------------------------------------------------------
  //---------------------------------------------------------------------
  ::grpc::Status NiXnetSocketService::Select(::grpc::ServerContext* context, const SelectRequest* request, SelectResponse* response)
  {
    if (context->IsCancelled()) {
      return ::grpc::Status::CANCELLED;
    }
    try {
      auto nfds = 0;
      auto read_fds = convert_from_grpc<nxfd_set>(request->read_fds(), session_repository_);
      auto write_fds = convert_from_grpc<nxfd_set>(request->write_fds(), session_repository_);
      auto except_fds = convert_from_grpc<nxfd_set>(request->except_fds(), session_repository_);
      auto timeout = convert_from_grpc<nxtimeval>(request->timeout());
      auto status = library_->Select(nfds, read_fds, write_fds, except_fds, timeout);
      response->set_status(status);
      if (status_ok(status)) {
      }
      else {
        const auto error_message = get_last_error_message(library_);
        response->set_error_message(error_message);
        const auto error_num = get_last_error_num(library_);
        response->set_error_num(error_num);
      }
      return ::grpc::Status::OK;
    }
    catch (nidevice_grpc::LibraryLoadException& ex) {
      return ::grpc::Status(::grpc::NOT_FOUND, ex.what());
    }
  }

  //---------------------------------------------------------------------
  //---------------------------------------------------------------------
  ::grpc::Status NiXnetSocketService::SetSockOpt(::grpc::ServerContext* context, const SetSockOptRequest* request, SetSockOptResponse* response)
  {
    if (context->IsCancelled()) {
      return ::grpc::Status::CANCELLED;
    }
    try {
      auto socket_grpc_session = request->socket();
      nxSOCKET socket = session_repository_->access_session(socket_grpc_session.id(), socket_grpc_session.name());
      int32_t level = request->level();
      int32_t optname;
      switch (request->optname_enum_case()) {
        case nixnetsocket_grpc::SetSockOptRequest::OptnameEnumCase::kOptname: {
          optname = static_cast<int32_t>(request->optname());
          break;
        }
        case nixnetsocket_grpc::SetSockOptRequest::OptnameEnumCase::kOptnameRaw: {
          optname = static_cast<int32_t>(request->optname_raw());
          break;
        }
        case nixnetsocket_grpc::SetSockOptRequest::OptnameEnumCase::OPTNAME_ENUM_NOT_SET: {
          return ::grpc::Status(::grpc::INVALID_ARGUMENT, "The value for optname was not specified or out of range");
          break;
        }
      }

      auto opt_data = convert_from_grpc<SockOptDataInputConverter>(request->opt_data());
      auto optval = opt_data.data();
      auto optlen = opt_data.size();
      auto status = library_->SetSockOpt(socket, level, optname, optval, optlen);
      response->set_status(status);
      if (status_ok(status)) {
      }
      else {
        const auto error_message = get_last_error_message(library_);
        response->set_error_message(error_message);
        const auto error_num = get_last_error_num(library_);
        response->set_error_num(error_num);
      }
      return ::grpc::Status::OK;
    }
    catch (nidevice_grpc::LibraryLoadException& ex) {
      return ::grpc::Status(::grpc::NOT_FOUND, ex.what());
    }
  }

  //---------------------------------------------------------------------
  //---------------------------------------------------------------------
  ::grpc::Status NiXnetSocketService::Socket(::grpc::ServerContext* context, const SocketRequest* request, SocketResponse* response)
  {
    if (context->IsCancelled()) {
      return ::grpc::Status::CANCELLED;
    }
    try {
      auto stack_ref_grpc_session = request->stack_ref();
      nxIpStackRef_t stack_ref = nx_ip_stack_ref_t_resource_repository_->access_session(stack_ref_grpc_session.id(), stack_ref_grpc_session.name());
      int32_t domain = request->domain();
      int32_t type = request->type();
      int32_t prototcol = request->prototcol();

      auto init_lambda = [&] () {
        auto socket = library_->Socket(stack_ref, domain, type, prototcol);
        auto status = socket == -1 ? -1 : 0;
        return std::make_tuple(status, socket);
      };
      uint32_t session_id = 0;
      const std::string& grpc_device_session_name = request->session_name();
      auto cleanup_lambda = [&] (nxSOCKET id) { library_->Close(id); };
      int status = session_repository_->add_session(grpc_device_session_name, init_lambda, cleanup_lambda, session_id);
      response->set_status(status);
      if (status_ok(status)) {
        response->mutable_socket()->set_id(session_id);
      }
      else {
        const auto error_message = get_last_error_message(library_);
        response->set_error_message(error_message);
        const auto error_num = get_last_error_num(library_);
        response->set_error_num(error_num);
      }
      return ::grpc::Status::OK;
    }
    catch (nidevice_grpc::LibraryLoadException& ex) {
      return ::grpc::Status(::grpc::NOT_FOUND, ex.what());
    }
  }


  NiXnetSocketFeatureToggles::NiXnetSocketFeatureToggles(
    const nidevice_grpc::FeatureToggles& feature_toggles)
    : is_enabled(
        feature_toggles.is_feature_enabled("nixnetsocket", CodeReadiness::kNextRelease))
  {
  }
} // namespace nixnetsocket_grpc

