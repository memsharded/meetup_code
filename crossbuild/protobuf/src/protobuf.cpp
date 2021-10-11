#include <iostream>
#include "protobuf.h"

void protobuf(){
    #ifdef NDEBUG
    std::cout << "protobuf/1.0: Hello World Release!\n";
    #else
    std::cout << "protobuf/1.0: Hello World Debug!\n";
    #endif

    // ARCHITECTURES
    #ifdef _M_X64
    std::cout << "  protobuf/1.0: _M_X64 defined\n";
    #endif

    #ifdef _M_IX86
    std::cout << "  protobuf/1.0: _M_IX86 defined\n";
    #endif

    #if __i386__
    std::cout << "  protobuf/1.0: __i386__ defined\n";
    #endif

    #if __x86_64__
    std::cout << "  protobuf/1.0: __x86_64__ defined\n";
    #endif

    // COMPILER VERSIONS
    #if _MSC_VER
    std::cout << "  protobuf/1.0: _MSC_VER" << _MSC_VER<< "\n";
    #endif

    #if _MSVC_LANG
    std::cout << "  protobuf/1.0: _MSVC_LANG" << _MSVC_LANG<< "\n";
    #endif
}
