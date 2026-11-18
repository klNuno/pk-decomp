/* profile: o0 */
#include "common.h"

extern s32 D_0035FB7C;

u8 *func_002069C0(s32 arg0, u8 *arg1, s32 *arg2) {
    s32 temp;
    s32 temp2;

    temp = *(s32 *)(arg1 - 8);
    temp2 = 0;
    switch (temp) {
    case 0x47:
        temp2 = D_0035FB7C;
        break;
    }
    *arg2 = temp2;
    return arg1;
}
