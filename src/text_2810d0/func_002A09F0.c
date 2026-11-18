/* profile: opt_nodf */
#include "common.h"

typedef struct {
    u8 pad_00[0x6160];
    f32 unk_6160[1][4];
} unk_func_002A09F0_0;

void func_0029D9A0();
extern f32 D_007B84D0[][4];
extern u8 D_007B8488[];
extern unk_func_002A09F0_0 D_007B2370;

void func_002A09F0(s32 arg0, s32 arg1, s32 arg2) {
    D_007B84D0[arg0][0] = (f32)arg1 / 2147483648.0f;
    D_007B84D0[arg0][1] = (f32)arg2 / 2147483648.0f;
    if (D_007B8488[0] == 0) {
        func_0029D9A0(5, arg0, D_007B2370.unk_6160[arg0]);
    }
}
