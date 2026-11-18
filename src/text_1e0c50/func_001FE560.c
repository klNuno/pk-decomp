/* profile: o0 */
#include "common.h"

typedef struct unk_func_001FE560_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_001FE560_0;

f32 func_00151360(f32);

s32 func_001FE560(unk_func_001FE560_0 *arg0, unk_func_001FE560_0 *arg1, f32 arg2) {
    unk_func_001FE560_0 d;
    f32 dist;

    d.unk_00 = arg0->unk_00 - arg1->unk_00;
    d.unk_04 = arg0->unk_04 - arg1->unk_04;
    d.unk_08 = arg0->unk_08 - arg1->unk_08;
    dist = func_00151360(d.unk_00) + func_00151360(d.unk_04) + func_00151360(d.unk_08);
    if (!(dist <= func_00151360(arg2))) {
        return 0;
    }
    return 1;
}
