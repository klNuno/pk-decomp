/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_001BB2F0_0 {
    u8 pad_00[0x18];
    s32 unk_18;
} unk_func_001BB2F0_0;

void func_001BB580();
void Erm_fn_v_UpdateLastError(s32, u8, s32, s32, s32, s32, s32, s32, char *, s32);
void Erm_fn_ClearLastError(s32, char *, s32);
extern char D_0034B708[];
extern u8 D_0035F528;

void func_001BB2F0(unk_func_001BB2F0_0 *arg0, s32 arg1) {
    s32 temp;

    if (arg0 == NULL) {
        Erm_fn_ClearLastError(0, D_0034B708, 0xE6);
        Erm_fn_v_UpdateLastError(0x30, D_0035F528, 0, 0xE, -1, 0xFF, 0xFF, 0, D_0034B708, 0xE6);
    }
    temp = arg0->unk_18;
    if (temp == 0) {
        Erm_fn_ClearLastError(0, D_0034B708, 0xEE);
        Erm_fn_v_UpdateLastError(0x30, D_0035F528, 0, 0xF, -1, 0xFF, 0xFF, 0, D_0034B708, 0xEE);
    }
    func_001BB580(temp);
}
