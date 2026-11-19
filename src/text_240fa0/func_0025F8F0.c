#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_0025F8F0_0;

typedef struct {
    u8 pad_00[0x40];
    f32 unk_40;
} unk_0025F8F0_1;

extern s8 D_00360218;
extern f32 D_006332F8[];
extern f32 D_006332FC[];
extern f32 D_00633300[];
extern f32 D_00633308[];
extern f32 D_0063330C[];
extern f32 D_00633310[];

s32 rand(void);
s32 func_001273A8(f32);
f32 func_001E60E0(f32);
f32 func_001E0D40(unk_0025F8F0_0 *, unk_0025F8F0_0 *, unk_0025F8F0_0 *, f32 *, unk_0025F8F0_0 *);
unk_0025F8F0_1 *func_00266E40(u32, unk_0025F8F0_0 *, unk_0025F8F0_0 *, s32, f32, f32, f32);

static inline f32 func_0025F8F0_0(f32 arg0)
{
    return -arg0 + ((arg0 + arg0) * (f32)rand()) / 2147483648.0f;
}

void func_0025F8F0(unk_0025F8F0_0 *arg0, unk_0025F8F0_0 *arg1, s32 arg2, f32 arg3)
{
    unk_0025F8F0_0 unk_60;
    unk_0025F8F0_0 unk_70;
    unk_0025F8F0_0 unk_80;
    f32 unk_8C;
    s32 temp;

    if (!D_00360218) {
        *(u32 *)D_006332F8 = 0;
        *(u32 *)D_00633308 = 0x40A00000;
        *(u32 *)D_006332FC = 0x40A00000;
        *(u32 *)D_0063330C = 0x3E19999A;
        *(u32 *)D_00633310 = 0x3F400000;
        *(u32 *)D_00633300 = 0x3F800000;
    }
    temp = func_001273A8(arg3);
    while (temp--) {
        f32 unk_00;
        f32 unk_04;
        f32 unk_08;
        f32 unk_10;
        unk_0025F8F0_1 *unk_0C;

        unk_70.unk_00 = arg1->unk_00;
        unk_70.unk_04 = arg1->unk_04;
        unk_70.unk_08 = arg1->unk_08;
        unk_04 = D_00633308[0] + func_0025F8F0_0(D_006332F8[0]);
        unk_00 = D_0063330C[0];
        do {
            f32 unk_14;
            f32 unk_18;
            f32 unk_10;
            unk_0025F8F0_0 *unk_1C;

            unk_60.unk_00 = arg0->unk_00 + func_0025F8F0_0(D_00633310[0]);
            unk_60.unk_04 = arg0->unk_04 + func_0025F8F0_0(D_00633310[0]);
            unk_60.unk_08 = arg0->unk_08 + func_0025F8F0_0(D_00633310[0]);

            unk_1C = (unk_0025F8F0_0 *)(u8 *)&unk_60;
            unk_14 = unk_1C->unk_04 - arg0->unk_04;
            unk_10 = unk_1C->unk_00 - arg0->unk_00;
            unk_18 = unk_1C->unk_08 - arg0->unk_08;
            unk_08 = func_001E60E0(unk_10 * unk_10 + unk_14 * unk_14 + unk_18 * unk_18);
        } while (!(unk_08 <= D_00633310[0]));
        unk_08 = func_001E0D40(&unk_60, arg0, arg1, &unk_8C, &unk_80);
        unk_10 = *(const volatile f32 *)D_00633310;
        unk_04 *= 1.0f / (1.0f + D_006332FC[0] * ((unk_08 * unk_08) / (unk_10 * unk_10)));
        unk_0C = func_00266E40(0xB018, &unk_60, &unk_70, arg2, unk_04, unk_00, unk_00);
        if (unk_0C) {
            unk_0C->unk_40 = D_00633300[0];
        }
    }
}
