/*
 * @Author: xuxb xuxb@appexnetworks.com
 * @Date: 2024-08-14 00:55:55
 * @LastEditors: xuxb xuxb@appexnetworks.com
 * @LastEditTime: 2024-08-14 01:44:57
 * @FilePath: \UOptLib\linux-u\Thread\platformThread.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */

#ifndef __PLATFORM_THREAD_H__
#define __PLATFORM_THREAD_H__
#include <pthread.h>
#include <signal.h>
#include <sys/syscall.h>
#include "UDefs.h"
#include "UAnnoDefs.h"
#include "UErrno.h"
#include "USafeStr.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


#define PLATFORM_THREAD_RET_INIT_VALUE       NULL
#define PLATFORM_THREAD_NAME_MAX             (16)
#define PLATFORM_THREAD_RESET(_THREAD_)      \
({                                               \
 (_THREAD_).Tid     = 0;                        \
 (_THREAD_).IsStop  = TRUE;                     \
})
#define PLATFORM_IS_THREAD_VALID(_THREAD_)   ((_THREAD_).Tid != 0)
#define PLATFORM_THREAD_T_INIT_VALUE         {.Tid = 0, .IsStop = TRUE}


/*******************************************************************************
 * Type Definitions.
 ******************************************************************************/
typedef struct _PLATFORM_THREAD_T
{
    pthread_t   Tid;
    BOOL        IsStop;
}
PLATFORM_THREAD_T;

typedef pthread_attr_t                  PLATFORM_THREAD_ATTR_T;
typedef void*                           (*PLATFORM_THREAD_FUNC)(__in void* Arg);
typedef void*                           PLATFORM_THREAD_RET;
typedef void*                           PLATFORM_THREAD_EXIT_CODE;


typedef struct _PLATFORM_THREAD_ARG
{
    void *FuncArg;
    PLATFORM_THREAD_FUNC Func;
    char ThreadName[PLATFORM_THREAD_NAME_MAX];
}
PLATFORM_THREAD_ARG;

/* poxis pthread specific data types */
typedef pthread_key_t                   PLATFORM_THREAD_KEY_T;
typedef pthread_once_t                  PLATFORM_THREAD_ONCE_T;

/*******************************************************************************
 * External Functions.
 ******************************************************************************/
#define U_ThreadAttrInit(_attr_)               (void)pthread_attr_init(_attr_)
#define U_ThreadAttrDestroy(_attr_)            (void)pthread_attr_destroy(_attr_)
#define U_ThreadAttrSetDetachState(_attr_)     (void)pthread_attr_setdetachstate(_attr_, PTHREAD_CREATE_DETACHED)

#define U_ThreadJoin(_THREAD_, _RETVAL_)       U_TranslateSysError(pthread_join((_THREAD_).Tid,  _RETVAL_))
#define U_ThreadKill(_THREAD_, _SIG_)          pthread_kill((_THREAD_).Tid, _SIG_)
#define U_ThreadExit(_EXIT_CODE_)              pthread_exit(_EXIT_CODE_)

#define PlatformThreadShouldStop(_THREAD_)   ((_THREAD_).IsStop)
#define PlatformThreadStop(_THREAD_)         ((_THREAD_).IsStop = TRUE)
#define U_ThreadStop(_thread_)         \
({                                      \
    PlatformThreadStop((_thread_));  \
    U_ThreadJoin((_thread_), NULL);    \
})
#define U_DetachedThreadStop(_thread_) \
({                                      \
    PlatformThreadStop((_thread_));  \
})

/* poxis pthread specific data defines */
#ifndef PTHREAD_ONCE_INIT
#define PTHREAD_ONCE_INIT (0)
#endif
#define PLATFORM_THREAD_ONCE_INIT PTHREAD_ONCE_INIT

/* poxis pthread specific data APIs */
#define PlatformThreadCreateKey(_key_, _des_func_)    pthread_key_create(_key_, _des_func_)
#define PlatformThreadOnce(_once_, _init_func_)       pthread_once(_once_, _init_func_)
#define PlatformThreadGetSpecific(_key_)              pthread_getspecific(_key_)
#define PlatformThreadSetSpecific(_key_, _data_)      pthread_setspecific(_key_, _data_)


U_STATIC_INLINE
void* PlatformThreadFunc(
    __in void* Arg
    )
{
    PLATFORM_THREAD_ARG * arg = (PLATFORM_THREAD_ARG *)Arg;
    if (NULL == arg)
    {
        goto CommonReturn;
    }
#ifdef HAVE_THREAD_NAME
    pthread_setname_np(pthread_self(), arg->ThreadName);
#endif
    (void)arg->Func(arg->FuncArg);
CommonReturn:
    if (arg)
    {
        free(arg);
    }
    return PLATFORM_THREAD_RET_INIT_VALUE;
}


U_STATIC_INLINE
U_ERR_T
PlatformThreadRun(
    __inout PLATFORM_THREAD_T *Thread,
    __in PLATFORM_THREAD_ATTR_T *Attr,
    __in PLATFORM_THREAD_FUNC Func,
    __in void *Arg,
    __in const char *Name
    )
{
    U_ERR_T ret = LW_SUCCESS;
    pthread_t tid = 0;

    PLATFORM_THREAD_RESET(*Thread);
    Thread->IsStop = FALSE;

#ifdef HAVE_THREAD_NAME
    PLATFORM_THREAD_ARG * arg = NULL;

    if (Name && strlen(Name) < PLATFORM_THREAD_NAME_MAX)
    {
        arg = (PLATFORM_THREAD_ARG * )calloc(1, sizeof(*arg));
        if (NULL == arg)
        {
            ret = -U_ENOMEM;
            goto CommonReturn;
        }
        arg->FuncArg = Arg;
        U_SafeStrCopy(arg->ThreadName, sizeof(arg->ThreadName), Name);
        arg->Func = Func;
        ret = pthread_create(&tid, Attr, U_PlatformThreadFunc, arg);
        if (ret != U_SUCCESS)
        {
            free(arg);
            ret = -errno;
            goto CommonReturn;
        }
    }
    else
#endif /* HAVE_THREAD_NAME */
    {
        U_UNUSED(Name);
        ret = pthread_create(&tid, Attr, Func, Arg);
        if (ret != U_SUCCESS)
        {
            ret = -errno;
            goto CommonReturn;
        }
    }
    Thread->Tid = tid;

CommonReturn:
    return ret;
}


U_STATIC_INLINE
long int
PlatformGetCurrentThreadId(
    void
    )
{
    return (long int)syscall(SYS_gettid);
}

U_STATIC_INLINE
long int
PlatformGetCurrentProcessId(
    void
    )
{
    return (long int)getpid();
}

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* !__PLATFORM_THREAD_H__ */