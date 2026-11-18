#include "common.h"

void Erm_fn_v_UpdateLastError(s32, u8, s32, s32, s32, s32, s32, s32, char *, s32);
u8 func_001DB790(char *, char *);
extern char D_00330D88[];
extern char D_00330DA0[];
extern char D_00346830[];
extern u8 D_0035F3A0;
extern u8 D_0035F57C;
extern s32 D_0036501C[];

void func_00133630(void) {
    if (D_0035F3A0 == 0xFF) {
        D_0035F3A0 = func_001DB790(D_00330D88, D_00330DA0);
    } else {
        Erm_fn_v_UpdateLastError(3, D_0035F57C, 0, 4, -1, 0xFF, 0xFF, 0, D_00346830, 0x3D);
    }
    D_0036501C[0] = 0;
}
