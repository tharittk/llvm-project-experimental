
#include "H2BLBTargetMachine.h"
#include "TargetInfo/H2BLBTargetInfo.h" // getTheH2BLBTarget
#include "llvm/MC/TargetRegistry.h"     // for RegisterTargetMachine.
#include "llvm/Support/Compiler.h"      // for extern visibility.
#include "llvm/TextAPI/Target.h"        // for Target class.

using namespace llvm;
static const char *H2BLBDataLayoutStr =
    "e-p:16:16:16-n16:32-i32:32:32-i16:16:16-i1:8:8-f32:32:32-v32:32:32";

H2BLBTargetMachine::H2BLBTargetMachine(const Target &T, const Triple &TT,
                                       StringRef CPU, StringRef FS,
                                       const TargetOptions &Options,
                                       std::optional<Reloc::Model> RM,
                                       std::optional<CodeModel::Model> CM,
                                       CodeGenOptLevel OL, bool JIT)
    : CodeGenTargetMachineImpl(T, H2BLBDataLayoutStr, TT, CPU, FS, Options,
                               // Use the simplest relocation by default.
                               RM ? *RM : Reloc::Static,
                               CM ? *CM : CodeModel::Small, OL) {}
H2BLBTargetMachine::~H2BLBTargetMachine() = default;

extern "C" LLVM_EXTERNAL_VISIBILITY void LLVMInitializeH2BLBTarget() {
  RegisterTargetMachine<H2BLBTargetMachine> X(getTheH2BLBTarget());
}