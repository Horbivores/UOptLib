/*
 * @Author: xuxb xuxb@appexnetworks.com
 * @Date: 2024-08-14 01:18:55
 * @LastEditors: xuxb xuxb@appexnetworks.com
 * @LastEditTime: 2024-08-14 01:19:48
 * @FilePath: \UOptLib\include\UAnnoDefs.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#ifndef __U_ANNO_DEFS_H__
#define __U_ANNO_DEFS_H__

#include "platformAnnotation.h"
#ifndef __be128
#define __be128
#endif /* !__be128 */

#ifndef __in
#define __in
#endif /* !__in */

#ifndef __in_opt
#define __in_opt
#endif /* !__in_opt */

#ifndef __consume
#define __consume
#endif /* !__consume */

#ifndef __success_consume
#define __success_consume
#endif /* !__consume */

#ifndef __in_bcount
#define __in_bcount(size)
#endif /* !__in_bcount */

#ifndef __in_ecount
#define __in_ecount(size)
#endif /* !__in_ecount */

#ifndef __in_bcount_opt
#define __in_bcount_opt(size)
#endif /* !__in_bcount_opt */

#ifndef __in_ecount_opt
#define __in_ecount_opt(size)
#endif /* !__in_ecount_opt */

#ifndef __in_ecount_opt
#define __in_ecount_opt(size)
#endif /* !__in_ecount_opt */

#ifndef __out
#define __out
#endif /* !__out */

#ifndef __out_opt
#define __out_opt
#endif /* !__out_opt */

#ifndef __out_bcount
#define __out_bcount(size)
#endif /* !__out_bcount */

#ifndef __out_ecount
#define __out_ecount(size)
#endif /* !__out_ecount */

#ifndef __out_bcount_opt
#define __out_bcount_opt(size)
#endif /* !__out_bcount_opt */

#ifndef __out_ecount_opt
#define __out_ecount_opt(size)
#endif /* !__out_ecount_opt */

#ifndef __inout
#define __inout
#endif /* !__inout */

#ifndef __inout_opt
#define __inout_opt
#endif /* !__inout_opt */

#ifndef __inout_bcount
#define __inout_bcount(size)
#endif /* !__inout_bcount */

#ifndef __inout_ecount
#define __inout_ecount(size)
#endif /* !__inout_ecount */

#ifndef __inout_bcount_opt
#define __inout_bcount_opt(size)
#endif /* !__inout_bcount_opt */

#ifndef __inout_ecount_opt
#define __inout_ecount_opt(size)
#endif /* !__inout_ecount_opt */

#ifndef __deref_in
#define __deref_in
#endif /* !__deref_in */

#ifndef __deref_in_opt
#define __deref_in_opt
#endif /* !__deref_in_opt */

#ifndef __deref_in_bcount
#define __deref_in_bcount(size)
#endif /* !__deref_in_bcount */

#ifndef __deref_in_ecount
#define __deref_in_ecount(size)
#endif /* !__deref_in_ecount */

#ifndef __deref_in_bcount_opt
#define __deref_in_bcount_opt(size)
#endif /* !__deref_in_bcount_opt */

#ifndef __deref_in_ecount_opt
#define __deref_in_ecount_opt(size)
#endif /* !__deref_in_ecount_opt */

#ifndef __deref_out
#define __deref_out
#endif /* !__deref_out */

#ifndef __deref_out_opt
#define __deref_out_opt
#endif /* !__deref_out_opt */

#ifndef __deref_out_bcount
#define __deref_out_bcount(size)
#endif /* !__deref_out_bcount */

#ifndef __deref_out_ecount
#define __deref_out_ecount(size)
#endif /* !__deref_out_ecount */

#ifndef __deref_out_bcount_opt
#define __deref_out_bcount_opt(size)
#endif /* !__deref_out_bcount_opt */

#ifndef __deref_out_ecount_opt
#define __deref_out_ecount_opt(size)
#endif /* !__deref_out_ecount_opt */

#ifndef __deref_inout
#define __deref_inout
#endif /* !__deref_inout */

#ifndef __deref_inout_opt
#define __deref_inout_opt
#endif /* !__deref_inout_opt */

#ifndef __deref_inout_bcount
#define __deref_inout_bcount(size)
#endif /* !__deref_inout_bcount */

#ifndef __deref_inout_ecount
#define __deref_inout_ecount(size)
#endif /* !__deref_inout_ecount */

#ifndef __deref_inout_bcount_opt
#define __deref_inout_bcount_opt(size)
#endif /* !__deref_inout_bcount_opt */

#ifndef __deref_inout_ecount_opt
#define __deref_inout_ecount_opt(size)
#endif /* !__deref_inout_ecount_opt */

#ifndef __deref_opt_in
#define __deref_opt_in
#endif /* !__deref_opt_in */

#ifndef __deref_opt_in_opt
#define __deref_opt_in_opt
#endif /* !__deref_opt_in_opt */

#ifndef __deref_opt_in_bcount
#define __deref_opt_in_bcount(size)
#endif /* !__deref_opt_in_bcount */

#ifndef __deref_opt_in_ecount
#define __deref_opt_in_ecount(size)
#endif /* !__deref_opt_in_ecount */

#ifndef __deref_opt_in_bcount_opt
#define __deref_opt_in_bcount_opt(size)
#endif /* !__deref_opt_in_bcount_opt */

#ifndef __deref_opt_in_ecount_opt
#define __deref_opt_in_ecount_opt(size)
#endif /* !__deref_opt_in_ecount_opt */

#ifndef __deref_opt_out
#define __deref_opt_out
#endif /* !__deref_opt_out */

#ifndef __deref_opt_out_opt
#define __deref_opt_out_opt
#endif /* !__deref_opt_out_opt */

#ifndef __deref_opt_out_bcount
#define __deref_opt_out_bcount(size)
#endif /* !__deref_opt_out_bcount */

#ifndef __deref_opt_out_ecount
#define __deref_opt_out_ecount(size)
#endif /* !__deref_opt_out_ecount */

#ifndef __deref_opt_out_bcount_opt
#define __deref_opt_out_bcount_opt(size)
#endif /* !__deref_opt_out_bcount_opt */

#ifndef __deref_opt_out_ecount_opt
#define __deref_opt_out_ecount_opt(size)
#endif /* !__deref_opt_out_ecount_opt */

#ifndef __deref_opt_inout
#define __deref_opt_inout
#endif /* !__deref_opt_inout */

#ifndef __deref_opt_inout_opt
#define __deref_opt_inout_opt
#endif /* !__deref_opt_inout_opt */

#ifndef __deref_opt_inout_bcount
#define __deref_opt_inout_bcount(size)
#endif /* !__deref_opt_inout_bcount */

#ifndef __deref_opt_inout_ecount
#define __deref_opt_inout_ecount(size)
#endif /* !__deref_opt_inout_ecount */

#ifndef __deref_opt_inout_bcount_opt
#define __deref_opt_inout_bcount_opt(size)
#endif /* !__deref_opt_inout_bcount_opt */

#ifndef __deref_opt_inout_ecount_opt
#define __deref_opt_inout_ecount_opt(size)
#endif /* !__deref_opt_inout_ecount_opt */

#ifndef __consume_opt
#define __consume_opt
#endif /* !__consume_opt */



#endif /* !__U_ANNO_DEFS_H__ */