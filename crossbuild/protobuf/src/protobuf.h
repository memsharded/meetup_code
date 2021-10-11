#pragma once

#ifdef WIN32
  #define protobuf_EXPORT __declspec(dllexport)
#else
  #define protobuf_EXPORT
#endif

protobuf_EXPORT void protobuf();
