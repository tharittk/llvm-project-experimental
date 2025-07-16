add_llvm_component_library(LLVMH2BLBDesc # <-- LLVM macro assumes this starts with LLVM
    H2BLBMCTargetDesc.cpp
    
    LINK_COMPONENTS
    Support
    
    ADD_TO_COMPONENT
    H2BLB
    )