#include "common.h"

void Erm_fn_v_UpdateLastError(s32, u8, s32, s32, s32, s32, s32, s32, char *, s32);
s16 func_0015F470();
u8 func_001DB790(char *, char *);
void memset(void *, s32, s32);
extern char D_00331380[];
extern char D_00331390[];
extern char D_00348D40[];
extern u8 D_0035F3F8;
extern u8 D_0035F57C;
extern u8 D_0035F9B0;
extern u8 D_0035F9B8;
extern u64 D_0035F9C0;

u8 func_0015ECA0(void) {
    if (D_0035F9B0 == 0) {
        if (D_0035F9B8 == 0) {
            if (D_0035F3F8 == 0xFF) {
                D_0035F3F8 = func_001DB790(D_00331380, D_00331390);
            } else {
                Erm_fn_v_UpdateLastError(3, D_0035F57C, 0, 4, -1, 0xFF, 0xFF, 0, D_00348D40, 0x92);
            }
            D_0035F9B8 = 1;
        }
        memset(&D_0035F9C0, 0, 8);
        if (func_0015F470() == 1) {
            D_0035F9B0 = 1;
        }
    }
    return D_0035F9B0;
}
