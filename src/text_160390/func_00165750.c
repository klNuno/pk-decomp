#include "common.h"

typedef struct unk_func_00165750_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} unk_func_00165750_0;

typedef struct unk_func_00165750_1 {
    u8 pad_00[0x90];
    unk_func_00165750_0 unk_90;
} unk_func_00165750_1;

void func_00165750(unk_func_00165750_1 *arg0, unk_func_00165750_0 *arg1) {
    unk_func_00165750_0 temp = arg0->unk_90;
    *arg1 = temp;
}
