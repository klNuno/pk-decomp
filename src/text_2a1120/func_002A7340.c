/* profile: opt_nodf */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} unk_func_002A7340_0;

typedef struct {
    u8 pad_00[0x6120];
    unk_func_002A7340_0 unk_6120[1];
} unk_func_002A7340_1;

void func_0029D9A0();
extern unk_func_002A7340_0 D_007B8490[];
extern u8 D_007B8488[];
extern unk_func_002A7340_1 D_007B2370;

void func_002A7340(s32 arg0, u8 *arg1) {
    f32 r;
    f32 g;
    f32 b;

    b = arg1[2] / 255.0f;
    g = arg1[1] / 255.0f;
    r = arg1[0] / 255.0f;

    D_007B8490[arg0].unk_00 = r;
    D_007B8490[arg0].unk_04 = g;
    D_007B8490[arg0].unk_08 = b;
    D_007B8490[arg0].unk_0C = 1.0f;
    if (D_007B8488[0] == 0) {
        func_0029D9A0(6, arg0, &D_007B2370.unk_6120[arg0]);
    }
}
