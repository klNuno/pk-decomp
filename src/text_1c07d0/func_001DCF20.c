#include "common.h"

typedef struct unk_func_001DCF20_0 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} unk_func_001DCF20_0;

typedef struct unk_func_001DCF20_1 {
    f32 unk_00;
    u8 pad_04[4];
    s16 unk_08;
} unk_func_001DCF20_1;

typedef struct unk_func_001DCF20_2 {
    u8 pad_00[8];
    unk_func_001DCF20_0 *unk_08;
    u8 pad_0C[4];
    unk_func_001DCF20_1 ***unk_10;
} unk_func_001DCF20_2;

void func_001DCF20(unk_func_001DCF20_0 *arg0, f32 *arg1, unk_func_001DCF20_2 *arg2) {
    unk_func_001DCF20_1 *p = **arg2->unk_10;
    unk_func_001DCF20_0 *v = &arg2->unk_08[p->unk_08];
    arg0->unk_00 = v->unk_00;
    arg0->unk_04 = v->unk_04;
    arg0->unk_08 = v->unk_08;
    *arg1 = p->unk_00;
}
