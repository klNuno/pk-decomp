/* profile: opt_nodf */
#include "common.h"

typedef struct {
    f32 unk_00;
    u8 pad_04[0xC];
} unk_func_0028DA70_0;

extern unk_func_0028DA70_0 D_007B8460[];
extern unk_func_0028DA70_0 D_007B8464[];
extern unk_func_0028DA70_0 D_007B8468[];

void func_0028DA70(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    D_007B8460[arg0].unk_00 = (f32)arg1 / 2147483648.0f;
    D_007B8464[arg0].unk_00 = (f32)arg2 / 2147483648.0f;
    D_007B8468[arg0].unk_00 = (f32)arg3 / 2147483648.0f;
}
