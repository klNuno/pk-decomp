#include "common.h"

void Erm_fn_v_UpdateLastError(s32, u8, s32, s32, s32, s32, s32, s32, char *, s32);
void Erm_fn_ClearLastError(s32, char *, s32);
extern char D_00346830[];
extern u8 D_0035F3A0;
extern u32 D_0036501C[];

s32 func_00133590(void) {
    if (D_0036501C[0] > 0x32) {
        Erm_fn_ClearLastError(0, D_00346830, 0x76);
        Erm_fn_v_UpdateLastError(7, D_0035F3A0, 0, 5, -1, 0xFF, 0xFF, 0, D_00346830, 0x76);
    }
    D_0036501C[0]++;
    return D_0036501C[0] - 1;
}
