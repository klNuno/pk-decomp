/* profile: o0_301 */
#include "common.h"

void Erm_fn_v_UpdateLastError(s32, u8, s32, u16, s32, s32, s32, s32, char *, s32);
extern char D_0034D8F0[];
extern u8 D_0035F588;

void func_001EDBB0(u16 arg0, s32 arg1) {
    Erm_fn_v_UpdateLastError(0x43, D_0035F588, 0, arg0, -1, 0xFF, 0xFF, arg1, D_0034D8F0, 0x2A);
}
