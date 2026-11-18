/* profile: opt_nodf */
#include "common.h"

typedef struct unk_func_002A15D0_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    u8 pad_0C[0x4];
} unk_func_002A15D0_0;

void func_0029D8F0();
extern u8 D_007B8488[];
extern unk_func_002A15D0_0 D_007B84D0;

void func_002A15D0(s32 arg0, s32 arg1, s32 arg2) {
    D_007B84D0.unk_00 = (f32)arg0 / 2147483648.0f;
    D_007B84D0.unk_04 = (f32)arg1 / 2147483648.0f;
    D_007B84D0.unk_08 = (f32)arg2 / 2147483648.0f;
    if (D_007B8488[0] == 0) {
        func_0029D8F0(3, &D_007B84D0);
    }
}
