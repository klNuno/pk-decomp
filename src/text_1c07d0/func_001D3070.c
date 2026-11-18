/* profile: o0_301 */
#include "common.h"

void Erm_fn_ClearLastError(s32, char *, s32);
void Erm_fn_v_UpdateLastError(s32, u8, s32, s32, s32, s32, s32, s32, char *, s32);
s32 func_001D3190();
void func_001D4430(s32);
extern char D_0034BD48[];
extern u8 D_0035F528;

void func_001D3070(s32 *arg0) {
    if (arg0 == NULL) {
        Erm_fn_ClearLastError(0, D_0034BD48, 0x122);
        Erm_fn_v_UpdateLastError(0x30, D_0035F528, 0, 0xE, -1, 0xFF, 0xFF, 0, D_0034BD48, 0x122);
    }
    if (*arg0 != 0) {
        Erm_fn_ClearLastError(0, D_0034BD48, 0x125);
        Erm_fn_v_UpdateLastError(0x30, D_0035F528, 0, 0xD, -1, 0xFF, 0xFF, 0, D_0034BD48, 0x125);
    }
    *arg0 = func_001D3190();
    func_001D4430(*arg0);
}
