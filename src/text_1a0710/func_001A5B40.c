/* profile: o0_301 */
#include "common.h"

void Erm_fn_ClearLastError(s32, char *, s32);
void Erm_fn_v_UpdateLastError(s32, u8, s32, s32, s32, s32, s32, s32, char *, s32);
extern s32 D_00333618[];
extern s32 D_0033361C[];
extern s32 D_00333620[];
extern s32 D_00333624[];
extern s32 D_00333628[];
extern s32 D_0033362C[];
extern char D_0034B300[];
extern u8 D_0035F528;

void func_001A5B40(void) {
    if (D_00333618[0] != 1 || D_0033361C[0] != 2 || D_00333620[0] != 3 || D_00333624[0] != 4 || D_00333628[0] != 5 || D_0033362C[0] != 6) {
        Erm_fn_ClearLastError(0, D_0034B300, 0x570);
        Erm_fn_v_UpdateLastError(0x30, D_0035F528, 0, 0x15, -1, 0xFF, 0xFF, 0, D_0034B300, 0x570);
    }
}
