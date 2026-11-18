#include "common.h"

typedef struct {
    u8 pad_00[0x6160];
    f32 unk_6160[1][4];
} unk_func_002A0370_0;

void func_0029D9A0();
extern f32 D_007B84D0[][4];
extern u8 D_007B8488[];
extern unk_func_002A0370_0 D_007B2370;

void func_002A0370(s32 arg0, s16 *arg1) {
    f32 x;
    f32 y;
    f32 z;

    x = arg1[0] / 32767.0f;
    z = arg1[2] / 32767.0f;
    y = arg1[1] / 32767.0f;

    D_007B84D0[arg0][0] = x;
    D_007B84D0[arg0][1] = y;
    D_007B84D0[arg0][2] = z;
    if (D_007B8488[0] == 0) {
        func_0029D9A0(5, arg0, D_007B2370.unk_6160[arg0]);
    }
}
