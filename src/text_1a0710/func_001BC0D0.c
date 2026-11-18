/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_001BC0D0_0 {
    u8 pad_00[0x10];
    s32 unk_10;
    u8 pad_14[0x10];
    s32 *unk_24;
} unk_func_001BC0D0_0;

void Erm_fn_ClearLastError(s32, char *, s32);
void Erm_fn_v_UpdateLastError(s32, u8, s32, s32, s32, s32, s32, s32, char *, s32);
s32 *func_001BC2B0();
void func_0014F6B0(s32, f32 *, f32 *, f32 *);
extern char D_0034B710[];
extern u8 D_0035F528;

void func_001BC0D0(unk_func_001BC0D0_0 *arg0) {
    f32 sp20[3];
    f32 sp30[3];
    f32 sp40[3];

    if (arg0 == NULL) {
        Erm_fn_ClearLastError(0, D_0034B710, 0x9C);
        Erm_fn_v_UpdateLastError(0x30, D_0035F528, 0, 0xE, -1, 0xFF, 0xFF, 0, D_0034B710, 0x9C);
    }
    if (arg0->unk_24 != NULL) {
        Erm_fn_ClearLastError(0, D_0034B710, 0x9F);
        Erm_fn_v_UpdateLastError(0x30, D_0035F528, 0, 0xD, -1, 0xFF, 0xFF, 0, D_0034B710, 0x9F);
    }
    arg0->unk_24 = func_001BC2B0();
    sp30[0] = -1.0f;
    sp30[1] = 0.0f;
    sp30[2] = 0.0f;
    sp40[1] = sp40[0] = 0.0f;
    sp40[2] = 1.0f;
    if (arg0->unk_10 != 0) {
        sp20[0] = 0.0f;
        sp20[1] = -1.0f;
        sp20[2] = 0.0f;
    } else {
        sp20[0] = 0.0f;
        sp20[1] = 1.0f;
        sp20[2] = 0.0f;
    }
    func_0014F6B0(*arg0->unk_24, sp20, sp30, sp40);
}
