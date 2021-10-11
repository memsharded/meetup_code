#include <iostream>
#include "atmserver.h"
#include "protobuf.h"

void atmserver(){
    #ifdef NDEBUG
    std::cout << "atmserver/0.1: atmserver World Release!\n";
    #else
    std::cout << "atmserver/0.1: atmserver World Debug!\n";
    #endif

    protobuf();

    // ARCHITECTURES
    #ifdef _M_X64
    std::cout << "  atmserver/0.1: _M_X64 defined\n";
    #endif

    #ifdef _M_IX86
    std::cout << "  atmserver/0.1: _M_IX86 defined\n";
    #endif

    #if __i386__
    std::cout << "  atmserver/0.1: __i386__ defined\n";
    #endif

    #if __x86_64__
    std::cout << "  atmserver/0.1: __x86_64__ defined\n";
    #endif

    // COMPILER VERSIONS
    #if _MSC_VER
    std::cout << "  atmserver/0.1: _MSC_VER" << _MSC_VER<< "\n";
    #endif

    #if _MSVC_LANG
    std::cout << "  atmserver/0.1: _MSVC_LANG" << _MSVC_LANG<< "\n";
    #endif

    #if __cplusplus
    std::cout << "  atmserver/0.1: __cplusplus" << __cplusplus<< "\n";
    #endif
}
