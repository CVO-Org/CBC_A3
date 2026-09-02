#define COMPONENT compat_breach
#define COMPONENT_BEAUTIFIED Fix XEH - Breach

#define MAINPREFIX x
#define PREFIX cbc

#define VERSION 1.0
#define REQUIRED_VERSION 2.12

#ifdef COMPONENT_BEAUTIFIED
    #define COMPONENT_NAME QUOTE(cbc - COMPONENT_BEAUTIFIED)
#else
    #define COMPONENT_NAME QUOTE(cbc - COMPONENT)
#endif

#include "\x\cba\addons\main\script_macros_common.hpp"
#include "\x\cba\addons\xeh\script_xeh.hpp"
