/* profile: opt */
#include "common.h"

typedef struct unk_func_0025FBB0_0 {
    f32 unk_00, unk_04, unk_08;
} unk_func_0025FBB0_0;

typedef struct unk_func_0025FBB0_1 {
    u8 pad_00[0x60];
    f32 unk_60, unk_64;
    u8 pad_68[0xC];
    f32 unk_74;
} unk_func_0025FBB0_1;

s32 rand(void);
s32 func_001273A8(f32);
unk_func_0025FBB0_1 *func_00266E40(s32, unk_func_0025FBB0_0 *, unk_func_0025FBB0_0 *, s32, f32, f32, f32);
extern s8 D_00360218;
extern s32 D_00360220;
extern f32 D_003602A8, D_003602AC, D_003602B0;
extern f32 D_006332F8[], D_006332FC[], D_00633300[];
extern f32 D_00633308[], D_0063330C[], D_00633310[];

void func_0025FBB0(unk_func_0025FBB0_0 *arg0, unk_func_0025FBB0_0 *arg1, s32 arg2, f32 arg3) {
    s32 count;
    unk_func_0025FBB0_0 sp80;
    unk_func_0025FBB0_0 sp90;
    f32 temp, value, temp2, temp3;
    unk_func_0025FBB0_1 *result;

    if (D_00360218 == 0) {
        D_00360220 = 0;
        D_00633308[0] = 0.3f;
        D_0063330C[0] = 0.15f;
        D_00633310[0] = 50.0f;
        D_006332F8[0] = 0.5f;
        D_00633300[0] = 0.5f;
        D_006332FC[0] = 0.2f;
        D_003602A8 = 3.0f;
    }
    count = func_001273A8(arg3);
    while (count--) {
        {
            f32 *dst = (f32 *)&sp80;
            f32 *src = (f32 *)arg0;
            s32 i;
            for (i = 0; i < 3; i++) {
                dst[i] = src[i];
            }
        }
        temp = arg1->unk_04;
        sp80.unk_00 += -temp + (temp + temp) * (f32)rand() / 2147483648.0f;
        temp = arg1->unk_04;
        {
            f32 temp5, temp6;
            temp5 = temp + temp;
            temp6 = (f32)rand();
            sp90.unk_00 = 0.0f;
            sp80.unk_04 += -temp + temp5 * temp6 / 2147483648.0f;
        }
        sp90.unk_04 = 0.0f;
        sp90.unk_08 = arg1->unk_08 * (f32)rand() / 2147483648.0f;
        temp = D_0063330C[0];
        value = D_00633308[0] + (-temp + (temp + temp) * (f32)rand() / 2147483648.0f);
        temp2 = D_00633310[0];
        D_003602AC = 60.0f * (-temp2 + temp2 * (f32)rand() / 2147483648.0f);
        temp3 = D_006332FC[0];
        D_003602B0 = D_006332F8[0] + (-temp3 + (temp3 + temp3) * (f32)rand() / 2147483648.0f);
        func_00266E40(0x04100001, &sp80, &sp90, arg2, arg1->unk_00, value, value);
        if (D_00360220 != 0) {
            D_003602AC = 0.0f;
            D_003602B0 = 1.0f;
            sp90.unk_00 = 0.0f;
            sp90.unk_04 = 0.0f;
            sp90.unk_08 = 0.0f;
            value *= D_00633300[0];
            result = func_00266E40(0x100705, &sp80, &sp90, D_00360220, arg1->unk_00, value, value);
            if (result != NULL) {
                result->unk_60 = result->unk_64 = value * D_003602A8;
                result->unk_74 = 128.0f;
            }
        }
    }
}
