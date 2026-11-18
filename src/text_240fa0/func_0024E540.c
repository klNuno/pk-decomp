/* profile: o0 */
#include "common.h"

typedef struct unk_func_0024E540_0 {
    u8 pad_00[0x108];
    s32 unk_108;
    u8 pad_10C[0x228 - 0x10C];
    f32 unk_228;
    f32 unk_22C;
    u8 pad_230[0x4];
    f32 unk_234;
    u8 pad_238[0x10];
    f32 unk_248;
    f32 unk_24C;
    u8 pad_250[0x14];
    s32 unk_264;
    u8 pad_268[0xC];
    s32 unk_274;
} unk_func_0024E540_0;

s32 func_0024DE90(s32, s32);

void func_0024E540(unk_func_0024E540_0 *arg0) {
    f32 temp;

    if (func_0024DE90(arg0->unk_108, arg0->unk_264) == 0 && func_0024DE90(arg0->unk_108, arg0->unk_274) == 0 && arg0->unk_234 < arg0->unk_228) {
        temp = (arg0->unk_234 - arg0->unk_22C) / (arg0->unk_228 - arg0->unk_22C);
        temp = 3.0f + (arg0->unk_248 - 3.0f) * temp;
        if (!(arg0->unk_24C <= temp)) {
            arg0->unk_24C = temp;
        }
    }
}
