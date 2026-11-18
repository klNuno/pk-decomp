/* profile: o0_301_p */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_00213010_0;

typedef struct {
    unk_00213010_0 unk_00;
    s32 unk_0C;
} unk_00213010_1;

typedef struct {
    f32 unk_00[24];
} unk_00213010_2;

typedef struct {
    u8 pad_00[8];
    s32 unk_08;
} unk_00213010_3;

unk_00213010_3 *HIE_fn_hGetSuperObjectObject(s32);
s32 *fn_p_stEvalTree(s32, s32 *, unk_00213010_1 *);
void fn_vGetUltraOperatorPerso(s32, s32, s32 *);
f32 func_00114D70(f32);
f32 func_00115110(f32);
f32 func_001156B8(f32);
void func_0012D550(s32);
void func_0012D940(s32);
void func_00139A90(s32, s32);
void func_0014F6B0(s32, unk_00213010_0 *, unk_00213010_0 *, unk_00213010_0 *);
void func_00150C20(unk_00213010_2 *, s32);
f32 func_00151360(f32);
void func_001553C0(unk_00213010_0 *, s32, unk_00213010_0 *);
void func_00155810(unk_00213010_0 *, unk_00213010_2 *, unk_00213010_0 *);
void func_00155EC0(s32, unk_00213010_0 *);
s32 func_001971C0(s32);
s32 func_001979C0(s32);
void func_0019A230(s32);
s32 func_001B84B0(s32);
s32 func_001BFB20(s32);
f32 func_001E60E0(f32);
void func_001EDBB0(s32, void *);
s32 func_00208CC0(s32);

s32 *func_00213010(s32 arg0, s32 *arg1, unk_00213010_1 *arg2)
{
    s32 temp0;
    s32 temp1;
    s32 temp2;
    s32 temp3;
    unk_00213010_1 unk_60;
    unk_00213010_2 unk_70;
    unk_00213010_0 unk_D8;
    unk_00213010_0 unk_E8;
    unk_00213010_0 unk_F8;
    unk_00213010_0 unk_108;
    unk_00213010_0 unk_118;
    unk_00213010_0 unk_128;
    unk_00213010_0 unk_138;
    s32 unk_144;
    f32 unk_148;
    f32 unk_14C;
    f32 unk_150;
    f32 unk_154;
    f32 unk_158;
    f32 unk_15C;

    temp2 = arg1[-2];
    fn_vGetUltraOperatorPerso(func_00208CC0(temp2), arg0, &unk_144);
    if (temp2 != 0xD9) {
        func_001EDBB0(0x28, NULL);
        return arg1;
    }

    temp0 = func_001979C0(unk_144);
    func_00150C20(&unk_70, temp0);
    temp1 = HIE_fn_hGetSuperObjectObject(unk_144)->unk_08;
    arg1 = fn_p_stEvalTree(arg0, arg1, &unk_60);
    unk_D8 = unk_60.unk_00;
    arg1 = fn_p_stEvalTree(arg0, arg1, &unk_60);
    unk_154 = 0.017453292f * unk_60.unk_00.unk_00;

    unk_108.unk_00 = 0.0f;
    unk_108.unk_04 = -1.0f;
    unk_108.unk_08 = 0.0f;
    unk_138.unk_04 = unk_138.unk_00 = 0.0f;
    unk_138.unk_08 = 1.0f;
    func_00155EC0(temp0, &unk_F8);
    unk_E8.unk_00 = unk_D8.unk_00 - unk_F8.unk_00;
    unk_E8.unk_04 = unk_D8.unk_04 - unk_F8.unk_04;
    unk_E8.unk_08 = unk_D8.unk_08 - unk_F8.unk_08;
    func_00155810(&unk_E8, &unk_70, &unk_E8);
    unk_E8.unk_08 = 0.0f;

    unk_15C = func_001E60E0(func_00151360(unk_E8.unk_08) + (func_00151360(unk_E8.unk_00) + func_00151360(unk_E8.unk_04)));
    if (0.0f != unk_15C) {
        unk_15C = 1.0f / unk_15C;
        unk_E8.unk_00 = unk_15C * unk_E8.unk_00;
        unk_E8.unk_04 = unk_15C * unk_E8.unk_04;
        unk_E8.unk_08 = unk_15C * unk_E8.unk_08;
    } else {
        unk_E8 = unk_E8;
    }

    unk_14C = unk_108.unk_08 * unk_E8.unk_08 +
              (unk_108.unk_00 * unk_E8.unk_00 + unk_108.unk_04 * unk_E8.unk_04);
    if (unk_14C > 1.0f) {
        unk_14C = 1.0f;
    } else if (unk_14C < -1.0f) {
        unk_14C = -1.0f;
    }
    unk_148 = func_001156B8(unk_14C);
    unk_158 = unk_108.unk_00 * unk_E8.unk_04 - unk_108.unk_04 * unk_E8.unk_00;
    if (unk_158 < 0.0f) {
        unk_148 = -unk_148;
    }
    if (unk_148 > unk_154) {
        unk_148 = unk_154;
        unk_14C = func_00114D70(unk_148);
    } else if (unk_148 < -unk_154) {
        unk_148 = -unk_154;
        unk_14C = func_00114D70(unk_148);
    }

    unk_150 = func_00115110(unk_148);
    unk_118.unk_00 = unk_14C;
    unk_118.unk_04 = unk_150;
    unk_118.unk_08 = 0.0f;
    unk_128.unk_00 = -unk_150;
    unk_128.unk_04 = unk_14C;
    unk_128.unk_08 = 0.0f;
    func_001553C0(&unk_118, temp0, &unk_118);
    func_001553C0(&unk_128, temp0, &unk_128);
    func_001553C0(&unk_138, temp0, &unk_138);
    func_0014F6B0(temp0, &unk_118, &unk_128, &unk_138);
    func_0019A230(unk_144);
    func_0012D940(unk_144);
    if (func_001971C0(unk_144) != 2 || ((temp3 = func_001BFB20(unk_144)) & 2 && (!temp1 || (temp3 & 0x8000)))) {
        func_0012D550(unk_144);
    }
    if (temp1) {
        func_00139A90(func_001B84B0(temp1), temp0);
    }
    arg2->unk_00.unk_00 = 57.29578f * unk_148;
    arg2->unk_0C = 8;
    return arg1;
}
