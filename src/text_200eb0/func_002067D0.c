/* profile: o0 */
#include "common.h"

s8 func_0015DDC0();

s32 *func_002067D0(s32 arg0, s32 *arg1, s32 *arg2) {
    s32 temp;
    s32 kind;

    kind = arg1[-2];
    temp = 0;
    switch (kind) {
    case 0x41:
        temp = func_0015DDC0();
        break;
    }
    *arg2 = temp;
    return arg1;
}
