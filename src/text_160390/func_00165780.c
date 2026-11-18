#include "common.h"

typedef struct unk_func_00165780_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} unk_func_00165780_0;

typedef struct unk_func_00165780_1 {
    u8 pad_00[0x90];
    unk_func_00165780_0 unk_90;
} unk_func_00165780_1;

void func_00165780(unk_func_00165780_1 *arg0, unk_func_00165780_0 *arg1) {
    arg0->unk_90 = *arg1;
}
