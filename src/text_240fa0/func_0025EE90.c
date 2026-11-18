/* profile: opt_300 */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_0025EE90_0;

typedef struct {
    u8 pad_00[0x40];
    f32 unk_40;
    u8 pad_44[0x1C];
    f32 unk_60;
    f32 unk_64;
} unk_func_0025EE90_1;

extern s32 func_001273A8(void);
extern s32 rand(void);
extern unk_func_0025EE90_1 *func_00266E40(s32, unk_func_0025EE90_0 *, unk_func_0025EE90_0 *, s32, f32, f32, f32);
extern s8 D_00360218;
extern f32 D_003602A8;
extern f32 D_003602B0;
extern f32 D_006332F8[];
extern f32 D_006332FC[];
extern f32 D_00633300[];
extern f32 D_00633308[];
extern f32 D_0063330C[];
extern f32 D_00633310[];

static inline f32 func_0025EE90_00(f32 arg0) {
    return -arg0 + ((arg0 + arg0) * (f32)rand()) / 2147483648.0f;
}

void func_0025EE90(unk_func_0025EE90_0 *arg0, unk_func_0025EE90_0 *arg1, s32 arg2) {
    s32 temp;

    if (D_00360218 == 0) {
        D_00633308[0] = 5.0f;
        D_0063330C[0] = 8.0f;
        D_00633310[0] = 0.5f;
        D_003602A8 = 1.0f;
        D_006332F8[0] = 0.5f;
        D_006332FC[0] = 0.5f;
        D_00633300[0] = 0.5f;
    }
    D_003602B0 = D_003602A8;
    temp = func_001273A8();
    while (temp--) {
        unk_func_0025EE90_0 sp60;
        unk_func_0025EE90_0 sp70;
        f32 temp3;
        f32 temp2;
        f32 temp5;
        unk_func_0025EE90_1 *temp4;

        temp5 = D_0063330C[0];
        sp70.unk_00 = arg1->unk_00;
        sp70.unk_04 = arg1->unk_04;
        sp70.unk_08 = arg1->unk_08;
        temp2 = D_00633308[0] + func_0025EE90_00(temp5);
        temp3 = D_006332F8[0];
        sp60.unk_00 = arg0->unk_00 + func_0025EE90_00(D_00633310[0]);
        sp60.unk_04 = arg0->unk_04 + func_0025EE90_00(D_00633310[0]);
        sp60.unk_08 = arg0->unk_08 + func_0025EE90_00(D_00633310[0]);
        temp4 = func_00266E40(0xB718, &sp60, &sp70, arg2, temp2, temp3, temp3);
        if (temp4 != 0) {
            temp4->unk_60 = D_00633300[0];
            temp4->unk_64 = D_00633300[0];
            temp4->unk_40 = D_006332FC[0];
        }
    }
}
