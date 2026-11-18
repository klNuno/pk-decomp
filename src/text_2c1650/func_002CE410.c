/* profile: opt_300 */
#include "common.h"

s32 func_002CD350(s32, char *, s32);
s32 func_002CD460(char *);

s32 func_002CE410(s32 arg0) {
    char buf[0x100];
    s32 ret = -1;
    if (func_002CD350(arg0, buf, 0x100) != 0) {
        ret = func_002CD460(buf);
    }
    return ret;
}
