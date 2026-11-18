#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_0014BB90_0;

typedef struct {
    u8 pad_00[0x18];
    f32 unk_18;
} unk_func_0014BB90_1;

typedef struct {
    u8 pad_00[4];
    unk_func_0014BB90_0 unk_04;
} unk_func_0014BB90_2;

static inline f32 func_0014BB90_inl(unk_func_0014BB90_0 *a, unk_func_0014BB90_0 *b) {
    return a->unk_00 * b->unk_00 + a->unk_04 * b->unk_04 + a->unk_08 * b->unk_08;
}

s32 func_0014BB90(unk_func_0014BB90_1 *arg0, unk_func_0014BB90_2 *arg1) {
    unk_func_0014BB90_0 temp;

    temp.unk_00 = 0.0f;
    temp.unk_04 = 0.0f;
    temp.unk_08 = 1.0f;
    return func_0014BB90_inl(&arg1->unk_04, &temp) < -arg0->unk_18;
}
