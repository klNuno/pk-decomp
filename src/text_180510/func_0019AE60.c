/* profile: o0_301 */
#include "common.h"

void Erm_fn_ClearLastError(s32, char *, s32);
void Erm_fn_v_UpdateLastError(s32, u8, s32, s32, s32, s32, s32, s32, char *, s32);
void func_001164E0(char *);
extern char D_00349EE8[];
extern u8 D_0035F528;

void func_0019AE60(char *arg0) {
    if (*arg0 < 0x30 && *arg0 > 0x39 && *arg0 != 0x2B && *arg0 != 0x2D) {
        Erm_fn_ClearLastError(0, D_00349EE8, 0x12D);
        Erm_fn_v_UpdateLastError(0x30, D_0035F528, 0, 0x18, -1, 0xFF, 0xFF, 0, D_00349EE8, 0x12D);
    }
    func_001164E0(arg0);
}
