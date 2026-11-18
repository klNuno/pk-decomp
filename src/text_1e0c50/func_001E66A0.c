/* profile: o0 */
#include "common.h"

typedef struct unk_func_001E66A0_0 {
    f32 unk_00;
    u8 pad_04[8];
} unk_func_001E66A0_0;

typedef struct unk_func_001E66A0_1 {
    unk_func_001E66A0_0 unk_00[8];
    u8 pad_60[8];
} unk_func_001E66A0_1;

typedef struct unk_func_001E66A0_2 {
    unk_func_001E66A0_1 *unk_00;
    u8 pad_04[2];
    u8 unk_06;
} unk_func_001E66A0_2;

typedef struct unk_func_001E66A0_3 {
    u8 pad_00[0x10];
    unk_func_001E66A0_2 *unk_10;
} unk_func_001E66A0_3;

typedef struct unk_func_001E66A0_4 {
    u8 pad_00[4];
    unk_func_001E66A0_3 *unk_04;
    unk_func_001E66A0_3 *unk_08;
    u8 pad_0C[4];
    u8 unk_10;
} unk_func_001E66A0_4;

typedef struct unk_func_001E66A0_5 {
    u8 pad_00[0xC];
    s32 unk_0C;
} unk_func_001E66A0_5;

unk_func_001E66A0_5 *HIE_fn_hGetSuperObjectObject(s32);
unk_func_001E66A0_4 *fn_p_stBrainGetMind(s32);

f32 func_001E66A0(u8 arg0, s32 arg1) {
    unk_func_001E66A0_3 *m;

    m = fn_p_stBrainGetMind(HIE_fn_hGetSuperObjectObject(arg1)->unk_0C)->unk_10
        ? fn_p_stBrainGetMind(HIE_fn_hGetSuperObjectObject(arg1)->unk_0C)->unk_04
        : fn_p_stBrainGetMind(HIE_fn_hGetSuperObjectObject(arg1)->unk_0C)->unk_08;
    return m->unk_10->unk_00[m->unk_10->unk_06].unk_00[arg0].unk_00;
}
