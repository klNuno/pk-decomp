/* profile: opt_nodf */
#include "common.h"

typedef struct {
    f32 unk_00[4];
} unk_func_002A8640_0;

typedef struct {
    u8 pad_00[0x6120];
    unk_func_002A8640_0 unk_6120[1];
} unk_func_002A8640_1;

void func_0029D9A0(s32, s32, void *);
f32 int2dB__Fi(s32);
extern unk_func_002A8640_1 D_007B2370;
extern u8 D_007B8488[];
extern unk_func_002A8640_0 D_007B8490[];

void func_002A8640(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    D_007B8490[arg0].unk_00[0] = int2dB__Fi(arg1);
    D_007B8490[arg0].unk_00[1] = int2dB__Fi(arg2);
    D_007B8490[arg0].unk_00[2] = int2dB__Fi(arg3);
    D_007B8490[arg0].unk_00[3] = 1.0f;
    if (D_007B8488[0] == 0) {
        func_0029D9A0(6, arg0, &D_007B2370.unk_6120[arg0]);
    }
}
