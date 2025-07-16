add_llvm_component_group(H2BLB) # used to aggregate dependency

add_llvm_target(H2BLBCodeGen # <-- target to build
    H2BLBTargetMachine.cpp # <-- cpp files used for this build

    LINK_COMPONENTS # <-- dependency
    H2BLBDesc # <-- it will look for LLVMH2BLBDesc
    H2BLBInfo
    Support

    ADD_TO_COMPONENT # <-- add to llvm component of the same name
    H2BLB
)

add_subdirectory(MCTargetDesc) # <-- scan subdirectory for more CMakeLists.txt file
add_subdirectory(TargetInfo)