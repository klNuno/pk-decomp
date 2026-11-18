#include "common.h"

void func_0029D9A0(s32, s32, void *, f32 *);
extern u8 D_007B2370[];
extern u8 D_007B8488[];
extern f32 D_007B8490[][4];

void func_002A6FE0(s32 arg0, s8 *arg1) {
    f32 temp0;
    f32 temp1;
    f32 temp2;
    f32 temp3;

    temp3 = arg1[3] / 127.0f;
    temp2 = arg1[2] / 127.0f;
    temp1 = arg1[1] / 127.0f;
    temp0 = arg1[0] / 127.0f;
    D_007B8490[arg0][0] = temp0;
    D_007B8490[arg0][1] = temp1;
    D_007B8490[arg0][2] = temp2;
    D_007B8490[arg0][3] = temp3;
    if (D_007B8488[0] == 0) {
        func_0029D9A0(6, arg0, D_007B2370 + arg0 * 16 + 0x6120, D_007B8490[arg0]);
    }
}
