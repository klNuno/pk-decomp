#include "common.h"

typedef struct {
    u8 pad_00[0x6120];
    f32 unk_6120[1][4];
} unk_func_002A7F20_0;

void func_0029D9A0();
extern f32 D_007B8490[][4];
extern u8 D_007B8488[];
extern unk_func_002A7F20_0 D_007B2370;

void func_002A7F20(s32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4) {
    D_007B8490[arg0][0] = arg1;
    D_007B8490[arg0][1] = arg2;
    D_007B8490[arg0][2] = arg3;
    D_007B8490[arg0][3] = arg4;
    if (D_007B8488[0] == 0) {
        func_0029D9A0(6, arg0, D_007B2370.unk_6120[arg0]);
    }
}
