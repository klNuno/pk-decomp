#include "common.h"

typedef struct {
    u8 pad_00[0x6120];
    f32 unk_6120[1][4];
} unk_func_002A7550_0;

void func_0029D9A0();
extern f32 D_007B8490[][4];
extern u8 D_007B8488[];
extern unk_func_002A7550_0 D_007B2370;

void func_002A7550(s32 arg0, s32 *arg1) {
    f32 x;
    f32 y;
    f32 z;

    x = arg1[0] / 2147483648.0f;
    z = arg1[2] / 2147483648.0f;
    y = arg1[1] / 2147483648.0f;

    D_007B8490[arg0][0] = x;
    D_007B8490[arg0][1] = y;
    D_007B8490[arg0][2] = z;
    D_007B8490[arg0][3] = 1.0f;
    if (D_007B8488[0] == 0) {
        func_0029D9A0(6, arg0, D_007B2370.unk_6120[arg0]);
    }
}
