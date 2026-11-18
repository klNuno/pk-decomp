#include "common.h"

typedef struct unk_func_00289E20_0 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
} unk_func_00289E20_0;

typedef struct unk_func_00289E20_1 {
    unk_func_00289E20_0 unk_00[4];
    s32 unk_40;
} unk_func_00289E20_1;

extern unk_func_00289E20_1 D_007B82BC;

void func_00289E20(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    D_007B82BC.unk_00[D_007B82BC.unk_40].unk_00 = arg0;
    D_007B82BC.unk_00[D_007B82BC.unk_40].unk_04 = arg1;
    D_007B82BC.unk_00[D_007B82BC.unk_40].unk_08 = arg2;
    D_007B82BC.unk_00[D_007B82BC.unk_40].unk_0C = arg3;
}
