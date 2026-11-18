#include "common.h"

typedef struct unk_func_00151370_0 {
    s32 unk_00;
    u8 pad_04[0xC];
    u8 unk_10[0x40];
    f32 unk_50;
    f32 unk_54;
    f32 unk_58;
    f32 unk_5C;
} unk_func_00151370_0;

void func_001571B0(void *, f32, f32, f32, f32);

void func_00151370(unk_func_00151370_0 *arg0, f32 *arg1) {
    arg0->unk_00 = 5;
    arg0->unk_50 = 1.0f;
    arg0->unk_54 = 1.0f;
    arg0->unk_58 = 1.0f;
    arg0->unk_5C = 1.0f;
    func_001571B0(arg0->unk_10, arg1[0], arg1[1], arg1[2], arg1[3]);
}
