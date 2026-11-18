/* profile: o0 */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    u8 pad_0C[0x28];
} unk_func_00246760_0;

typedef struct {
    u8 pad_00[0x34];
    unk_func_00246760_0 unk_34[1];
} unk_func_00246760_1;

f32 func_00151360(f32);
f32 func_001E60E0(f32);

f32 func_00246760(unk_func_00246760_1 *arg0, u8 arg1, u8 arg2) {
    f32 dx;
    f32 dy;
    f32 dz;
    f32 sum;
    u8 i;

    sum = 0.0f;
    for (i = arg1; i < arg2; i++) {
        dx = arg0->unk_34[i + 1].unk_00 - arg0->unk_34[i].unk_00;
        dy = arg0->unk_34[i + 1].unk_04 - arg0->unk_34[i].unk_04;
        dz = arg0->unk_34[i + 1].unk_08 - arg0->unk_34[i].unk_08;
        sum += func_001E60E0(func_00151360(dx) + func_00151360(dy) + func_00151360(dz));
    }
    return sum;
}
