#include "common.h"

void Erm_fn_v_UpdateLastError(s32, u8, s32, s32, s32, s32, s32, s32, char *, s32);
extern char D_00349180[];
extern u8 D_0035F40C;

void func_00162130(void) {
    Erm_fn_v_UpdateLastError(5, D_0035F40C, 0, 1, -1, 0xFF, 0xFF, 0, D_00349180, 0x25);
}
