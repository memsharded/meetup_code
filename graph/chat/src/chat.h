#pragma once

#ifdef WIN32
  #define chat_EXPORT __declspec(dllexport)
#else
  #define chat_EXPORT
#endif

chat_EXPORT void chat();
