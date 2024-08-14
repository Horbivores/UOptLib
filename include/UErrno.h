/*
 * @Author: xuxb xuxb@appexnetworks.com
 * @Date: 2024-08-14 01:05:06
 * @LastEditors: xuxb xuxb@appexnetworks.com
 * @LastEditTime: 2024-08-14 01:27:44
 * @FilePath: \UOptLib\include\UErrno.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#ifndef __U_ERRNO_H__
#define __U_ERRNO_H__

#include "UAnnoDefs.h"
#include "UDefs.h"
#include "platformErrno.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#ifndef U_ERR_T
typedef int32_t U_ERR_T;
#endif 

#ifndef U_SUCCESS
#define U_SUCCESS  0       /* success */
#endif

#define U_EPERM EPERM		/* Operation not permitted */
#define U_ENOENT ENOENT	/* No such file or directory */
#define U_ESRCH ESRCH		/* No such process */
#define U_EINTR EINTR		/* Interrupted system call */
#define U_EIO EIO		    /* I/O error */
#define U_ENXIO ENXIO		/* No such device or address */
#define U_E2BIG E2BIG		/* Argument list too long */
#define U_ENOEXEC ENOEXEC	/* Exec format error */
#define U_EBADF EBADF		/* Bad file number */
#define U_ECHILD ECHILD	/* No child processes */
#define U_EAGAIN EAGAIN	/* Try again */
#define U_ENOMEM ENOMEM	/* Out of memory */
#define U_EACCES EACCES	/* Permission denied */
#define U_EFAULT EFAULT	/* Bad address */
#define U_ENOTBLK ENOTBLK	/* Block device required */
#define U_EBUSY EBUSY		/* Device or resource busy */
#define U_EEXIST EEXIST	/* File exists */
#define U_EXDEV EXDEV		/* Cross-device link */
#define U_ENODEV ENODEV	/* No such device */
#define U_ENOTDIR ENOTDIR	/* Not a directory */
#define U_EISDIR EISDIR	/* Is a directory */
#define U_EINVAL EINVAL	/* Invalid argument */
#define U_ENFILE ENFILE	/* File table overflow */
#define U_EMFILE EMFILE	/* Too many open files */
#define U_ENOTTY ENOTTY	/* Not a typewriter */
#define U_ETXTBSY ETXTBSY	/* Text file busy */
#define U_EFBIG EFBIG		/* File too large */
#define U_ENOSPC ENOSPC	/* No space left on device */
#define U_ESPIPE ESPIPE	/* Illegal seek */
#define U_EROFS EROFS		/* Read-only file system */
#define U_EMLINK EMLINK	/* Too many links */
#define U_EPIPE EPIPE		/* Broken pipe */
#define U_EDOM EDOM		/* Math argument out of domain of func */
#define U_ERANGE ERANGE	/* Math result not representable */
#define U_EDEADLK EDEADLK	/* Resource deadlock would occur */
#define U_ENAMETOOLONG ENAMETOOLONG	/* File name too long */
#define U_ENOLCK ENOLCK	/* No record locks available */
#define U_ENOSYS ENOSYS	/* Function not implemented */
#define U_ENOTEMPTY ENOTEMPTY	/* Directory not empty */
#define U_ELOOP ELOOP		/* Too many symbolic links encountered */
#define U_EWOULDBLOCK EWOULDBLOCK	/* Operation would block */
#define U_ENOMSG ENOMSG	/* No message of desired type */
#define U_EIDRM EIDRM		/* Identifier removed */
#define U_ECHRNG ECHRNG	/* Channel number out of range */
#define U_EL2NSYNC EL2NSYNC	/* Level 2 not synchronized */
#define U_EL3HLT EL3HLT	/* Level 3 halted */
#define U_EL3RST EL3RST	/* Level 3 reset */
#define U_ELNRNG ELNRNG	/* Link number out of range */
#define U_EUNATCH EUNATCH	/* Protocol driver not attached */
#define U_ENOCSI ENOCSI	/* No CSI structure available */
#define U_EL2HLT EL2HLT	/* Level 2 halted */
#define U_EBADE EBADE		/* Invalid exchange */
#define U_EBADR EBADR		/* Invalid request descriptor */
#define U_EXFULL EXFULL	/* Exchange full */
#define U_ENOANO ENOANO	/* No anode */
#define U_EBADRQC EBADRQC	/* Invalid request code */
#define U_EBADSLT EBADSLT	/* Invalid slot */
#define U_EDEADLOCK EDEADLOCK
#define U_EBFONT EBFONT	/* Bad font file format */
#define U_ENOSTR ENOSTR	/* Device not a stream */
#define U_ENODATA ENODATA	/* No data available */
#define U_ETIME ETIME		/* Timer expired */
#define U_ENOSR ENOSR		/* Out of streams resources */
#define U_ENONET ENONET	/* Machine is not on the network */
#define U_ENOPKG ENOPKG	/* Package not installed */
#define U_EREMOTE EREMOTE	/* Object is remote */
#define U_ENOLINK ENOLINK	/* Link has been severed */
#define U_EADV EADV		/* Advertise error */
#define U_ESRMNT ESRMNT	/* Srmount error */
#define U_ECOMM ECOMM		/* Communication error on send */
#define U_EPROTO EPROTO	/* Protocol error */
#define U_EMULTIHOP EMULTIHOP	/* Multihop attempted */
#define U_EDOTDOT EDOTDOT	/* RFS specific error */
#define U_EBADMSG EBADMSG	/* Not a data message */
#define U_EOVERFLOW EOVERFLOW	/* Value too large for defined data type */
#define U_ENOTUNIQ ENOTUNIQ	/* Name not unique on network */
#define U_EBADFD EBADFD	/* File descriptor in bad state */
#define U_EREMCHG EREMCHG	/* Remote address changed */
#define U_ELIBACC ELIBACC	/* Can not access a needed shared library */
#define U_ELIBBAD ELIBBAD	/* Accessing a corrupted shared library */
#define U_ELIBSCN ELIBSCN	/* .lib section in a.out corrupted */
#define U_ELIBMAX ELIBMAX	/* Attempting to link in too many shared libraries */
#define U_ELIBEXEC ELIBEXEC	/* Cannot exec a shared library directly */
#define U_EILSEQ EILSEQ	/* Illegal byte sequence */
#define U_ERESTART ERESTART	/* Interrupted system call should be restarted */
#define U_ESTRPIPE ESTRPIPE	/* Streams pipe error */
#define U_EUSERS EUSERS	/* Too many users */
#define U_ENOTSOCK ENOTSOCK	/* Socket operation on non-socket */
#define U_EDESTADDRREQ EDESTADDRREQ	/* Destination address required */
#define U_EMSGSIZE EMSGSIZE	/* Message too long */
#define U_EPROTOTYPE EPROTOTYPE	/* Protocol wrong type for socket */
#define U_ENOPROTOOPT ENOPROTOOPT	/* Protocol not available */
#define U_EPROTONOSUPPORT EPROTONOSUPPORT	/* Protocol not supported */
#define U_ESOCKTNOSUPPORT ESOCKTNOSUPPORT	/* Socket type not supported */
#define U_EOPNOTSUPP EOPNOTSUPP	/* Operation not supported on transport endpoint */
#define U_EPFNOSUPPORT EPFNOSUPPORT	/* Protocol family not supported */
#define U_EAFNOSUPPORT EAFNOSUPPORT	/* Address family not supported by protocol */
#define U_EADDRINUSE EADDRINUSE	/* Address already in use */
#define U_EADDRNOTAVAIL EADDRNOTAVAIL	/* Cannot assign requested address */
#define U_ENETDOWN ENETDOWN	/* Network is down */
#define U_ENETUNREACH ENETUNREACH	/* Network is unreachable */
#define U_ENETRESET ENETRESET	/* Network dropped connection because of reset */
#define U_ECONNABORTED ECONNABORTED	/* Software caused connection abort */
#define U_ECONNRESET ECONNRESET	/* Connection reset by peer */
#define U_ENOBUFS ENOBUFS	/* No buffer space available */
#define U_EISCONN EISCONN	/* Transport endpoint is already connected */
#define U_ENOTCONN ENOTCONN	/* Transport endpoint is not connected */
#define U_ESHUTDOWN ESHUTDOWN	/* Cannot send after transport endpoint shutdown */
#define U_ETOOMANYREFS ETOOMANYREFS	/* Too many references: cannot splice */
#define U_ETIMEDOUT ETIMEDOUT	/* Connection timed out */
#define U_ECONNREFUSED ECONNREFUSED	/* Connection refused */
#define U_EHOSTDOWN EHOSTDOWN	/* Host is down */
#define U_EHOSTUNREACH EHOSTUNREACH	/* No route to host */
#define U_EALREADY EALREADY	/* Operation already in progress */
#define U_EINPROGRESS EINPROGRESS	/* Operation now in progress */
#define U_ESTALE ESTALE	/* Stale file handle */
#define U_EUCLEAN EUCLEAN	/* Structure needs cleaning */
#define U_ENOTNAM ENOTNAM	/* Not a XENIX named type file */
#define U_ENAVAIL ENAVAIL	/* No XENIX semaphores available */
#define U_EISNAM EISNAM	/* Is a named type file */
#define U_EREMOTEIO EREMOTEIO	/* Remote I/O error */
#define U_EDQUOT EDQUOT	/* Quota exceeded */
#define U_ENOMEDIUM ENOMEDIUM	/* No medium found */
#define U_EMEDIUMTYPE EMEDIUMTYPE	/* Wrong medium type */
#define U_ECANCELED ECANCELED	/* Operation Canceled */
#define U_ENOKEY ENOKEY	/* Required key not available */
#define U_EKEYEXPIRED EKEYEXPIRED	/* Key has expired */
#define U_EKEYREVOKED EKEYREVOKED	/* Key has been revoked */
#define U_EKEYREJECTED EKEYREJECTED	/* Key was rejected by service */
/* for  mutexes */
#define U_EOWNERDEAD EOWNERDEAD	/* Owner died */
#define U_ENOTRECOVERABLE ENOTRECOVERABLE	/* State not recoverable */
#define U_ERFKILL ERFKILL	/* Operation not possible due to RF-kill */
#define U_EHWPOISON EHWPOISON	/* Memory page has hardware error */
/* EHWPOISON is 133 in linux */

#define U_ENOTINIT         200     /* No initialized object */
#define U_EVERSION         201     /* Wrong software version */
#define U_EOF              202     /* End of the file */
#define U_ESYSFAIL         253     /* System call fail, or other system related error */
#define U_EUNKNOWN         254     /* Unknown error */
#define U_ESYSTEM_MAX      255     /* system error max */

#define U_ERRNO_MAX        4095


#ifndef U_TranslateSysError
U_ERR_T
U_TranslateSysError(
    __in int SysErrCode
    );
#endif

#ifdef __cplusplus
        }
#endif /* __cplusplus */


#endif /* !__U_ERRNO_H__ */