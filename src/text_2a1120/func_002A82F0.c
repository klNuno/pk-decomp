/* profile: opt_nodf */
#include "common.h"

typedef struct unk_func_002A82F0_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} unk_func_002A82F0_0;

typedef struct unk_func_002A82F0_1 {
    u8 pad_00[0x6120];
    unk_func_002A82F0_0 unk_6120[1];
} unk_func_002A82F0_1;

void func_0029D9A0();
extern unk_func_002A82F0_1 D_007B2370;
extern u8 D_007B8488[];
extern unk_func_002A82F0_0 D_007B8490[];

void func_002A82F0(s32 arg0, u32 arg1, u32 arg2, u32 arg3) {
    D_007B8490[arg0].unk_00 = (f32)arg1 / 255.0f;
    D_007B8490[arg0].unk_04 = (f32)arg2 / 255.0f;
    D_007B8490[arg0].unk_08 = (f32)arg3 / 255.0f;
    D_007B8490[arg0].unk_0C = 1.0f;
    if (D_007B8488[0] == 0) {
        func_0029D9A0(6, arg0, &D_007B2370.unk_6120[arg0]);
    }
}
