#include "common.h"

void Erm_fn_v_UpdateLastError(s32, u8, s32, s32, s32, s32, s32, s32, char *, s32);
u8 func_001DB790(char *, char *);
extern char D_00333BF8[];
extern char D_00333C10[];
extern char D_0034C478[];
extern u8 D_0035F578;
extern u8 D_0035F57C;
extern u8 D_003600E8;

void func_001DAF80(void) {
    if (D_0035F578 == 0xFF) {
        D_0035F578 = func_001DB790(D_00333BF8, D_00333C10);
    } else {
        Erm_fn_v_UpdateLastError(3, D_0035F57C, 0, 4, -1, 0xFF, 0xFF, 0, D_0034C478, 0x16);
    }
    D_003600E8 = 0xFF;
}
