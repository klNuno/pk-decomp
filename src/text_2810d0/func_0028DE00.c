#include "common.h"

typedef struct {
    f32 unk_00;
    u8 pad_04[0xC];
} unk_func_0028DE00_0;

typedef struct {
    s32 unk_00;
    u8 pad_04[0xC];
} unk_func_0028DE00_1;

f32 int2dB__Fi(s64);
extern unk_func_0028DE00_0 D_007B8460[];
extern unk_func_0028DE00_1 D_007B8464[];

void func_0028DE00(s32 arg0, s64 *arg1) {
    D_007B8460[arg0].unk_00 = int2dB__Fi(*arg1);
    D_007B8464[arg0].unk_00 = 0;
}
