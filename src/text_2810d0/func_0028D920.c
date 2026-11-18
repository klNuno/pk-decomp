/* profile: opt_nodf */
#include "common.h"

typedef struct {
    f32 unk_00;
    u8 pad_04[0xC];
} unk_func_0028D920_0;

typedef struct {
    s16 unk_00;
    s16 unk_02;
    s16 unk_04;
} unk_func_0028D920_1;

extern unk_func_0028D920_0 D_007B8460[];
extern unk_func_0028D920_0 D_007B8464[];
extern unk_func_0028D920_0 D_007B8468[];

void func_0028D920(s32 arg0, unk_func_0028D920_1 *arg1) {
    f32 x;
    f32 y;
    f32 z;

    z = (f32)arg1->unk_04 / 32767.0f;
    y = (f32)arg1->unk_02 / 32767.0f;
    x = (f32)arg1->unk_00 / 32767.0f;
    D_007B8460[arg0].unk_00 = x;
    D_007B8464[arg0].unk_00 = y;
    D_007B8468[arg0].unk_00 = z;
}
