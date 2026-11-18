/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_001B9510_0 {
    u8 pad_00[0x1C];
    s32 unk_1C;
} unk_func_001B9510_0;

void Erm_fn_v_UpdateLastError(s32, u8, s32, s32, s32, s32, s32, s32, char *, s32);
void Erm_fn_ClearLastError(s32, char *, s32);
extern char D_0034B6C8[];
extern u8 D_0035F528;

void func_001B9510(unk_func_001B9510_0 *arg0, s32 arg1) {
    if (arg0 == NULL) {
        Erm_fn_ClearLastError(0, D_0034B6C8, 0x2B6);
        Erm_fn_v_UpdateLastError(0x30, D_0035F528, 0, 0xE, -1, 0xFF, 0xFF, 0, D_0034B6C8, 0x2B6);
    }
    if (arg0->unk_1C == 0) {
        Erm_fn_ClearLastError(0, D_0034B6C8, 0x2B9);
        Erm_fn_v_UpdateLastError(0x30, D_0035F528, 0, 0xF, -1, 0xFF, 0xFF, 0, D_0034B6C8, 0x2B9);
    }
    switch (arg1) {
    case 2:
    case 1:
    case 5:
    case 4:
        break;
    }
}
