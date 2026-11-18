#include "common.h"

typedef struct {
    u8 pad_00[0x6160];
    f32 unk_6160[1][4];
} unk_func_002A0730_0;

f32 int2dB__Fi();
void func_0029D9A0();
extern f32 D_007B84D0[][4];
extern u8 D_007B8488[];
extern unk_func_002A0730_0 D_007B2370;

void func_002A0730(s32 arg0, s64 *arg1) {
    f32 temp = int2dB__Fi(arg1[1]);

    D_007B84D0[arg0][0] = int2dB__Fi(arg1[0]);
    D_007B84D0[arg0][1] = temp;
    if (D_007B8488[0] == 0) {
        func_0029D9A0(5, arg0, D_007B2370.unk_6160[arg0]);
    }
}
