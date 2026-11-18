/* profile: opt_300 */
#include "common.h"

extern char D_00348D40[];
extern u8 D_0035F3F8;
extern u8 D_0035F9B0;
extern s16 D_0035F9B4;
extern u16 *D_0035F9C0[2];

void Erm_fn_v_UpdateLastError(s32, u8, s32, s32, s32, s32, s32, s32, char *, s32);
s16 func_0015E110(u16 *);

inline s32 func_0015E2E0_inl(void) {
    if (D_0035F9B0 == 0) {
        Erm_fn_v_UpdateLastError(6, D_0035F3F8, 0, 4, -1, 0xFF, 0xFF, 0, D_00348D40, 0x37);
        return 0;
    }
    return 1;
}

s16 func_0015E2E0(s32 arg0) {
    s16 ret;
    s16 i;
    u16 **p;

    ret = 0;
    if (!func_0015E2E0_inl()) {
        return 0;
    }
    for (i = 0, p = D_0035F9C0; i < D_0035F9B4; i++, p++) {
        if (**p & 0x10) {
            if (arg0-- == 0) {
                ret = func_0015E110(*p);
                if (ret == -1) {
                    ret = 0;
                }
                break;
            }
        }
    }
    return ret;
}
