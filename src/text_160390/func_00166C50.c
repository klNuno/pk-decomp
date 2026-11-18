#include "common.h"

typedef struct unk_func_00166C50_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} unk_func_00166C50_0;

typedef struct unk_func_00166C50_1 {
    u8 pad_00[0x4];
    unk_func_00166C50_0 unk_04;
} unk_func_00166C50_1;

void func_00166C50(unk_func_00166C50_1 *arg0, unk_func_00166C50_0 *arg1) {
    *arg1 = arg0->unk_04;
}
