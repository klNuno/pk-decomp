/* profile: o0_301_p */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_00219CE0_0;

typedef struct {
    unk_func_00219CE0_0 unk_00;
    s32 unk_0C;
} unk_func_00219CE0_1;

typedef union {
    f32 unk_00;
    s32 unk_00_s32;
} unk_func_00219CE0_2;

typedef struct {
    unk_func_00219CE0_2 unk_00;
    u8 pad_04[8];
    s32 unk_0C;
} unk_func_00219CE0_3;

typedef struct {
    u8 pad_00[0xC];
    s32 unk_0C;
} unk_func_00219CE0_4;

typedef struct {
    u8 pad_00[0x24];
    s32 unk_24;
} unk_func_00219CE0_5;

unk_func_00219CE0_4 *HIE_fn_hGetSuperObjectObject(s32);
s32 fn_p_stBrainGetMind(s32);
s8 *fn_p_stEvalTree(s32, s8 *, unk_func_00219CE0_3 *);
s8 *fn_p_stOperatorGetPerso(s32, s8 *, s32 *);
void fn_vGetUltraOperatorPerso(s32, s32, unk_func_00219CE0_5 **);
f32 func_001156B8(f32);
f32 func_00151360(f32);
unk_func_00219CE0_0 *func_00155EE0(s32);
f32 func_001E60E0(f32);
u8 func_001EA0D0(u8, u8, s32, unk_func_00219CE0_1 *);
void func_001F0CC0(s32, unk_func_00219CE0_0 *);
f32 func_001F0D40(s32);
s32 func_00208CC0(s32);

#define SUB(dest, a, b) { \
    (dest).unk_00 = (a)->unk_00 - (b)->unk_00; \
    (dest).unk_04 = (a)->unk_04 - (b)->unk_04; \
    (dest).unk_08 = (a)->unk_08 - (b)->unk_08; \
}

#define ADD(dest, a, b) { \
    (dest).unk_00 = (a)->unk_00 + (b)->unk_00; \
    (dest).unk_04 = (a)->unk_04 + (b)->unk_04; \
    (dest).unk_08 = (a)->unk_08 + (b)->unk_08; \
}

#define SCALE(dest, scale, a) { \
    (dest).unk_00 = (scale) * (a).unk_00; \
    (dest).unk_04 = (scale) * (a).unk_04; \
    (dest).unk_08 = (scale) * (a).unk_08; \
}

#define CROSS(dest, a, b) { \
    (dest).unk_00 = (a).unk_04 * (b).unk_08 - (a).unk_08 * (b).unk_04; \
    (dest).unk_04 = (a).unk_08 * (b).unk_00 - (a).unk_00 * (b).unk_08; \
    (dest).unk_08 = (a).unk_00 * (b).unk_04 - (a).unk_04 * (b).unk_00; \
}

#define DOT(a, b) ((a)->unk_08 * (b)->unk_08 + \
    ((a)->unk_00 * (b)->unk_00 + (a)->unk_04 * (b)->unk_04))

#define NORMALIZE(a, length) { \
    (length) = func_001E60E0(func_00151360((a).unk_08) + \
        (func_00151360((a).unk_00) + func_00151360((a).unk_04))); \
    if (0.0f != (length)) { \
        (length) = 1.0f / (length); \
        SCALE(a, length, a); \
    } else { \
        (a) = (a); \
    } \
}

#define STORE(arg, a) { \
    ((u32 *)&spB0)[0] = ((u32 *)&(a))[0]; \
    ((u32 *)&spB0)[1] = ((u32 *)&(a))[1]; \
    ((u32 *)&spB0)[2] = ((u32 *)&(a))[2]; \
    spB0.unk_0C = 0x15; \
    temp2 = func_001EA0D0(arg, (u8)0, temp1, &spB0); \
}

#define RETURN(value) { \
    sp1B8 = (value); \
    arg2->unk_00.unk_00 = sp1B8; \
    arg2->unk_0C = 8; \
    return arg1; \
}

s8 *func_00219CE0(s32 arg0, s8 *arg1, unk_func_00219CE0_3 *arg2) {
    unk_func_00219CE0_1 spB0;
    unk_func_00219CE0_0 spC8, spD8, spE8, spF8, sp108, sp118, sp128;
    unk_func_00219CE0_0 sp138, sp148, sp158, sp168, sp178, sp188, sp198, sp1A8;
    s32 sp1B4;
    f32 sp1B8;
    f32 sp1BC, sp1C0, sp1C4, sp1C8, sp1CC, sp1D0, sp1D4, sp1D8, sp1DC, sp1E0;
    unk_func_00219CE0_5 *sp1E4;
    s32 sp1E8, sp1EC;
    f32 sp1F0, sp1F4, sp1F8, sp1FC;
    unk_func_00219CE0_0 *temp0;
    s32 temp1;
    u8 temp2, temp3, temp4;
    s32 temp5, temp6, temp7;
    u8 temp8;

    sp1B4 = ((s32 *)arg1)[-2];
    temp8 = 0;
    fn_vGetUltraOperatorPerso((u32)func_00208CC0(sp1B4), arg0, &sp1E4);
    temp0 = func_00155EE0(sp1E4->unk_24);
    temp2 = 0;
    if (((u8 *)arg1)[7] == 2) {
        arg1 += 8;
        arg1 = fn_p_stOperatorGetPerso(arg0, arg1, &sp1E8);
    } else {
        sp1E8 = arg0;
    }
    temp1 = fn_p_stBrainGetMind(HIE_fn_hGetSuperObjectObject(sp1E8)->unk_0C);
    temp3 = *arg1;
    arg1 += 8;
    if (((u8 *)arg1)[7] == 2) {
        arg1 += 8;
        arg1 = fn_p_stOperatorGetPerso(arg0, arg1, &sp1EC);
    } else {
        sp1EC = arg0;
    }
    temp1 = fn_p_stBrainGetMind(HIE_fn_hGetSuperObjectObject(sp1EC)->unk_0C);
    temp4 = *arg1;
    arg1 += 8;
    arg1 = fn_p_stEvalTree(arg0, arg1, arg2);
    temp5 = arg2->unk_00.unk_00_s32;
    arg1 = fn_p_stEvalTree(arg0, arg1, arg2);
    temp6 = arg2->unk_00.unk_00_s32;
    arg1 = fn_p_stEvalTree(arg0, arg1, arg2);
    temp7 = arg2->unk_00.unk_00_s32;
    if (temp7 == 0 || temp5 == 0 || temp6 == 0) {
        RETURN(-10.0f);
    }
    func_001F0CC0((u32)temp5, &sp138);
    func_001F0CC0((u32)temp6, &sp148);
    func_001F0CC0((u32)temp7, &sp158);
    SUB(spE8, &sp148, &sp138);
    NORMALIZE(spE8, sp1F0);
    SUB(sp108, &sp158, &sp148);
    NORMALIZE(sp108, sp1F4);
    sp1BC = func_001F0D40((u32)temp6);
    sp1C0 = func_001F0D40((u32)temp5);
    sp1C4 = func_001F0D40((u32)temp7);
    SCALE(sp168, sp1BC, spE8);
    SUB(sp168, &sp148, &sp168);
    SCALE(sp178, sp1BC, sp108);
    ADD(sp178, &sp148, &sp178);
    CROSS(sp188, spE8, sp108);
    if (0.0f == sp188.unk_00 && 0.0f == sp188.unk_04 && 0.0f == sp188.unk_08) {
        temp8 = (u8)1;
        sp188.unk_08 = 1.0f;
    }
    NORMALIZE(sp188, sp1F8);
    sp1C8 = -DOT(&sp188, &sp138);
    SUB(spF8, temp0, &sp138);
    sp1CC = DOT(&spF8, &spE8);
    SCALE(spF8, sp1CC, spE8);
    ADD(spF8, &spF8, &sp138);
    SUB(sp118, temp0, &sp148);
    sp1D0 = DOT(&sp118, &sp108);
    sp1D4 = -DOT(&sp118, &spE8);
    SCALE(sp118, sp1D0, sp108);
    ADD(sp118, &sp118, &sp148);
    SUB(sp128, temp0, &sp158);
    sp1D8 = -DOT(&sp128, &sp108);
    if (sp1CC < sp1C0) {
        RETURN(-3.0f);
    }
    if (sp1D8 < sp1C4) {
        RETURN(3.0f);
    }
    if ((!(sp1CC <= sp1C0) && !(sp1D4 <= sp1BC) && !(sp1D0 <= sp1BC)) ||
        (!(sp1D0 <= sp1BC) && !(sp1D8 <= sp1C4) && !(sp1D4 <= sp1BC))) {
        RETURN(4.0f);
    }
    if (!(sp1CC <= sp1C0) && !(sp1D4 <= sp1BC) && sp1D0 < sp1BC) {
        STORE(temp3, spF8);
        STORE(temp4, spE8);
        RETURN(-2.0f);
    }
    if (!(sp1D0 <= sp1BC) && !(sp1D8 <= sp1C4) && sp1D4 < sp1BC) {
        STORE(temp3, sp118);
        STORE(temp4, sp108);
        RETURN(2.0f);
    }
    if (!temp8) {
        CROSS(spF8, sp188, spE8);
        CROSS(sp118, sp188, sp108);
        if (0.0f != spF8.unk_00 - sp118.unk_00) {
            sp1DC = (sp178.unk_00 - sp168.unk_00) / (spF8.unk_00 - sp118.unk_00);
        } else if (0.0f != spF8.unk_04 - sp118.unk_04) {
            sp1DC = (sp178.unk_04 - sp168.unk_04) / (spF8.unk_04 - sp118.unk_04);
        } else if (0.0f != spF8.unk_08 - sp118.unk_08) {
            sp1DC = (sp178.unk_08 - sp168.unk_08) / (spF8.unk_08 - sp118.unk_08);
        } else {
            RETURN(-11.0f);
        }
        SCALE(sp198, sp1DC, spF8);
        ADD(sp198, &sp198, &sp168);
        sp1BC = sp1DC;
        sp1DC = -sp1C8 - DOT(&sp188, temp0);
        SCALE(spD8, sp1DC, sp188);
        ADD(spD8, &spD8, temp0);
        SUB(spC8, &spD8, &sp198);
        NORMALIZE(spC8, sp1FC);
        CROSS(sp1A8, sp188, spC8);
        sp1DC = func_001156B8(DOT(&spF8, &sp118));
        if (0.0f != sp1DC) {
            spF8.unk_00 = -spF8.unk_00;
            spF8.unk_04 = -spF8.unk_04;
            spF8.unk_08 = -spF8.unk_08;
            sp1E0 = DOT(&spC8, &spF8);
            if (!(sp1E0 < 1.0f)) {
                sp1B8 = 0.0f;
            } else {
                sp1B8 = func_001156B8(sp1E0) / sp1DC;
            }
        } else {
            RETURN(-12.0f);
        }
        SCALE(spC8, sp1BC, spC8);
        ADD(spD8, &sp198, &spC8);
        STORE(temp3, spD8);
        STORE(temp4, sp1A8);
        arg2->unk_00.unk_00 = sp1B8;
        arg2->unk_0C = 8;
        return arg1;
    }
    SUB(spF8, temp0, &sp168);
    sp1DC = DOT(&spF8, &spE8);
    if (0.0f != sp1BC) {
        sp1B8 = sp1DC / (2.0f * sp1BC);
        SCALE(spF8, sp1BC, spE8);
        ADD(spF8, &spF8, &sp148);
        STORE(temp3, spF8);
    } else {
        sp1B8 = 0.0f;
        STORE(temp3, sp148);
    }
    STORE(temp4, spE8);
    arg2->unk_00.unk_00 = sp1B8;
    arg2->unk_0C = 8;
    return arg1;
}
