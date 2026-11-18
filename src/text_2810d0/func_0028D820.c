#include "common.h"

typedef struct {
    s64 unk_00;
    s64 unk_08;
    s64 unk_10;
} unk_func_0028D820_0;

typedef struct {
    f32 unk_00;
    u8 pad_04[0xC];
} unk_func_0028D820_1;

f32 int2dB__Fi(s64);
extern unk_func_0028D820_1 D_007B8460[];
extern unk_func_0028D820_1 D_007B8464[];
extern unk_func_0028D820_1 D_007B8468[];

void func_0028D820(s32 arg0, unk_func_0028D820_0 *arg1) {
    f32 temp_f20;
    f32 temp_f21;

    temp_f21 = int2dB__Fi(arg1->unk_10);
    temp_f20 = int2dB__Fi(arg1->unk_08);
    D_007B8460[arg0].unk_00 = int2dB__Fi(arg1->unk_00);
    D_007B8464[arg0].unk_00 = temp_f20;
    D_007B8468[arg0].unk_00 = temp_f21;
}
