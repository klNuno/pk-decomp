#include "common.h"

typedef struct {
    s64 unk_00;
    s64 unk_08;
} unk_func_0028DB80_0;

typedef struct {
    f32 unk_00;
    u8 pad_04[0xC];
} unk_func_0028DB80_1;

f32 int2dB__Fi(s64);
extern unk_func_0028DB80_1 D_007B8460[];
extern unk_func_0028DB80_1 D_007B8464[];

void func_0028DB80(s32 arg0, unk_func_0028DB80_0 *arg1) {
    f32 temp = int2dB__Fi(arg1->unk_08);
    D_007B8460[arg0].unk_00 = int2dB__Fi(arg1->unk_00);
    D_007B8464[arg0].unk_00 = temp;
}
