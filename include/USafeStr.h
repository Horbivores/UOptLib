#ifndef __U_SAFE_STR_H__
#define __U_SAFE_STR_H__
#include <stdint.h>
#include "UDefs.h"
#include "UAnnoDefs.h"
#include "UErrno.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


size_t
U_SafeStrCopy(
    __out_ecount(CharCnt) char* OutStr,
    __in size_t CharCnt,
    __in char const* SrcStr
    );


#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __U_SAFE_STR_H__ */