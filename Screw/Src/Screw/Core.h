#pragma once
#ifdef SR_PLATFORM_WINDOWS
    #ifdef SR_BUILD_DLL
        #define SCREW_APT __declspec(dllexport)
    #else
        #define SCREW_APT __declspec(dllimport)
    #endif
#else
    #error Screw only support Windows!
#endif // SR_PLATFORM_WINDOWS
