/* profile: opt_300 */
#include "common.h"

s8 func_0011F0D0(s8);
extern s8 *D_0035FDB4;
extern u32 D_0035FDB8;
extern u32 D_0035FDBC;

inline s32 func_inl(s8 *c) {
    if (D_0035FDB8 >= D_0035FDBC) {
        return 0;
    }
    *c = D_0035FDB4[D_0035FDB8++];
    return 1;
}

s32 func_0018A590(s32 arg0, s8 *arg1) {
    s8 c;
    s32 i;
    s32 temp;

    temp = 0;
    do {
        *arg1 = 0;
        i = 0;
        do {
            if (func_inl(&c) != 1) {
                temp = 1;
            } else if (c != 0x20 && c != 0x9 && c != 0xA && c != 0xD) {
                arg1[i] = func_0011F0D0(c);
                i++;
                arg1[i] = 0;
            }
        } while (!temp && c != 0xA && c != 0xD);
        if (*arg1 == 0x3B) {
            *arg1 = 0;
        }
    } while (*arg1 == 0 && !temp);
    if (*arg1 == 0) {
        return 0;
    }
    return 1;
}
