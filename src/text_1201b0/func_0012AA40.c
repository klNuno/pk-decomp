#include "common.h"

void Erm_fn_v_UpdateLastError(s32, u8, s32, s32, s32, s32, s32, s32, char *, s32);
s32 func_0012AC50(s32);
s32 func_0012AC60(s32);
u8 func_001DB790(char *, char *);
void *memset(void *, s32, u32);
extern char D_00330CB8[];
extern char D_00330CD0[];
extern char D_003463A0[];
extern u8 D_0035F384;
extern u8 D_0035F57C;
extern s16 D_0035F82C;
extern s16 D_0035F830;
extern s16 D_0035F834;
extern u8 D_00363330[];
extern s32 D_00363730[];
extern s32 D_00363734[];
extern s32 D_00363738[];
extern s32 D_00363740[];
extern s32 D_00363744[];
extern s32 D_00363748[];

s32 func_0012AA40(void) {
    if (D_0035F830 != 0) {
        return 0;
    }
    memset(D_00363330, 0, 0x400);
    D_0035F82C = 0;
    D_00363740[0] = func_0012AC60(0);
    D_00363744[0] = func_0012AC60(1);
    D_00363748[0] = func_0012AC60(2);
    D_00363730[0] = func_0012AC50(0);
    D_00363734[0] = func_0012AC50(1);
    D_00363738[0] = func_0012AC50(2);
    if (D_0035F834 == 0) {
        if (D_0035F384 == 0xFF) {
            D_0035F384 = func_001DB790(D_00330CB8, D_00330CD0);
        } else {
            Erm_fn_v_UpdateLastError(3, D_0035F57C, 0, 4, -1, 0xFF, 0xFF, 0, D_003463A0, 0x2D);
        }
        D_0035F834 = 1;
    }
    D_0035F830++;
    return 0;
}
