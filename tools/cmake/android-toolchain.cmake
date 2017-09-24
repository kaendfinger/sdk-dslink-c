set(CMAKE_SYSTEM_NAME Android)
set(CMAKE_SYSTEM_VERSION 18)
set(CMAKE_ANDROID_ARCH_ABI armeabi-v7a)

if (NOT DEFINED CMAKE_ANDROID_NDK)
  set(CMAKE_ANDROID_NDK $ENV{HOME}/Android/Sdk/ndk-bundle)
endif()

set(CMAKE_ANDROID_STL_TYPE gnustl_static)
set(CMAKE_C_FLAGS "-std=gnu11")
