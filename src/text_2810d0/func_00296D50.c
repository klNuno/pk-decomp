/* profile: opt_nodf */
#include "common.h"

typedef struct unk_func_00296D50_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} unk_func_00296D50_0;

extern unk_func_00296D50_0 D_007B8420[];

void func_00296D50(u32 arg0, u32 arg1, u32 arg2, u32 arg3) {
    D_007B8420[0].unk_00 = arg0 / 65535.0f;
    D_007B8420[0].unk_04 = arg1 / 65535.0f;
    D_007B8420[0].unk_08 = arg2 / 65535.0f;
    D_007B8420[0].unk_0C = arg3 / 65535.0f;
}
