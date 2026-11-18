/* profile: opt_nodf */
#include "common.h"

typedef struct {
    u8 pad_00[0x6120];
    f32 unk_6120[1][4];
} unk_func_002A8710_0;

void func_0029D9A0(s32, s32, f32 *);
extern unk_func_002A8710_0 D_007B2370;
extern u8 D_007B8488[];
extern f32 D_007B8490[][4];

void func_002A8710(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    D_007B8490[arg0][0] = arg1 / 127.0f;
    D_007B8490[arg0][1] = arg2 / 127.0f;
    D_007B8490[arg0][2] = arg3 / 127.0f;
    D_007B8490[arg0][3] = 1.0f;
    if (D_007B8488[0] == 0) {
        func_0029D9A0(6, arg0, D_007B2370.unk_6120[arg0]);
    }
}
