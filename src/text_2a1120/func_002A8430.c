/* profile: opt_nodf */
#include "common.h"

typedef struct {
    f32 unk_00[4];
} unk_func_002A8430_0;

void func_0029D9A0(s32, s32, void *);
typedef struct {
    u8 pad_00[0x6120];
    unk_func_002A8430_0 unk_6120[1];
} unk_func_002A8430_1;
extern unk_func_002A8430_1 D_007B2370;
extern u8 D_007B8488[];
extern unk_func_002A8430_0 D_007B8490[];

void func_002A8430(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    D_007B8490[arg0].unk_00[0] = (f32)arg1 / 32767.0f;
    D_007B8490[arg0].unk_00[1] = (f32)arg2 / 32767.0f;
    D_007B8490[arg0].unk_00[2] = (f32)arg3 / 32767.0f;
    D_007B8490[arg0].unk_00[3] = 1.0f;
    if (D_007B8488[0] == 0) {
        func_0029D9A0(6, arg0, &D_007B2370.unk_6120[arg0]);
    }
}
