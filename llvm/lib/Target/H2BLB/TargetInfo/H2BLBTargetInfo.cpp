#include "H2BLBTargetInfo.h"
#include "llvm/MC/TargetRegistry.h" // for RegisterTarget
#include "llvm/Support/Compiler.h"  // for extern visibility
#include "llvm/TextAPI/Target.h"    // for Target class

using namespace llvm;

Target &llvm::getTheH2BLBTarget() {
  static Target TheH2BLBTarget;
  return TheH2BLBTarget;
}

extern "C" LLVM_EXTERNAL_VISIBILITY void LLVMInitializeH2BLBTargetInfo() {
  RegisterTarget<Triple::h2blb, /*HasJIT=*/false> X(
      getTheH2BLBTarget(), /*Name=*/"h2blb",
      /*Desc=*/"How to build an LLVM backend by example",
      /*BackendName=*/"H2BLB");
}