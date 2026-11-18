#include "common.h"

typedef struct unk_func_002ADE30_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} unk_func_002ADE30_0;

f32 int2dB__Fi(s32);
void func_002AD610(unk_func_002ADE30_0 *);

void func_002ADE30(s32 arg0, s32 arg1) {
    unk_func_002ADE30_0 sp20;

    sp20.unk_00 = int2dB__Fi(arg0);
    sp20.unk_04 = int2dB__Fi(arg1);
    sp20.unk_0C = 1.0f;
    sp20.unk_08 = 0.0f;
    func_002AD610(&sp20);
}
