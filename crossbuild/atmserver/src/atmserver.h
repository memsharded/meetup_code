#pragma once

#ifdef WIN32
  #define atmserver_EXPORT __declspec(dllexport)
#else
  #define atmserver_EXPORT
#endif

atmserver_EXPORT void atmserver();
