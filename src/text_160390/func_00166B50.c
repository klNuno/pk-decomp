#include "common.h"

typedef struct unk_func_00166B50_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} unk_func_00166B50_0;

typedef struct unk_func_00166B50_1 {
    u8 pad_00[0x14];
    unk_func_00166B50_0 unk_14;
} unk_func_00166B50_1;

void func_00166B50(unk_func_00166B50_1 *arg0, unk_func_00166B50_0 *arg1) {
    unk_func_00166B50_0 temp = arg0->unk_14;
    *arg1 = temp;
}
