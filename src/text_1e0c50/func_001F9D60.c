/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_001F9D60_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_001F9D60_0;

typedef struct unk_func_001F9D60_1 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} unk_func_001F9D60_1;

typedef struct unk_func_001F9D60_2 {
    unk_func_001F9D60_1 unk_00;
    s32 unk_0C;
} unk_func_001F9D60_2;

typedef struct unk_func_001F9D60_3 {
    u8 pad_00[0x74];
    s32 unk_74;
} unk_func_001F9D60_3;

typedef struct unk_func_001F9D60_4 {
    u8 pad_00[0x4];
    unk_func_001F9D60_3 *unk_04;
} unk_func_001F9D60_4;

typedef struct unk_func_001F9D60_5 {
    u8 pad_00[0x10];
    unk_func_001F9D60_4 *unk_10;
} unk_func_001F9D60_5;

typedef struct unk_func_001F9D60_6 {
    u8 unk_00[0x70];
} unk_func_001F9D60_6;

typedef struct unk_func_001F9D60_7 {
    u8 pad_00[0x110];
    unk_func_001F9D60_6 unk_110[1];
} unk_func_001F9D60_7;

unk_func_001F9D60_5 *HIE_fn_hGetSuperObjectObject();
void fn_vGetUltraOperatorPerso();
s32 *fn_p_stEvalTree();
s32 func_00208CC0();
void func_001F9D20();
extern unk_func_001F9D60_7 D_005AB790;

s32 *func_001F9D60(s32 arg0, s32 *arg1, unk_func_001F9D60_2 *arg2) {
    s32 sp7C;
    unk_func_001F9D60_0 sp60;
    unk_func_001F9D60_1 sp70;
    unk_func_001F9D60_2 sp50;
    void *temp_s2;
    unk_func_001F9D60_4 *temp_s1;
    unk_func_001F9D60_0 *temp_s0;
    s32 temp_s3;

    temp_s3 = arg1[-2];
    fn_vGetUltraOperatorPerso(func_00208CC0(temp_s3), arg0, &sp7C);
    temp_s1 = HIE_fn_hGetSuperObjectObject(sp7C)->unk_10;
    arg1 = fn_p_stEvalTree(arg0, arg1, &sp50);
    temp_s0 = (unk_func_001F9D60_0 *)&sp50;
    temp_s2 = &D_005AB790.unk_110[temp_s1->unk_04->unk_74];
    sp60.unk_00 = temp_s0->unk_00;
    sp60.unk_04 = temp_s0->unk_04;
    sp60.unk_08 = temp_s0->unk_08;
    func_001F9D20(&sp70, &sp60, temp_s2);
    (&arg2->unk_00)->unk_00 = ((unk_func_001F9D60_1 *)&sp70)->unk_00;
    (&arg2->unk_00)->unk_04 = ((unk_func_001F9D60_1 *)&sp70)->unk_04;
    (&arg2->unk_00)->unk_08 = ((unk_func_001F9D60_1 *)&sp70)->unk_08;
    arg2->unk_0C = 0x15;
    return arg1;
}
