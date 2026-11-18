/* profile: o0_301_p */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_00245CE0_0;

typedef struct {
    union {
        f32 unk_00;
        s32 unk_00_s32;
    } unk_00;
    u8 pad_04[8];
    s32 unk_0C;
} unk_00245CE0_1;

typedef struct {
    unk_00245CE0_0 unk_00;
    u8 pad_0C[0x28];
} unk_00245CE0_2;

typedef struct {
    u8 pad_00[0x1C];
    u8 unk_1C;
    u8 pad_1D[3];
    f32 unk_20;
    u8 pad_24[0x10];
    unk_00245CE0_2 unk_34[100];
    u8 pad_1484[0x24];
    u32 unk_14A8;
} unk_00245CE0_3;

extern void *fn_p_stEvalTree(s32, void *, unk_00245CE0_1 *);
extern void fn_vGetUltraOperatorPerso(s32, s32, s32 *);
extern f32 func_00151360(f32);
extern f32 func_001E60E0(f32);
extern s32 func_00208CC0(s32);
extern unk_00245CE0_3 *func_00246280(s32);
extern void func_00246630(unk_00245CE0_3 *, u8, s32);
extern void func_002471B0(unk_00245CE0_3 *, u8, u8);

void *func_00245CE0(s32 arg0, void *arg1, s32 *arg2)
{
    f32 unk_80;
    f32 unk_84;
    s32 unk_88;
    unk_00245CE0_0 unk_60;
    unk_00245CE0_0 unk_70;
    unk_00245CE0_1 unk_50;
    unk_00245CE0_3 *temp;
    u8 unk_1C;

    s32 unk_08;

    unk_08 = *((s32 *)arg1 - 2);
    fn_vGetUltraOperatorPerso(func_00208CC0(unk_08), arg0, &unk_88);
    unk_60.unk_08 = unk_60.unk_04 = unk_60.unk_00 = 0.0f;
    temp = func_00246280(arg0);
    if (temp != NULL) {
        arg1 = fn_p_stEvalTree(arg0, arg1, &unk_50);
        unk_80 = unk_50.unk_0C == 8 ? unk_50.unk_00.unk_00 : (f32)unk_50.unk_00.unk_00_s32;
        if (unk_80 <= 0.0f) {
            unk_80 = temp->unk_20;
        }
        if ((unk_1C = temp->unk_1C) > 1) {
            unk_60.unk_00 = temp->unk_34[unk_1C - 2].unk_00.unk_00 - temp->unk_34[unk_1C - 1].unk_00.unk_00;
            unk_60.unk_04 = temp->unk_34[unk_1C - 2].unk_00.unk_04 - temp->unk_34[unk_1C - 1].unk_00.unk_04;
            unk_60.unk_08 = temp->unk_34[unk_1C - 2].unk_00.unk_08 - temp->unk_34[unk_1C - 1].unk_00.unk_08;
            unk_84 = func_001E60E0(func_00151360(unk_60.unk_08) + (func_00151360(unk_60.unk_00) + func_00151360(unk_60.unk_04)));
            if (temp->unk_14A8 != 0) {
                unk_80 = (unk_80 * (f32)temp->unk_14A8) / 1000.0f;
            } else {
                unk_80 = 1.0f;
            }
            if (!(unk_84 <= 0.0f)) {
                if (unk_1C == 2) {
                    unk_70.unk_00 = temp->unk_34[0].unk_00.unk_00 - temp->unk_34[1].unk_00.unk_00;
                    unk_70.unk_04 = temp->unk_34[0].unk_00.unk_04 - temp->unk_34[1].unk_00.unk_04;
                    unk_70.unk_08 = temp->unk_34[0].unk_00.unk_08 - temp->unk_34[1].unk_00.unk_08;
                    unk_84 = func_001E60E0(func_00151360(unk_70.unk_08) + (func_00151360(unk_70.unk_00) + func_00151360(unk_70.unk_04)));
                    if (unk_84 < 5.0f) {
                        unk_84 *= 3.5f - (unk_84 / 2.0f);
                    }
                }
                unk_60.unk_00 *= unk_80 / unk_84;
                unk_60.unk_04 *= unk_80 / unk_84;
                unk_60.unk_08 *= unk_80 / unk_84;
            } else {
                if (unk_1C > 2) {
                    func_002471B0(temp, unk_1C - 2, unk_1C - 2);
                }
                unk_1C--;
                unk_60.unk_08 = unk_60.unk_04 = unk_60.unk_00 = 0.0f;
            }
        } else {
            func_00246630(temp, 2, 1);
        }
    }
    arg2[0] = ((s32 *)&unk_60)[0];
    arg2[1] = ((s32 *)&unk_60)[1];
    arg2[2] = ((s32 *)&unk_60)[2];
    arg2[3] = 0x15;
    return arg1;
}
