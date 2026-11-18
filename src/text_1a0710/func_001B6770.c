/* profile: o0 */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_001B6770_0;

typedef struct {
    u8 pad_00[0x4C];
    unk_func_001B6770_0 unk_4C[2];
} unk_func_001B6770_1;

extern unk_func_001B6770_0 D_005AD920;

void func_001B6770(unk_func_001B6770_0 *arg0, unk_func_001B6770_1 *arg1, s16 arg2) {
    unk_func_001B6770_0 def = D_005AD920;
    s32 ok;
    unk_func_001B6770_0 *p;

    ok = 0;
    if (arg2 >= 0 && arg2 < 2) {
        ok = 1;
    }
    if (ok) {
        p = &arg1->unk_4C[arg2];
    } else {
        p = &def;
    }
    *arg0 = *p;
}
