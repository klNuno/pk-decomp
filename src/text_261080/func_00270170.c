#include "common.h"

typedef struct unk_func_00270170_0 {
    u32 unk_00;
    u8 pad_04[8];
    s32 unk_0C;
    u8 pad_10[0x18];
    s32 unk_28;
    u8 pad_2C[0xC];
    u8 unk_38[0x20];
    f32 unk_58;
    u8 pad_5C[4];
    f32 unk_60;
    f32 unk_64;
} unk_func_00270170_0;

void func_00167A70(f32);
s32 func_0017D970(void *, s32, f32, f32, s32, s32);
extern s32 D_003602C8;

void func_00270170(unk_func_00270170_0 *arg0) {
    func_00167A70(arg0->unk_58);
    if (func_0017D970(arg0->unk_38, arg0->unk_0C, arg0->unk_60, arg0->unk_64, D_003602C8, arg0->unk_28) != 0) {
        arg0->unk_00 |= 1;
    }
}
