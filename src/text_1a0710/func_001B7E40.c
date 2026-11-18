/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_001B7E40_0 {
    u8 pad_00[0x8];
    s32 unk_08;
} unk_func_001B7E40_0;

extern char D_0034B6A8[];
extern u8 D_0035F528;

void Erm_fn_ClearLastError(s32, char *, s32);
void Erm_fn_v_UpdateLastError(s32, u8, s32, s32, s32, s32, s32, s32, char *, s32);
void func_001B7D60(s32);

void func_001B7E40(unk_func_001B7E40_0 *arg0) {
    if (arg0 == NULL) {
        Erm_fn_ClearLastError(0, D_0034B6A8, 0x15E);
        Erm_fn_v_UpdateLastError(0x30, D_0035F528, 0, 0xE, -1, 0xFF, 0xFF, 0, D_0034B6A8, 0x15E);
    }
    if (arg0->unk_08 == 0) {
        Erm_fn_ClearLastError(0, D_0034B6A8, 0x161);
        Erm_fn_v_UpdateLastError(0x30, D_0035F528, 0, 0xF, -1, 0xFF, 0xFF, 0, D_0034B6A8, 0x161);
    }
    func_001B7D60(arg0->unk_08);
}
