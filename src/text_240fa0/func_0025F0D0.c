/* profile: opt */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_0025F0D0_0;

typedef struct {
    u8 pad_00[0x68];
    f32 unk_68;
    u8 pad_6C[8];
    f32 unk_74;
} unk_func_0025F0D0_1;

extern s32 func_001273A8(void);
extern s32 rand(void);
extern unk_func_0025F0D0_1 *func_00266E40(s32, unk_func_0025F0D0_0 *, unk_func_0025F0D0_0 *, s32, f32, f32, f32);
extern s8 D_00360218;
extern f32 D_006332F8[];
extern f32 D_006332FC[];
extern f32 D_00633308[];
extern f32 D_0063330C[];
extern f32 D_00633310[];

static inline f32 func_0025F0D0_00(f32 arg0) {
    return -arg0 + ((arg0 + arg0) * (f32)rand()) / 2147483648.0f;
}

void func_0025F0D0(unk_func_0025F0D0_0 *arg0, unk_func_0025F0D0_0 *arg1, s32 arg2) {
    s32 temp;

    if (D_00360218 == 0) {
        D_00633308[0] = 6.0f;
        D_0063330C[0] = 1.0f;
        D_00633310[0] = 0.2f;
        D_006332F8[0] = 100.0f;
        D_006332FC[0] = 255.0f;
    }
    temp = func_001273A8();
    while (temp--) {
        unk_func_0025F0D0_0 sp60;
        unk_func_0025F0D0_0 sp70;
        f32 temp6;
        f32 temp2;
        f32 temp3;
        unk_func_0025F0D0_1 *temp4;

        sp70.unk_00 = func_0025F0D0_00(D_00633308[0]);
        temp6 = D_00633308[0];
        sp70.unk_04 = func_0025F0D0_00(temp6);
        temp2 = D_0063330C[0];
        sp70.unk_08 = temp2 + ((arg1->unk_08 - temp2) * (f32)rand()) / 2147483648.0f;
        sp60.unk_00 = arg0->unk_00 + func_0025F0D0_00(D_00633310[0]);
        sp60.unk_04 = arg0->unk_04 + func_0025F0D0_00(D_00633310[0]);
        sp60.unk_08 = arg0->unk_08;
        temp3 = arg1->unk_00;
        temp4 = func_00266E40(0x0401C010, &sp60, &sp70, arg2, arg1->unk_04, temp3, temp3);
        if (temp4 != 0) {
            temp4->unk_74 = D_006332FC[0];
            temp4->unk_68 = 255.0f / D_006332F8[0];
        }
    }
}
