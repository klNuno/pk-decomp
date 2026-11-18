/* profile: o0_301_p */
#include "common.h"

typedef struct {
    f32 unk_00, unk_04, unk_08;
} unk_func_0020B3D0_0;

typedef union {
    unk_func_0020B3D0_0 unk_00;
    u32 unk_01[3];
} unk_func_0020B3D0_2;

typedef struct {
    unk_func_0020B3D0_2 unk_00;
    s32 unk_0C;
} unk_func_0020B3D0_1;

s32 *fn_p_stEvalTree(s32, s32 *, unk_func_0020B3D0_1 *);
f32 func_00151360(f32);
f32 func_001E60E0(f32);
void func_001EDBB0(s32, s32);

#define UNK_0020B3D0_0(unk) \
    func_001E60E0(func_00151360((unk)->unk_08) + \
                  (func_00151360((unk)->unk_00) + func_00151360((unk)->unk_04)))

#define UNK_0020B3D0_1(unk0, unk1, unk2) \
    { \
        (unk0).unk_00 = (unk1).unk_00 - (unk2).unk_00; \
        (unk0).unk_04 = (unk1).unk_04 - (unk2).unk_04; \
        (unk0).unk_08 = (unk1).unk_08 - (unk2).unk_08; \
    }

#define UNK_0020B3D0_2(unk0, unk1, unk2) \
    { \
        (unk0).unk_00 = (unk1) * (unk2).unk_00; \
        (unk0).unk_04 = (unk1) * (unk2).unk_04; \
        (unk0).unk_08 = (unk1) * (unk2).unk_08; \
    }

#define UNK_0020B3D0_3(unk0, unk1) \
    { \
        (unk0).unk_00 = -(unk1).unk_00; \
        (unk0).unk_04 = -(unk1).unk_04; \
        (unk0).unk_08 = -(unk1).unk_08; \
    }

#define UNK_0020B3D0_4(unk0, unk1) \
    { \
        (unk0) = UNK_0020B3D0_0(unk1); \
        if (0.0f != (unk0)) { \
            (unk0) = 1.0f / (unk0); \
            UNK_0020B3D0_2(*(unk1), (unk0), *(unk1)); \
        } else { \
            *(unk1) = *(unk1); \
        } \
    }

#define UNK_0020B3D0_5(unk0, unk1) \
    ((unk0).unk_08 * (unk1).unk_08 + \
     ((unk0).unk_00 * (unk1).unk_00 + (unk0).unk_04 * (unk1).unk_04))

#define UNK_0020B3D0_6(unk0, unk1) \
    { \
        if ((unk1) > 0.0f) { \
            (unk0) = (unk1); \
        } else { \
            (unk0) = -(unk1); \
        } \
    }

s32 *func_0020B3D0(s32 arg0, s32 *arg1, unk_func_0020B3D0_1 *arg2) {
    unk_func_0020B3D0_1 unk_60, unk_70, unk_80;
    unk_func_0020B3D0_0 unk_98;
    unk_func_0020B3D0_2 unk_A8;
    unk_func_0020B3D0_0 unk_B8, unk_C8;
    f32 unk_D4, unk_D8, unk_DC, unk_E0, unk_E4;
    f32 unk_E8, unk_EC, unk_F0, unk_F4, unk_F8, unk_FC;
    unk_func_0020B3D0_0 *unk_0, *unk_1, *unk_2;
    s32 temp = arg1[-2];

    arg1 = fn_p_stEvalTree(arg0, arg1, &unk_60);
    unk_0 = &unk_60.unk_00.unk_00;
    arg1 = fn_p_stEvalTree(arg0, arg1, &unk_70);
    unk_1 = &unk_70.unk_00.unk_00;
    arg1 = fn_p_stEvalTree(arg0, arg1, &unk_80);
    unk_2 = &unk_80.unk_00.unk_00;

    switch (temp) {
    case 0xF1:
        unk_C8 = *unk_2;
        UNK_0020B3D0_1(unk_B8, *unk_0, *unk_1);
        UNK_0020B3D0_1(*unk_2, *unk_2, *unk_1);
        UNK_0020B3D0_6(unk_E8, unk_2->unk_00);
        if (unk_E8 < 0.0001f) {
            UNK_0020B3D0_6(unk_EC, unk_2->unk_04);
            if (unk_EC < 0.0001f) {
                UNK_0020B3D0_6(unk_F0, unk_2->unk_08);
                if (unk_F0 < 0.0001f) {
                    UNK_0020B3D0_3(unk_A8.unk_00, unk_B8);
                    break;
                }
            }
        }
        unk_D4 = UNK_0020B3D0_0(unk_2);
        UNK_0020B3D0_4(unk_DC, unk_2);
        unk_D8 = UNK_0020B3D0_5(unk_B8, *unk_2);
        if (unk_D8 < 0.0f) {
            UNK_0020B3D0_3(unk_A8.unk_00, unk_B8);
        } else {
            UNK_0020B3D0_2(unk_98, unk_D8, *unk_2);
            if (unk_D8 > unk_D4) {
                UNK_0020B3D0_1(unk_A8.unk_00, unk_C8, *unk_0);
            } else {
                UNK_0020B3D0_1(unk_A8.unk_00, unk_98, unk_B8);
            }
        }
        break;
    case 0xF0:
        UNK_0020B3D0_1(unk_B8, *unk_0, *unk_1);
        UNK_0020B3D0_6(unk_F4, unk_2->unk_00);
        if (unk_F4 < 0.0001f) {
            UNK_0020B3D0_6(unk_F8, unk_2->unk_04);
            if (unk_F8 < 0.0001f) {
                UNK_0020B3D0_6(unk_FC, unk_2->unk_08);
                if (unk_FC < 0.0001f) {
                    unk_A8.unk_00.unk_08 = unk_A8.unk_00.unk_04 = unk_A8.unk_00.unk_00 = 0.0f;
                    break;
                }
            }
        }
        UNK_0020B3D0_4(unk_E4, unk_2);
        unk_E0 = UNK_0020B3D0_5(unk_B8, *unk_2);
        UNK_0020B3D0_2(unk_98, unk_E0, *unk_2);
        UNK_0020B3D0_1(unk_A8.unk_00, unk_98, unk_B8);
        break;
    default:
        func_001EDBB0(0x27, 0);
        return arg1;
    }
    arg2->unk_00.unk_01[0] = ((u32 (*)[3])&unk_A8)[0][0];
    arg2->unk_00.unk_01[1] = ((u32 (*)[3])&unk_A8)[0][1];
    arg2->unk_00.unk_01[2] = ((u32 (*)[3])&unk_A8)[0][2];
    arg2->unk_0C = 0x15;
    return arg1;
}
