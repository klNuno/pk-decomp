/* profile: opt_300 */
#include "common.h"

void Erm_fn_v_UpdateLastError(s32, u8, s32, s32, s32, s32, s32, s32, char *, s32);
s32 func_0015E150(s32, s32);
extern char D_00348D40[];
extern u8 D_0035F3F8;
extern u8 D_0035F9B0;
extern s16 D_0035F9B4;
extern s32 D_0035F9C0[2];

s32 func_0015E9F0(u16 arg0, s32 arg1, s32 arg2) {
    s32 ok;
    s32 temp_s0;

    if (D_0035F9B0 == 0) {
        Erm_fn_v_UpdateLastError(6, D_0035F3F8, 0, 4, -1, 0xFF, 0xFF, 0, D_00348D40, 0x37);
        ok = 0;
    } else {
        ok = 1;
    }
    if (ok == 0) {
        return 0;
    }
    if (D_0035F9B4 >= 2) {
        Erm_fn_v_UpdateLastError(6, D_0035F3F8, 0, 5, -1, 0xFF, 0xFF, 0, D_00348D40, 0x37);
        return 0;
    }
    switch (arg0) {
    case 0x10:
        temp_s0 = func_0015E150(arg1, arg2);
        break;
    default:
        temp_s0 = 0;
        break;
    }
    if (temp_s0 != 0) {
        D_0035F9C0[D_0035F9B4] = temp_s0;
        D_0035F9B4++;
    } else {
        Erm_fn_v_UpdateLastError(6, D_0035F3F8, 0, 1, -1, 0xFF, 0xFF, 0, D_00348D40, 0x37);
    }
    return temp_s0;
}
