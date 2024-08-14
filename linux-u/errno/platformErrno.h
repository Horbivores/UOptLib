#ifndef __PLATFORM_ERRNO_H__
#define __PLATFORM_ERRNO_H__
#include <errno.h>
#include <string.h>

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#define U_StrError(_errnum_)  strerror((_errnum_))

#define U_TranslateSysError(__SysErrCode__)        (-(__SysErrCode__))

#ifdef __cplusplus
        }
#endif /* __cplusplus */

#endif /* !__PLATFORM_ERRNO_H__ */