/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_001ABF90_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
    f32 unk_10;
    f32 unk_14;
    f32 unk_18;
    f32 unk_1C;
    f32 unk_20;
    u8 pad_24[0x4];
    s32 unk_28;
    u8 unk_2C;
} unk_func_001ABF90_0;

s32 func_00133590();
s32 *HIE_fn_hGetSuperObjectObject();
s32 func_00199130();
s32 func_0019FBA0(s32, s32);
extern f32 D_00333A20[];
extern f32 D_00333A24[];
extern f32 D_00333A28[];
extern s32 D_0035F560;
extern s32 D_0035FFB4;

void func_001ABF90(unk_func_001ABF90_0 *arg0, s32 arg1, f32 arg2) {
    D_0035FFB4 = 0;
    if (D_0035F560 == -1) {
        D_0035F560 = func_00133590();
    }
    arg0->unk_00 = arg2;
    arg0->unk_04 = arg0->unk_08 = 0.0f;
    arg0->unk_0C = 0.0f;
    arg0->unk_14 = D_00333A20[0];
    arg0->unk_18 = D_00333A24[0];
    arg0->unk_1C = D_00333A28[0];
    arg0->unk_20 = 0.0f;
    arg0->unk_2C = 0x6C;
    arg0->unk_28 = func_0019FBA0(func_00199130(*HIE_fn_hGetSuperObjectObject(arg1)), 0);
    arg0->unk_10 = 0.0f;
}
