#include "common.h"

typedef struct {
    u8 pad_00[0x6160];
    f32 unk_6160[1][4];
} unk_func_002A0210_0;

f32 int2dB__Fi();
void func_0029D9A0(s32, s32, f32 *);
extern unk_func_002A0210_0 D_007B2370;
extern u8 D_007B8488[];
extern f32 D_007B84D0[][4];

void func_002A0210(s32 arg0, s64 *arg1) {
    f32 b;
    f32 a;

    a = int2dB__Fi(arg1[2]);
    b = int2dB__Fi(arg1[1]);
    D_007B84D0[arg0][0] = int2dB__Fi(arg1[0]);
    D_007B84D0[arg0][1] = b;
    D_007B84D0[arg0][2] = a;
    if (D_007B8488[0] == 0) {
        func_0029D9A0(5, arg0, D_007B2370.unk_6160[arg0]);
    }
}
