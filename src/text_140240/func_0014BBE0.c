#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_0014BBE0_0;

s32 func_0014BBE0(void *arg0, unk_func_0014BBE0_0 *arg1) {
    unk_func_0014BBE0_0 temp;
    f32 d;

    temp.unk_00 = 0.0f;
    temp.unk_04 = 0.0f;
    temp.unk_08 = 1.0f;
    d = arg1->unk_00 * temp.unk_00 + arg1->unk_04 * temp.unk_04 + arg1->unk_08 * temp.unk_08;
    return d >= *(f32 *)((u8 *)arg0 + 0x18);
}
