#include "common.h"

s32 func_0010AF60(s32, s32, u8 *);
extern s32 D_0035FD44;
extern u8 D_00369940[];
extern u8 D_00369942[];
extern u8 D_00369943[];

s32 func_00181F50(void) {
    s32 ret;
    s32 pad;

    ret = 0;
    if (func_0010AF60(0, 0, D_00369940) > 0) {
        pad = ((D_00369942[0] << 8) | D_00369943[0]) ^ 0xFFFF;
    } else {
        pad = 0;
    }
    if ((pad & 0x4000) && !(D_0035FD44 & 0x4000)) {
        ret |= 0x4000;
    }
    if ((pad & 0x1000) && !(D_0035FD44 & 0x1000)) {
        ret |= 0x1000;
    }
    if ((pad & 0x40) && !(D_0035FD44 & 0x40)) {
        ret |= 0x40;
    }
    D_0035FD44 = pad;
    return ret;
}
