//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Real implementation of LibraryInterface for NI-RFMXLTE
//---------------------------------------------------------------------
#ifndef NIRFMXLTE_GRPC_LIBRARY_H
#define NIRFMXLTE_GRPC_LIBRARY_H

#include "nirfmxlte_library_interface.h"

#include <server/shared_library.h>

namespace nirfmxlte_grpc {

class NiRFmxLTELibrary : public nirfmxlte_grpc::NiRFmxLTELibraryInterface {
 public:
  NiRFmxLTELibrary();
  virtual ~NiRFmxLTELibrary();

  ::grpc::Status check_function_exists(std::string functionName);
  int32 Close(niRFmxInstrHandle instrumentHandle, int32 forceDestroy);
  int32 Initialize(char resourceName[], char optionString[], niRFmxInstrHandle* handleOut, int32* isNewSession);

 private:
  using ClosePtr = decltype(&RFmxLTE_Close);
  using InitializePtr = decltype(&RFmxLTE_Initialize);

  typedef struct FunctionPointers {
    ClosePtr Close;
    InitializePtr Initialize;
  } FunctionLoadStatus;

  nidevice_grpc::SharedLibrary shared_library_;
  FunctionPointers function_pointers_;
};

}  // namespace nirfmxlte_grpc

#endif  // NIRFMXLTE_GRPC_LIBRARY_H
