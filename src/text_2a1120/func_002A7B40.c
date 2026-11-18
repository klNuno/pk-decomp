/* profile: opt_nodf */
#include "common.h"

typedef struct unk_func_002A7B40_0 {
    f32 unk_00[4];
} unk_func_002A7B40_0;

typedef struct unk_func_002A7B40_1 {
    u8 pad_00[0x6120];
    unk_func_002A7B40_0 unk_6120[1];
} unk_func_002A7B40_1;

void func_0029D9A0(s32, u32, unk_func_002A7B40_0 *);
extern unk_func_002A7B40_1 D_007B2370;
extern u8 D_007B8488[];
extern unk_func_002A7B40_0 D_007B8490[];

void func_002A7B40(u32 arg0, u32 arg1, u32 arg2, u32 arg3, u32 arg4) {
    D_007B8490[arg0].unk_00[0] = arg1 / 255.0f;
    D_007B8490[arg0].unk_00[1] = arg2 / 255.0f;
    D_007B8490[arg0].unk_00[2] = arg3 / 255.0f;
    D_007B8490[arg0].unk_00[3] = arg4 / 255.0f;
    if (D_007B8488[0] == 0) {
        func_0029D9A0(6, arg0, &D_007B2370.unk_6120[arg0]);
    }
}
