#pragma once

#ifdef WIN32
  #define app_EXPORT __declspec(dllexport)
#else
  #define app_EXPORT
#endif

app_EXPORT void app();
