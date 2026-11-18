#include "common.h"

u8 func_001DB790(char *, char *);
void Erm_fn_v_UpdateLastError(s32, u8, s32, s32, s32, s32, s32, s32, char *, s32);
extern u8 D_0035F40C;
extern u8 D_0035F57C;
extern char D_00331480[];
extern char D_00331490[];
extern char D_00349180[];

void func_001620C0(void) {
    if (D_0035F40C == 0xFF) {
        D_0035F40C = func_001DB790(D_00331480, D_00331490);
        return;
    }
    Erm_fn_v_UpdateLastError(3, D_0035F57C, 0, 4, -1, 0xFF, 0xFF, 0, D_00349180, 0x3D);
}
