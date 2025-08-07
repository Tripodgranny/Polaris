#pragma once

#ifdef POL_PLATFORM_WINDOWS
#ifdef POL_BUILD_DLL
#define POLARIS_API __declspec(dllexport)
#else
#define POLARIS_API __declspec(dllimport)
#endif
#else
#error Only Windows Supported
#endif