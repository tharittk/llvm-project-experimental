
#ifndef LLVM_LIB_TARGET_H2BLB_H2BLBTARGETMACHINE_H
#define LLVM_LIB_TARGET_H2BLB_H2BLBTARGETMACHINE_H

#include "llvm/CodeGen/CodeGenTargetMachineImpl.h"
#include "llvm/CodeGen/TargetPassConfig.h"
#include "llvm/Target/TargetLoweringObjectFile.h"
#include <memory>
#include <optional>

namespace llvm {
class H2BLBTargetMachine : public CodeGenTargetMachineImpl {
public:
  H2BLBTargetMachine(const Target &T, const Triple &TT, StringRef CPU,
                     StringRef FS, const TargetOptions &Options,
                     std::optional<Reloc::Model> RM,
                     std::optional<CodeModel::Model> CM, CodeGenOptLevel OL,
                     bool JIT);
  ~H2BLBTargetMachine() override;
};

} // namespace llvm
#endif // LLVM_LIB_TARGET_H2BLB_H2BLBTARGETMACHINE_H
