#include "common.h"

typedef struct unk_func_00139210_1 {
    u8 pad_00[0x24];
    s32 unk_24;
} unk_func_00139210_1;

typedef struct unk_func_00139210_0 {
    u8 pad_00[0x10];
    f32 unk_10;
    u8 pad_14[0x94];
    unk_func_00139210_1 *unk_A8;
} unk_func_00139210_0;

typedef struct unk_func_00139210_2 {
    u8 pad_00[0x8];
    f32 unk_08;
} unk_func_00139210_2;

unk_func_00139210_0 *func_001387B0();
unk_func_00139210_2 *func_00155EE0();

void func_00139210(s32 arg0, f32 arg1) {
    s32 temp;

    temp = func_001387B0(arg0)->unk_A8 != NULL;
    if (temp) {
        arg1 -= func_00155EE0(func_001387B0(arg0)->unk_A8->unk_24)->unk_08;
        func_001387B0(arg0)->unk_10 = arg1;
    } else {
        func_001387B0(arg0)->unk_10 = arg1;
    }
}
