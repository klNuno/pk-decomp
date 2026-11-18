#include "common.h"

typedef struct unk_func_001E3710_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_001E3710_0;

u8 func_001E3710(unk_func_001E3710_0 *arg0, unk_func_001E3710_0 *arg1, f32 arg2, f32 arg3) {
    unk_func_001E3710_0 d;
    f32 r;

    d.unk_08 = arg0->unk_08 - arg1->unk_08;
    r = arg2 + arg3;
    d.unk_04 = arg0->unk_04 - arg1->unk_04;
    d.unk_00 = arg0->unk_00 - arg1->unk_00;
    d.unk_08 = arg0->unk_08 - arg1->unk_08;
    return d.unk_00 * d.unk_00 + d.unk_04 * d.unk_04 + d.unk_08 * d.unk_08 <= r * r;
}
