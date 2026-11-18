#include "common.h"

typedef struct {
    u8 pad_00[0x6160];
    f32 unk_6160[1][4];
} unk_func_0029FF20_0;

f32 int2dB__Fi();
void func_0029D9A0();
extern f32 D_007B84D0[][4];
extern u8 D_007B8488[];
extern unk_func_0029FF20_0 D_007B2370;

void func_0029FF20(s32 arg0, s64 arg1, s64 arg2, s64 arg3, s64 arg4) {
    D_007B84D0[arg0][0] = int2dB__Fi(arg1);
    D_007B84D0[arg0][1] = int2dB__Fi(arg2);
    D_007B84D0[arg0][2] = int2dB__Fi(arg3);
    D_007B84D0[arg0][3] = int2dB__Fi(arg4);
    if (D_007B8488[0] == 0) {
        func_0029D9A0(5, arg0, D_007B2370.unk_6160[arg0]);
    }
}
