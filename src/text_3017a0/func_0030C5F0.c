/* profile: opt_300 */
#include "common.h"

s32 func_00321EB0();
extern u8 D_0035CEF0[];

s32 func_0030C5F0(s32 arg0) {
    return func_00321EB0(arg0, 7, D_0035CEF0) < 0 ? -1 : 1;
}
