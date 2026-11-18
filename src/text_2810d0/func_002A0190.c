#include "common.h"

typedef struct {
    u8 pad_00[0x6160];
    f32 unk_6160[1][4];
} unk_func_002A0190_0;

void func_0029D9A0();
extern f32 D_007B84D0[][4];
extern u8 D_007B8488[];
extern unk_func_002A0190_0 D_007B2370;

void func_002A0190(s32 arg0, f32 *arg1) {
    f32 temp0;
    f32 temp1;
    f32 temp2;

    temp2 = arg1[2];
    temp1 = arg1[1];
    temp0 = arg1[0];
    D_007B84D0[arg0][0] = temp0;
    D_007B84D0[arg0][1] = temp1;
    D_007B84D0[arg0][2] = temp2;
    if (D_007B8488[0] == 0) {
        func_0029D9A0(5, arg0, D_007B2370.unk_6160[arg0]);
    }
}
