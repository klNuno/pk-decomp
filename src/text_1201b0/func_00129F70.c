#include "common.h"

void Erm_fn_v_UpdateLastError(s32, u8, s32, s32, s32, s32, s32, s32, char *, s32);
s16 func_0012AB90(s32);
extern s16 D_0035F830;
extern u8 D_0035F384;
extern char D_00346398[];
extern s32 D_00363748[];

s16 func_00129F70(void) {
    if (D_0035F830 == 0) {
        Erm_fn_v_UpdateLastError(1, D_0035F384, 0, 2, -1, 0xFF, 0xFF, 0, D_00346398, 0x288);
        return 0x7FFF;
    }
    return func_0012AB90(D_00363748[0]);
}
