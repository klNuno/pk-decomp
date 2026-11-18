/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_001B8D50_0 {
    u8 pad_00[0x1C];
    s32 unk_1C;
} unk_func_001B8D50_0;

extern char D_0034B6C8[];
extern u8 D_0035F528;

void Erm_fn_ClearLastError(s32, char *, s32);
void Erm_fn_v_UpdateLastError(s32, u8, s32, s32, s32, s32, s32, s32, char *, s32);
s32 func_001B8E70();
void func_001B9300(s32);

void func_001B8D50(unk_func_001B8D50_0 *arg0) {
    if (arg0 == NULL) {
        Erm_fn_ClearLastError(0, D_0034B6C8, 0x20D);
        Erm_fn_v_UpdateLastError(0x30, D_0035F528, 0, 0xE, -1, 0xFF, 0xFF, 0, D_0034B6C8, 0x20D);
    }
    if (arg0->unk_1C != 0) {
        Erm_fn_ClearLastError(0, D_0034B6C8, 0x210);
        Erm_fn_v_UpdateLastError(0x30, D_0035F528, 0, 0xD, -1, 0xFF, 0xFF, 0, D_0034B6C8, 0x210);
    }
    arg0->unk_1C = func_001B8E70();
    func_001B9300(arg0->unk_1C);
}
