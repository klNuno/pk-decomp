/* profile: opt_nodf */
#include "common.h"

typedef struct {
    f32 unk_00[4];
} unk_func_0029FCF0_0;

typedef struct {
    u8 pad_00[0x6160];
    unk_func_0029FCF0_0 unk_6160[1];
} unk_func_0029FCF0_1;

void func_0029D9A0(s32, s32, void *);
extern unk_func_0029FCF0_1 D_007B2370;
extern u8 D_007B8488[];
extern unk_func_0029FCF0_0 D_007B84D0[];

void func_0029FCF0(s32 arg0, s32 *arg1) {
    f32 temp_f3 = (f32)arg1[3] / 2147483648.0f;
    f32 temp_f2 = (f32)arg1[2] / 2147483648.0f;
    f32 temp_f1 = (f32)arg1[1] / 2147483648.0f;
    f32 temp_f0 = (f32)arg1[0] / 2147483648.0f;

    D_007B84D0[arg0].unk_00[0] = temp_f0;
    D_007B84D0[arg0].unk_00[1] = temp_f1;
    D_007B84D0[arg0].unk_00[2] = temp_f2;
    D_007B84D0[arg0].unk_00[3] = temp_f3;
    if (D_007B8488[0] == 0) {
        func_0029D9A0(5, arg0, &D_007B2370.unk_6160[arg0]);
    }
}
