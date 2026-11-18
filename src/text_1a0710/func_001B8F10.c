/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_001B8F10_0 {
    u8 pad_00[0x1C];
    s32 unk_1C;
} unk_func_001B8F10_0;

extern char D_0034B6C8[];
extern u8 D_0035F528;

void Erm_fn_ClearLastError(s32, char *, s32);
void Erm_fn_v_UpdateLastError(s32, u8, s32, s32, s32, s32, s32, s32, char *, s32);
void func_001B9410(s32);

void func_001B8F10(unk_func_001B8F10_0 *arg0) {
    if (arg0 == NULL) {
        Erm_fn_ClearLastError(0, D_0034B6C8, 0x234);
        Erm_fn_v_UpdateLastError(0x30, D_0035F528, 0, 0xE, -1, 0xFF, 0xFF, 0, D_0034B6C8, 0x234);
    }
    if (arg0->unk_1C == 0) {
        Erm_fn_ClearLastError(0, D_0034B6C8, 0x237);
        Erm_fn_v_UpdateLastError(0x30, D_0035F528, 0, 0xF, -1, 0xFF, 0xFF, 0, D_0034B6C8, 0x237);
    }
    func_001B9410(arg0->unk_1C);
}
