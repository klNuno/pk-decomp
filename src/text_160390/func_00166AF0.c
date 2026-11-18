#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} unk_func_00166AF0_1;

typedef struct {
    u8 pad_00[0x24];
    unk_func_00166AF0_1 unk_24;
    u8 pad_34[0x14];
    s32 unk_48;
} unk_func_00166AF0_0;

void func_001765B0(unk_func_00166AF0_0 *);

void func_00166AF0(unk_func_00166AF0_0 *arg0, s32 arg1, unk_func_00166AF0_1 *arg2) {
    func_001765B0(arg0);
    arg0->unk_24 = *arg2;
    arg0->unk_48 = arg1;
}
