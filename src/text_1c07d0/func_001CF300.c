/* profile: o0 */
#include "common.h"

extern s32 D_00360030;

void func_001CF300(u16 arg0) {
    s32 temp;

    temp = 1;
    temp << arg0;
    D_00360030 &= !temp;
}
