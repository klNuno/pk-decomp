/* profile: o0_301 */
#include "common.h"

extern u16 D_0035FC20;

s32 *func_00242800(s32 arg0, s32 *arg1) {
    s32 type;

    type = arg1[-2];
    switch (type) {
    case 0x30E:
        D_0035FC20 &= ~2;
        D_0035FC20 |= 1;
        break;
    case 0x30F:
        D_0035FC20 &= ~1;
        D_0035FC20 |= 2;
        break;
    }
    return arg1;
}
