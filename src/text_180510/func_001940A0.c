#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_001940A0_0;

typedef struct {
    unk_func_001940A0_0 *unk_00;
} unk_func_001940A0_1;

void func_001940A0(unk_func_001940A0_1 *arg0, unk_func_001940A0_0 *arg1, s16 arg2) {
    *arg1 = arg0->unk_00[arg2];
}
