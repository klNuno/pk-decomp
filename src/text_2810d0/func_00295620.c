#include "common.h"

typedef struct {
    s64 unk_00;
    s64 unk_08;
    s64 unk_10;
} unk_func_00295620_0;

typedef struct {
    f32 unk_00;
    u8 pad_04[0xC];
} unk_func_00295620_1;

f32 int2dB__Fi(s64);
extern u8 D_007B8420[];

void func_00295620(s32 arg0, unk_func_00295620_0 *arg1) {
    f32 temp_f20;
    f32 temp_f21;

    temp_f21 = int2dB__Fi(arg1->unk_10);
    temp_f20 = int2dB__Fi(arg1->unk_08);
    ((unk_func_00295620_1 *)D_007B8420)[arg0].unk_00 = int2dB__Fi(arg1->unk_00);
    ((unk_func_00295620_1 *)(D_007B8420 + 4))[arg0].unk_00 = temp_f20;
    ((unk_func_00295620_1 *)(D_007B8420 + 8))[arg0].unk_00 = temp_f21;
    ((unk_func_00295620_1 *)(D_007B8420 + 0xC))[arg0].unk_00 = 1.0f;
}
