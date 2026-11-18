#include "common.h"

typedef struct unk_func_00165610_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} unk_func_00165610_0;

typedef struct unk_func_00165610_1 {
    u8 pad_00[0x110];
    unk_func_00165610_0 unk_110;
} unk_func_00165610_1;

void func_00165610(unk_func_00165610_1 *arg0, unk_func_00165610_0 *arg1) {
    *arg1 = arg0->unk_110;
}
