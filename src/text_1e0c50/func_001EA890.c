/* profile: o0_301 */
#include "common.h"

s32 func_001EA450();
void func_001EDBB0();

s32 *func_001EA890(s32 arg0, s32 *arg1, s32 arg2) {
    if (!(u8)func_001EA450(*arg1, arg0, arg2)) {
        func_001EDBB0(10, 0);
    }
    return arg1 += 2;
}
