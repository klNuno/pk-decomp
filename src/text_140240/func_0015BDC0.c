#include "common.h"

void Erm_fn_v_UpdateLastError(s32, u8, s32, s32, s32, s32, s32, s32, char *, s32);
u8 func_001DB790(char *, char *);
extern char D_00331048[];
extern char D_00331060[];
extern char D_00348B90[];
extern u8 D_0035F3D0;
extern u8 D_0035F57C;

void func_0015BDC0(void) {
    if (D_0035F3D0 == 0xFF) {
        D_0035F3D0 = func_001DB790(D_00331048, D_00331060);
    } else {
        Erm_fn_v_UpdateLastError(3, D_0035F57C, 0, 4, -1, 0xFF, 0xFF, 0, D_00348B90, 0x24);
    }
}
