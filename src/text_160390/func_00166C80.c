#include "common.h"

typedef struct unk_func_00166C80_1 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} unk_func_00166C80_1;

typedef struct unk_func_00166C80_0 {
    u8 pad_00[0x4];
    unk_func_00166C80_1 unk_04;
} unk_func_00166C80_0;

void func_001765B0(unk_func_00166C80_0 *);

void func_00166C80(unk_func_00166C80_0 *arg0, unk_func_00166C80_1 *arg1) {
    if (arg0->unk_04.unk_00 != arg1->unk_00 || arg0->unk_04.unk_04 != arg1->unk_04 ||
        arg0->unk_04.unk_08 != arg1->unk_08 || arg0->unk_04.unk_0C != arg1->unk_0C) {
        arg0->unk_04 = *arg1;
        func_001765B0(arg0);
    }
}
