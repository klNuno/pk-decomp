#include "common.h"

typedef struct unk_func_0016D810_2 {
    f32 unk_00;
    f32 unk_04;
} unk_func_0016D810_2;

typedef struct unk_func_0016D810_0 {
    f32 unk_00[3][4];
    f32 unk_30[3][4];
    unk_func_0016D810_2 unk_60[3];
} unk_func_0016D810_0;

typedef struct unk_func_0016D810_3 {
    f32 unk_00[4];
    f32 unk_10[4];
    f32 unk_20;
    f32 unk_24;
} unk_func_0016D810_3;

void func_0016D810(unk_func_0016D810_0 *arg0, unk_func_0016D810_3 *arg1, s32 arg2, f32 arg3) {
    s32 a;
    s32 b;
    s32 i;
    f32 t;
    f32 s;

    if (arg2 == 0) {
        a = 0;
        b = 1;
    } else if (arg2 == 1) {
        a = 1;
        b = 2;
    } else if (arg2 == 2) {
        a = 2;
        b = 0;
    } else {
        a = 0;
        b = 1;
    }
    t = (arg3 - arg0->unk_60[a].unk_00) / (arg0->unk_60[b].unk_00 - arg0->unk_60[a].unk_00);
    s = 1.0f - t;
    for (i = 0; i < 4; i++) {
        arg1->unk_00[i] = s * arg0->unk_00[a][i] + t * arg0->unk_00[b][i];
        arg1->unk_10[i] = s * arg0->unk_30[a][i] + t * arg0->unk_30[b][i];
    }
    arg1->unk_20 = arg3;
    arg1->unk_24 = s * arg0->unk_60[a].unk_04 + t * arg0->unk_60[b].unk_04;
}
