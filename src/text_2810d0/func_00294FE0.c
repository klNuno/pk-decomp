#include "common.h"

typedef struct unk_func_00294FE0_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} unk_func_00294FE0_0;

extern unk_func_00294FE0_0 D_007B8420[];

void func_00294FE0(s32 arg0, unk_func_00294FE0_0 *arg1) {
    D_007B8420[arg0].unk_00 = arg1->unk_00;
    D_007B8420[arg0].unk_04 = arg1->unk_04;
    D_007B8420[arg0].unk_08 = arg1->unk_08;
    D_007B8420[arg0].unk_0C = arg1->unk_0C;
}
