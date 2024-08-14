/*
 * @Author: xuxb xuxb@appexnetworks.com
 * @Date: 2024-08-14 01:06:01
 * @LastEditors: xuxb xuxb@appexnetworks.com
 * @LastEditTime: 2024-08-14 01:42:45
 * @FilePath: \UOptLib\common\USafeStr.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include "USafeStr.h"
#include <stdarg.h>

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

size_t
U_SafeStrCopy(
    __out_ecount(CharCnt) char* OutStr,
    __in size_t CharCnt,
    __in char const* SrcStr
    )
{
    size_t n = 0;

    for (n = 0; n < CharCnt; n++)
    {
        OutStr[n] = SrcStr[n];

        if (SrcStr[n] == 0)
        {
            break;
        }
    }

    if (CharCnt == n && CharCnt > 0)
    {
        OutStr[CharCnt - 1] = 0;
    }

    return n;
}
