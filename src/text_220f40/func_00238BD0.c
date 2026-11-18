/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_00238BD0_0 {
    s32 unk_00;
    u8 pad_04[0xC];
} unk_func_00238BD0_0;

typedef struct unk_func_00238BD0_1 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_00238BD0_1;

s32 fn_p_stEvalTree(s32, s32, unk_func_00238BD0_0 *);
void func_0012E2A0();
void func_001BE3F0();
s32 func_001979A0();
void func_0016EB10(void *, void *, f32, f32, f32);
void func_00155E80();
void func_00156DC0();
extern u8 D_005ABAF0[];
extern u32 D_005ABAFC[];

s32 func_00238BD0(s32 arg0, s32 arg1) {
    s32 temp0;
    s32 temp1;
    s32 temp2;
    s32 temp3;
    s32 temp4;
    unk_func_00238BD0_0 sp60;
    unk_func_00238BD0_1 sp78;
    unk_func_00238BD0_1 sp88;
    f32 sp94;
    f32 sp98;
    f32 sp9C;

    arg1 = fn_p_stEvalTree(arg0, arg1, &sp60);
    temp0 = sp60.unk_00;
    func_0012E2A0(temp0);
    func_001BE3F0(temp0);
    temp1 = func_001979A0(temp0);
    arg1 = fn_p_stEvalTree(arg0, arg1, &sp60);
    temp2 = sp60.unk_00;
    arg1 = fn_p_stEvalTree(arg0, arg1, &sp60);
    temp3 = sp60.unk_00;
    arg1 = fn_p_stEvalTree(arg0, arg1, &sp60);
    temp4 = sp60.unk_00;
    sp94 = temp2 / 100.0f;
    sp98 = temp3 / 100.0f;
    sp9C = temp4 / 1000.0f;
    func_0016EB10(D_005ABAF0, &sp78, sp94, sp98, sp9C);
    func_00155E80(temp1, &sp78);
    sp94 = D_005ABAFC[0] / 640.0f;
    sp88.unk_00 = sp94;
    sp88.unk_04 = 1.0f;
    sp88.unk_08 = sp94;
    func_00156DC0(temp1, &sp88);
    return arg1;
}
