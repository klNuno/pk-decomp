/* profile: o0_301_p */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_00250EE0_0;

typedef struct {
    u8 pad_00[0x104];
    s32 unk_104;
    u8 pad_108[0x40];
    unk_00250EE0_0 unk_148;
    u8 pad_154[0xC];
    unk_00250EE0_0 unk_160;
    u8 pad_16C[0x48];
    unk_00250EE0_0 unk_1B4;
    u8 pad_1C0[0x3C];
    unk_00250EE0_0 unk_1FC;
    unk_00250EE0_0 unk_208;
    u8 pad_214[0xC];
    unk_00250EE0_0 *unk_220;
    u8 pad_224[4];
    f32 unk_228;
    u8 pad_22C[0xC];
    f32 unk_238;
    u8 pad_23C[4];
    f32 unk_240;
    u8 pad_244[4];
    f32 unk_248;
    f32 unk_24C;
    u8 pad_250[0x5C];
    s32 unk_2AC;
} unk_00250EE0_1;

f32 func_00151360(f32);
f32 func_001E60E0(f32);
f32 func_00257A60(unk_00250EE0_0 *, unk_00250EE0_0 *);
void func_002580D0(unk_00250EE0_0 *, f32, unk_00250EE0_0 *);
void func_00258210(s32, unk_00250EE0_0 *, unk_00250EE0_0 *, s32);

extern unk_00250EE0_0 D_003370E8;
extern f32 D_006053D0[];
extern f32 D_006053D4[];
extern f32 D_006053D8[];

#define UNK_00250EE0_2(unk) \
    func_001E60E0(func_00151360((unk).unk_08) + \
                  (func_00151360((unk).unk_00) + func_00151360((unk).unk_04)))

void func_00250EE0(unk_00250EE0_1 *arg0, s32 arg1, f32 arg2)
{
    f32 unk_4C;
    f32 unk_50;
    f32 unk_54;
    f32 unk_58;
    unk_00250EE0_0 unk_20;
    unk_00250EE0_0 unk_30;
    unk_00250EE0_0 unk_40;

    unk_54 = func_00257A60(&arg0->unk_160, &D_003370E8);
    unk_54 = unk_54 > 0.0f ? unk_54 : -unk_54;
    if (unk_54 < 0.7853981853f || !(unk_54 <= 2.356194496f)) {
        arg0->unk_24C = arg2;
        arg0->unk_240 = arg0->unk_238;
        return;
    }
    arg0->unk_2AC = 1;
    unk_50 = arg0->unk_248;
    unk_58 = (unk_50 - arg2) / unk_50;
    unk_4C = arg0->unk_228 + ((1.0f - arg0->unk_228) * unk_58);
    if (!(unk_4C <= 1.0f)) {
        unk_4C = 1.0f;
    }
    ((s32 *)&unk_20)[0] = ((s32 *)&arg0->unk_208)[0];
    ((s32 *)&unk_20)[1] = ((s32 *)&arg0->unk_208)[1];
    ((s32 *)&unk_20)[2] = ((s32 *)&arg0->unk_208)[2];
    unk_20.unk_08 = 0.0f;
    unk_20.unk_00 *= unk_50 / UNK_00250EE0_2(unk_20);
    unk_20.unk_04 *= unk_50 / UNK_00250EE0_2(unk_20);
    unk_20.unk_08 *= unk_50 / UNK_00250EE0_2(unk_20);
    ((s32 *)&unk_30)[0] = ((s32 *)&arg0->unk_148)[0];
    ((s32 *)&unk_30)[1] = ((s32 *)&arg0->unk_148)[1];
    ((s32 *)&unk_30)[2] = ((s32 *)&arg0->unk_148)[2];
    func_002580D0(&unk_30, -1.570796371f, &D_003370E8);
    func_002580D0(&unk_20, unk_4C, &unk_30);
    func_00258210(arg0->unk_104, &arg0->unk_1FC, &unk_20, 0);
    arg0->unk_240 = unk_4C;
    if (0.0f == *D_006053D0 && 0.0f == *D_006053D4 && 0.0f == *D_006053D8) {
        arg0->unk_24C = unk_50;
        return;
    }
    unk_40.unk_00 = *D_006053D0 - arg0->unk_1FC.unk_00;
    unk_40.unk_04 = *D_006053D4 - arg0->unk_1FC.unk_04;
    unk_40.unk_08 = *D_006053D8 - arg0->unk_1FC.unk_08;
    arg0->unk_24C = UNK_00250EE0_2(unk_40) - 0.6f;
    if (!(arg0->unk_24C <= arg2)) {
        arg0->unk_24C = arg2;
    }
    if (arg0->unk_24C < 3.0f) {
        arg0->unk_24C = 3.0f;
    }
    unk_40.unk_00 = arg0->unk_220->unk_00 - arg0->unk_1B4.unk_00;
    unk_40.unk_04 = arg0->unk_220->unk_04 - arg0->unk_1B4.unk_04;
    unk_40.unk_08 = arg0->unk_220->unk_08 - arg0->unk_1B4.unk_08;
}
