/* profile: opt_300 */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_0025EBC0_0;

typedef struct {
    u8 pad_00[0x40];
    f32 unk_40;
    f32 unk_44;
    u8 pad_48[0x8];
    s32 unk_50;
    u8 pad_54[0xC];
    f32 unk_60;
    u8 pad_64[0x4];
    f32 unk_68;
    u8 pad_6C[0x8];
    f32 unk_74;
} unk_func_0025EBC0_1;

extern s32 func_001273A8(void);
extern s32 rand(void);
extern unk_func_0025EBC0_1 *func_00266E40(s32, unk_func_0025EBC0_0 *, unk_func_0025EBC0_0 *, s32, f32, f32, f32);
extern s8 D_00360218;
extern s32 D_00360220;
extern f32 D_003602A8;
extern f32 D_006332F8[];
extern f32 D_006332FC[];
extern f32 D_00633300[];
extern f32 D_00633308[];
extern f32 D_0063330C[];
extern f32 D_00633310[];

static inline f32 func_0025EBC0_01(f32 range) {
    return (range * (f32)rand()) / 2147483648.0f;
}

static inline f32 func_0025EBC0_00(f32 lo, f32 hi) {
    return lo + ((hi - lo) * (f32)rand()) / 2147483648.0f;
}

void func_0025EBC0(unk_func_0025EBC0_0 *arg0, unk_func_0025EBC0_0 *arg1, s32 arg2) {
    s32 temp;

    if (D_00360218 == 0) {
        D_00633308[0] = 1.0f;
        D_00360220 = arg2;
        D_006332F8[0] = 2.0f;
        D_006332FC[0] = 255.0f;
        D_00633300[0] = 0.5f;
        D_003602A8 = 0.0f;
        D_0063330C[0] = 1.0f;
        D_00633310[0] = 1.0f;
    }
    temp = func_001273A8();
    while (temp--) {
        unk_func_0025EBC0_0 sp50;
        unk_func_0025EBC0_0 sp60;
        unk_func_0025EBC0_1 *temp4;
        f32 temp2;

        {
            f32 *d = (f32 *)&sp50;
            f32 *s = (f32 *)arg0;
            d[0] = s[0];
            d[1] = s[1];
            d[2] = s[2];
        }
        temp2 = D_0063330C[0] * func_0025EBC0_00(-0.2f, 0.2f);
        sp50.unk_08 += temp2;
        sp60.unk_00 = D_00633310[0] * func_0025EBC0_01(0.3f);
        sp60.unk_04 = D_00633308[0] * func_0025EBC0_00(16.0f, 20.0f);
        sp60.unk_08 = arg1->unk_04 * func_0025EBC0_00(0.4f, 0.6f);
        temp4 = func_00266E40(0xC014, &sp50, &sp60, arg2, 0.5f, arg1->unk_00 * func_0025EBC0_00(0.4f, 0.6f), arg1->unk_08);
        if (temp4 != 0) {
            temp4->unk_60 = D_00633300[0];
            temp4->unk_74 = D_006332FC[0];
            temp4->unk_68 = 255.0f / D_006332F8[0];
            temp4->unk_50 = D_00360220;
            temp4->unk_40 = sp60.unk_00;
            temp2 = 40.0f + D_003602A8;
            temp4->unk_44 = temp2;
            if (temp2 < 0.0f) {
                temp4->unk_44 = 0.0f;
            }
        }
    }
}
