/* profile: o0_301 */
#include "common.h"

void Erm_fn_v_UpdateLastError(s32, u8, s32, s32, s32, s32, s32, s32, char *, s32);
void Erm_fn_ClearLastError(s32, char *, s32);
extern char D_00349EE8[];
extern u8 D_0035F528;
extern u8 D_005AB790[];

void func_0019AD50(u8 arg0) {
    if (D_005AB790[0] == 0) {
        Erm_fn_v_UpdateLastError(0x30, D_0035F528, 0, 0x31, -1, 0xFF, 0xFF, 0, D_00349EE8, 0xC4);
    }
    if (arg0 == 0 || arg0 >= 0xC) {
        Erm_fn_ClearLastError(0, D_00349EE8, 0xC8);
        Erm_fn_v_UpdateLastError(0x30, D_0035F528, 0, 0x13, -1, 0xFF, 0xFF, 0, D_00349EE8, 0xC8);
    }
    D_005AB790[0] = arg0;
}
