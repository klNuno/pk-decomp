#include "common.h"

void Erm_fn_v_UpdateLastError(s32, u8, s32, s32, s32, s32, s32, s32, char *, s32);
void func_00136BB0(s32);
void func_00162260(void);
u8 func_001DB790(char *, char *);
extern char D_00330E18[];
extern char D_00330E30[];
extern char D_00333C58[];
extern char D_00333C70[];
extern char D_00345480[];
extern u8 D_0035F3AC;
extern u8 D_0035F57C;

void func_00129B60(void) {
    if (D_0035F57C == 0xFF) {
        D_0035F57C = func_001DB790(D_00333C58, D_00333C70);
    } else {
        Erm_fn_v_UpdateLastError(3, D_0035F57C, 0, 4, -1, 0xFF, 0xFF, 0, D_00345480, 0x3E);
    }
    if (D_0035F3AC == 0xFF) {
        D_0035F3AC = func_001DB790(D_00330E18, D_00330E30);
    } else {
        Erm_fn_v_UpdateLastError(3, D_0035F57C, 0, 4, -1, 0xFF, 0xFF, 0, D_00345480, 0x3F);
    }
    func_00136BB0(0xA);
    func_00162260();
}
