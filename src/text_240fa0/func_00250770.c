/* profile: o0_p */
#include "common.h"

typedef struct unk_func_00250770_0 {
    u8 pad_00[0x228];
    f32 unk_228;
    f32 unk_22C;
    f32 unk_230;
    u8 pad_234[0x14];
    f32 unk_248;
    f32 unk_24C;
} unk_func_00250770_0;

extern f32 D_00617338[];
extern f32 D_0061733C[];

void func_00250770(unk_func_00250770_0 *arg0) {
    arg0->unk_228 = D_00617338[0];
    arg0->unk_22C = -0.6f;
    arg0->unk_230 = 1.3f;
    arg0->unk_24C = arg0->unk_248 = D_0061733C[0];
}
