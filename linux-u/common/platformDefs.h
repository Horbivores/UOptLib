#ifndef __PLATFORM_DEFS_H__
#define __PLATFORM_DEFS_H__

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdint.h>
#include <string.h>
#include <strings.h>
#include <ctype.h>

#define __STDC_FORMAT_MACROS
#include <inttypes.h>
#undef __STDC_FORMAT_MACROS

#include <unistd.h>
#include <sys/types.h>          /* See NOTES */
#include <sys/socket.h>
#include <sys/ioctl.h>
#include <netinet/in.h>
#include <netinet/tcp.h>
#include <arpa/inet.h>
#include <net/if.h>
#include <sys/wait.h>
#include <sys/file.h>
#include <sys/un.h>
#include <netdb.h>
#include <signal.h>
#include <stdarg.h>

/* Check if GCC version is at least 4.6 or higher to support #pragma GCC diagnostic push/pop */
#if defined(__GNUC__) && (__GNUC__ > 4 || (__GNUC__ == 4 && __GNUC_MINOR__ >= 6))
#define U_GCC_DIAGNOSTIC_PUSH_IGNORED_WCONVERSION          \
    _Pragma("GCC diagnostic push")                          \
    _Pragma("GCC diagnostic ignored \"-Wconversion\"")      \
    _Pragma("GCC diagnostic ignored \"-Wsign-conversion\"")

#define U_GCC_DIAGNOSTIC_POP_IGNORED_WCONVERSION           \
    _Pragma("GCC diagnostic pop")
#else
#define U_GCC_DIAGNOSTIC_PUSH_IGNORED_WCONVERSION          \
    _Pragma("GCC diagnostic ignored \"-Wconversion\"")      \
    _Pragma("GCC diagnostic ignored \"-Wsign-conversion\"")

#define U_GCC_DIAGNOSTIC_POP_IGNORED_WCONVERSION           \
    _Pragma("GCC diagnostic warning \"-Wconversion\"")      \
    _Pragma("GCC diagnostic warning \"-Wsign-conversion\"")
#endif


#endif /* !__PLATFORM_DEFS_H__ */