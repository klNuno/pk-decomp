/* profile: o0_301_p */
#include "common.h"

typedef struct unk_func_0022D9B0_0 {
    f32 unk_00;
    u8 pad_04[0x14];
    f32 unk_18;
} unk_func_0022D9B0_0;

typedef struct unk_func_0022D9B0_1 {
    u8 pad_00[8];
    s32 unk_08;
} unk_func_0022D9B0_1;

typedef struct unk_func_0022D9B0_2 {
    u8 pad_00[8];
    u32 unk_08;
    u32 unk_0C;
    f32 unk_10;
    f32 unk_14;
    u8 pad_18[4];
    f32 unk_1C;
    f32 unk_20;
} unk_func_0022D9B0_2;

extern "C" {
unk_func_0022D9B0_1 *HIE_fn_hGetSuperObjectObject(s32);
s32 *fn_p_stEvalTree(s32, s32 *, unk_func_0022D9B0_0 *);
u8 fn_ucGetProcedureUltraOperator(s32);
void fn_vGetUltraOperatorPerso(u8, s32, s32 *);
f32 func_00115200(f32);
f32 *func_001387B0(unk_func_0022D9B0_2 *);
f32 *func_00138800(unk_func_0022D9B0_2 *);
void func_00139210(unk_func_0022D9B0_2 *, f32);
unk_func_0022D9B0_2 *func_001B84B0(s32);
extern f32 D_0035F3B8;
extern f32 D_0035F3BC;

s32 *func_0022D9B0(s32 arg0, s32 *arg1) {
    unk_func_0022D9B0_0 sp50;
    s32 sp6C;
    unk_func_0022D9B0_2 *temp_s0;
    s32 temp_s1;
    s32 temp_s2;

    temp_s2 = arg1[-2];
    fn_vGetUltraOperatorPerso(fn_ucGetProcedureUltraOperator(temp_s2), arg0, &sp6C);
    arg1 = fn_p_stEvalTree(arg0, arg1, &sp50);
    sp50.unk_18 = sp50.unk_00;
    temp_s1 = HIE_fn_hGetSuperObjectObject(sp6C)->unk_08;
    if (temp_s1 == 0) {
        return arg1;
    }
    temp_s0 = func_001B84B0(temp_s1);
    switch (temp_s2) {
    case 0x128:
        temp_s0->unk_10 = sp50.unk_18;
        break;
    case 0x129:
        temp_s0->unk_1C = sp50.unk_18;
        break;
    case 0x12A:
        temp_s0->unk_20 = sp50.unk_18;
        break;
    case 0x12B:
        temp_s0->unk_14 = func_00115200(0.017453292f * sp50.unk_18);
        break;
    case 0x12C:
        func_00138800(temp_s0)[0] = sp50.unk_18;
        break;
    case 0x12D:
        func_00138800(temp_s0)[1] = sp50.unk_18;
        break;
    case 0x12E:
        func_00138800(temp_s0)[2] = sp50.unk_18;
        break;
    case 0x130:
        func_001387B0(temp_s0)[0] = sp50.unk_18;
        break;
    case 0x131:
        func_001387B0(temp_s0)[1] = sp50.unk_18;
        break;
    case 0x132:
        func_001387B0(temp_s0)[2] = sp50.unk_18;
        break;
    case 0x134:
        func_00138800(temp_s0)[3] = sp50.unk_18;
        break;
    case 0x136:
        func_00138800(temp_s0)[4] = sp50.unk_18;
        break;
    case 0x146:
        func_00138800(temp_s0)[5] = sp50.unk_18;
        break;
    case 0x147:
        func_00138800(temp_s0)[6] = sp50.unk_18;
        break;
    case 0x148:
        func_00138800(temp_s0)[7] = sp50.unk_18;
        break;
    case 0x14A:
        temp_s0->unk_0C = (temp_s0->unk_0C |= 0x400000);
        temp_s0->unk_08 = (temp_s0->unk_08 |= 2);
        temp_s0->unk_08 = (temp_s0->unk_08 |= 0x100);
        temp_s0->unk_08 = (temp_s0->unk_08 |= 0x80);
        temp_s0->unk_1C = 1.0f;
        temp_s0->unk_20 = 0.0f;
        func_00139210(temp_s0, sp50.unk_18);
        break;
    case 0x14C:
        D_0035F3B8 = sp50.unk_18;
        break;
    case 0x14D:
        D_0035F3BC = sp50.unk_18;
        break;
    }
    return arg1;
}
}
