/* profile: opt_nodf */
#include "common.h"

typedef struct unk_func_0028DF60_0 {
    f32 unk_00;
    u8 pad_04[0xC];
} unk_func_0028DF60_0;

typedef struct unk_func_0028DF60_1 {
    s32 unk_00;
    u8 pad_04[0xC];
} unk_func_0028DF60_1;

extern unk_func_0028DF60_0 D_007B8460[];
extern unk_func_0028DF60_1 D_007B8464[];

void func_0028DF60(s32 arg0, s32 arg1) {
    D_007B8460[arg0].unk_00 = arg1 / 2147483648.0f;
    D_007B8464[arg0].unk_00 = 0;
}
