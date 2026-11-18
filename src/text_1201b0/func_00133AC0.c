#include "common.h"

u8 func_001DB790(char *, char *);
void Erm_fn_v_UpdateLastError(s32, u8, s32, s32, s32, s32, s32, s32, char *, s32);
extern u8 D_0035F3A4;
extern u8 D_0035F57C;
extern char D_00330DD8[];
extern char D_00330DF0[];
extern char D_00346BB0[];

void func_00133AC0(void) {
    if (D_0035F3A4 == 0xFF) {
        D_0035F3A4 = func_001DB790(D_00330DD8, D_00330DF0);
        return;
    }
    Erm_fn_v_UpdateLastError(3, D_0035F57C, 0, 4, -1, 0xFF, 0xFF, 0, D_00346BB0, 0x29);
}
