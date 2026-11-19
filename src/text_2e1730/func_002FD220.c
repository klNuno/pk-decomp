/* profile: opt_nodf */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    u8 pad_0C[0xC];
    f32 unk_18;
    f32 unk_1C;
    f32 unk_20;
} unk_func_002FD220_0;

f32 func_002CD150(f32);

f32 func_002FD220(unk_func_002FD220_0 *arg0, unk_func_002FD220_0 *arg1) {
    f32 dx;
    f32 dy;
    f32 dz;
    f32 len;

    dx = arg1->unk_00;
    dy = arg1->unk_04;
    dz = arg1->unk_08;
    dx -= arg0->unk_00;
    dy -= arg0->unk_04;
    dz -= arg0->unk_08;
    len = func_002CD150(dx * dx + dy * dy + dz * dz);
    if (len == 0.0f) {
        return 0.5f;
    }
    {
        f32 dot = dx * arg0->unk_18 + dy * arg0->unk_1C + dz * arg0->unk_20;
        dot /= len;
        return (1.0f + dot) / 2.0f;
    }
}
