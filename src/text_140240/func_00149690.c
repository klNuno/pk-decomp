/* profile: opt_300 */
#include "common.h"

typedef struct {
    u8 pad_00[0xC];
    f32 unk_0C;
    f32 unk_10;
    u8 pad_14[0xC];
    f32 unk_20;
    u8 pad_24[0xC];
    f32 unk_30;
    f32 unk_34;
    f32 unk_38;
    u8 pad_3C[0x24];
    f32 unk_60[3];
} unk_func_00149690_0;

typedef struct {
    u8 pad_00[0x6C];
    f32 unk_6C[3];
} unk_func_00149690_1;

unk_func_00149690_0 *func_00138800(unk_func_00149690_1 *);

void func_00149690(unk_func_00149690_1 *arg0, f32 arg1) {
    f32 v[3];
    u8 b;

    b = func_00138800(arg0)->unk_0C != 1.0f;
    arg1 *= func_00138800(arg0)->unk_10;
    v[0] = arg1 * func_00138800(arg0)->unk_30;
    v[1] = arg1 * func_00138800(arg0)->unk_34;
    v[2] = arg1 * func_00138800(arg0)->unk_38;
    if (b) {
        v[0] *= func_00138800(arg0)->unk_20;
        v[1] *= func_00138800(arg0)->unk_20;
        v[2] *= func_00138800(arg0)->unk_20;
    }
    v[0] = v[0] + arg0->unk_6C[0];
    v[1] = v[1] + arg0->unk_6C[1];
    v[2] = v[2] + arg0->unk_6C[2];
    *(s32 *)&func_00138800(arg0)->unk_60[0] = ((s32 *)v)[0];
    *(s32 *)&func_00138800(arg0)->unk_60[1] = ((s32 *)v)[1];
    *(s32 *)&func_00138800(arg0)->unk_60[2] = ((s32 *)v)[2];
}
