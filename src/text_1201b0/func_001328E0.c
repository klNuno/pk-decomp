#include "common.h"

void Erm_fn_v_UpdateLastError(s32, u8, s32, s32, s32, s32, s32, s32, char *, s32);
u8 func_001DB790(char *, char *);
extern char D_00330D18[];
extern char D_00330D30[];
extern char D_003466A8[];
extern u8 D_0035F39C;
extern u8 D_0035F57C;
extern s32 D_00364F40[];
extern s32 D_00364F44[];
extern s32 D_00364F48[];

void func_001328E0(void) {
    if (D_0035F39C == 0xFF) {
        D_0035F39C = func_001DB790(D_00330D18, D_00330D30);
    } else {
        Erm_fn_v_UpdateLastError(3, D_0035F57C, 0, 4, -1, 0xFF, 0xFF, 0, D_003466A8, 0x21);
    }
    D_00364F40[0] = 0;
    D_00364F44[0] = 0;
    D_00364F48[0] = 0;
}
