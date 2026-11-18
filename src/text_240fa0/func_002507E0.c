/* profile: o0_p */
#include "common.h"

typedef struct {
    f32 unk_00, unk_04, unk_08;
} unk_002507E0_0;

typedef struct {
    u8 pad_00[0xC];
    unk_002507E0_0 unk_0C;
} unk_002507E0_1;

typedef struct {
    u8 pad_00[4];
    unk_002507E0_1 *unk_04;
    u8 pad_08[4];
    unk_002507E0_1 *unk_0C;
} unk_002507E0_2;

typedef struct {
    u8 pad_00[0x104];
    s32 unk_104;
    u8 pad_108[0x14];
    unk_002507E0_0 *unk_11C;
    u8 pad_120[0x100];
    unk_002507E0_0 *unk_220;
    u8 pad_224[0x14];
    f32 unk_238;
    u8 pad_23C[4];
    f32 unk_240;
    u8 pad_244[8];
    f32 unk_24C;
    u8 pad_250[0x5C];
    s32 unk_2AC;
} unk_002507E0_3;

extern unk_002507E0_2 *D_003601D8;
extern unk_002507E0_0 D_003370E8[];
f32 func_00151360(f32);
f32 func_001E60E0(f32);
void func_002574D0(unk_002507E0_0 *, s32);
void func_002580D0(unk_002507E0_0 *, f32, const unk_002507E0_0 *);

void func_002507E0(unk_002507E0_0 *arg0, unk_002507E0_3 *arg1, s32 arg2)
{
    unk_002507E0_0 sp58, sp68, sp78;
    f32 sp84, sp88, sp8C;

    sp58.unk_00 = arg1->unk_11C->unk_00 + (arg2 == 0 ? &D_003601D8->unk_04->unk_0C : &D_003601D8->unk_0C->unk_0C)->unk_00;
    sp58.unk_04 = arg1->unk_11C->unk_04 + (arg2 == 0 ? &D_003601D8->unk_04->unk_0C : &D_003601D8->unk_0C->unk_0C)->unk_04;
    sp58.unk_08 = arg1->unk_11C->unk_08 + (arg2 == 0 ? &D_003601D8->unk_04->unk_0C : &D_003601D8->unk_0C->unk_0C)->unk_08;
    sp68.unk_00 = arg1->unk_220->unk_00 - sp58.unk_00;
    sp68.unk_04 = arg1->unk_220->unk_04 - sp58.unk_04;
    sp68.unk_08 = arg1->unk_220->unk_08 - sp58.unk_08;
    sp68.unk_08 = 0.0f;
    sp84 = func_001E60E0((func_00151360(sp68.unk_00) + func_00151360(sp68.unk_04)) + func_00151360(sp68.unk_08));
    if (0.0f == sp84) {
        ((u32 *)arg0)[0] = ((u32 *)arg1->unk_220)[0];
        ((u32 *)arg0)[1] = ((u32 *)arg1->unk_220)[1];
        ((u32 *)arg0)[2] = ((u32 *)arg1->unk_220)[2];
        return;
    }
    sp68.unk_00 *= arg1->unk_24C / sp84;
    sp68.unk_04 *= arg1->unk_24C / sp84;
    sp68.unk_08 *= arg1->unk_24C / sp84;
    func_002574D0(&sp78, arg1->unk_104);
    sp78.unk_08 = 0.0f;
    func_002580D0(&sp78, -1.5707964f, D_003370E8);
    sp88 = func_001E60E0((func_00151360(sp78.unk_00) + func_00151360(sp78.unk_04)) + func_00151360(sp78.unk_08));
    if (0.0f != sp88) {
        sp88 = 1.0f / sp88;
        sp78.unk_00 = sp88 * sp78.unk_00;
        sp78.unk_04 = sp88 * sp78.unk_04;
        sp78.unk_08 = sp88 * sp78.unk_08;
    } else {
        sp78 = sp78;
    }
    if (arg1->unk_2AC != 0) {
        sp8C = arg1->unk_240;
    } else {
        sp8C = arg1->unk_238;
    }
    func_002580D0(&sp68, sp8C, &sp78);
    arg0->unk_00 = sp58.unk_00 + sp68.unk_00;
    arg0->unk_04 = sp58.unk_04 + sp68.unk_04;
    arg0->unk_08 = sp58.unk_08 + sp68.unk_08;
}
