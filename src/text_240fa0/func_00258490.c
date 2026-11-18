#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} unk_func_00258490_0;

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_00258490_1;

extern f32 D_00360298;
extern u32 D_0036029C;
extern s32 D_003602A0;
extern s8 D_006180E0[];
extern unk_func_00258490_0 D_00618180[];

s32 func_00258490(unk_func_00258490_1 *arg0) {
    u32 i;
    u32 temp;
    f32 temp2;
    f32 temp3;
    f32 temp4;
    f32 temp5;
    f32 temp6;

    temp = 0x96;
    temp2 = 1e9f;
    for (i = 0; i < D_0036029C; i++) {
        if (D_006180E0[i] != 0) {
            temp3 = D_00618180[i].unk_00 - arg0->unk_00;
            temp4 = D_00618180[i].unk_04 - arg0->unk_04;
            temp5 = D_00618180[i].unk_08 - arg0->unk_08;
            temp6 = temp3 * temp3 + temp4 * temp4 + temp5 * temp5;
            if (temp6 < temp2) {
                temp2 = temp6;
                temp = i;
            }
        }
    }
    if (temp2 <= D_00360298) {
        D_003602A0--;
        D_006180E0[temp] = 0;
    }
    return D_003602A0;
}
