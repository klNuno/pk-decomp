/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_001BC310_0 {
    u8 pad_00[0x24];
    s32 unk_24;
} unk_func_001BC310_0;

void Erm_fn_v_UpdateLastError(s32, u8, s32, s32, s32, s32, s32, s32, char *, s32);
void Erm_fn_ClearLastError(s32, char *, s32);
void HMU_fn_vFree(s32 *, s32);
extern char D_0034B710[];
extern u8 D_0035F528;

void func_001BC310(unk_func_001BC310_0 *arg0) {
    if (arg0 == NULL) {
        Erm_fn_ClearLastError(0, D_0034B710, 0xCD);
        Erm_fn_v_UpdateLastError(0x30, D_0035F528, 0, 0xE, -1, 0xFF, 0xFF, 0, D_0034B710, 0xCD);
    }
    if (arg0->unk_24 == 0) {
        Erm_fn_ClearLastError(0, D_0034B710, 0xD0);
        Erm_fn_v_UpdateLastError(0x30, D_0035F528, 0, 0xF, -1, 0xFF, 0xFF, 0, D_0034B710, 0xD0);
    }
    HMU_fn_vFree(&arg0->unk_24, 0);
}
