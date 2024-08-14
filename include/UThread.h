/*
 * @Author: xuxb xuxb@appexnetworks.com
 * @Date: 2024-08-14 01:12:06
 * @LastEditors: xuxb xuxb@appexnetworks.com
 * @LastEditTime: 2024-08-14 01:21:10
 * @FilePath: \UOptLib\include\UThread.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#ifndef __U_THREAD_H__
#define __U_THREAD_H__

#include "UDefs.h"
#include "UAnnoDefs.h"
#include "UErrno.h"
#include "platformThread.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/*******************************************************************************
 * Type Definitions.
 ******************************************************************************/
typedef PLATFORM_THREAD_T            U_THREAD_T;
typedef PLATFORM_THREAD_ATTR_T       U_THREAD_ATTR_T;
typedef PLATFORM_THREAD_FUNC         U_THREAD_FUNC;
typedef PLATFORM_THREAD_RET          U_THREAD_RET;
typedef PLATFORM_THREAD_EXIT_CODE    U_THREAD_EXIT_CODE;

typedef PLATFORM_THREAD_KEY_T        U_THREAD_KEY_T;
typedef PLATFORM_THREAD_ONCE_T       U_THREAD_ONCE_T;


/*******************************************************************************
 * Macros Definitions.
 ******************************************************************************/
#define U_THREAD_RET_INIT_VALUE        PLATFORM_THREAD_RET_INIT_VALUE
#define U_THREAD_NAME_MAX              PLATFORM_THREAD_NAME_MAX
#define U_THREAD_RESET(_THREAD_)       PLATFORM_THREAD_RESET(_THREAD_)
#define U_IS_THREAD_VALID(_THREAD_)    PLATFORM_IS_THREAD_VALID(_THREAD_)
#define U_THREAD_T_INIT_VALUE          PLATFORM_THREAD_T_INIT_VALUE

#define U_THREAD_ONCE_INIT             PLATFORM_THREAD_ONCE_INIT

#define U_GET_CURRENT_THREAD_ID        PlatformGetCurrentThreadId
#define U_GET_CURRENT_PROCESS_ID       PlatformGetCurrentProcessId

#define U_ThreadCreateKey(_key_, _des_func_) PlatformThreadCreateKey(_key_, _des_func_)
#define U_ThreadOnce(_once_, _init_func_)    PlatformThreadOnce(_once_, _init_func_)
#define U_ThreadGetSpecific(_key_)           PlatformThreadGetSpecific(_key_)
#define U_ThreadSetSpecific(_key_, _data_)   PlatformThreadSetSpecific(_key_, _data_)


#ifndef U_ThreadAttrInit
void
U_ThreadAttrInit(
    __out U_THREAD_ATTR_T *Attr
    );
#endif /* !U_ThreadAttrInit */

#ifndef U_ThreadAttrDestroy
void
U_ThreadAttrDestroy(
    __out U_THREAD_ATTR_T *Attr
    );
#endif /* !U_ThreadAttrDestroy */


#ifndef U_ThreadAttrSetDetachState
void
U_ThreadAttrSetDetachState(
    __inout U_THREAD_ATTR_T *Attr
    );
#endif /* !U_ThreadAttrSetDetachState */

#ifndef U_ThreadRun
U_MUST_CHECK U_NONNULL((1,3,5))
U_ERR_T
U_ThreadRun(
    __out U_THREAD_T *Id,
    __in U_THREAD_ATTR_T *Attr,
    __in U_THREAD_FUNC Func,
    __in void *Arg,
    __in const char *Name
    );
#endif /* !U_ThreadRun */


U_MUST_CHECK U_NONNULL((1,3,5))
U_ERR_T
U_ThreadRunOn(
    __out U_THREAD_T *Id,
    __in U_THREAD_ATTR_T *Attr,
    __in U_THREAD_FUNC Func,
    __in void *Arg,
    __in const char *Name,
    __in int CpuId
    );


#ifndef U_ThreadStop
int32_t
U_ThreadStop(
    __in U_THREAD_T Id
    );
#endif /* !U_ThreadStop */

#ifndef U_DetachedThreadStop
int32_t
U_DetachedThreadStop(
    U_THREAD_T Id
    );
#endif /* !U_ThreadStop */

#ifndef U_ThreadShouldStop
U_MUST_CHECK
BOOL
U_ThreadShouldStop(
    __in U_THREAD_T Id
    );
#endif /* !U_ThreadShouldStop */

#ifndef U_ThreadJoin
U_ERR_T
U_ThreadJoin(
    __in U_THREAD_T Id,
    __out U_THREAD_EXIT_CODE *RetVal
    );
#endif /* !U_ThreadJoin */

#ifndef U_ThreadGetName
U_ERR_T
U_ThreadGetName(
    __inout char *Buf,
    __in int Size
    );
#endif /* !U_ThreadGetName */


#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __U_THREAD_H__ */