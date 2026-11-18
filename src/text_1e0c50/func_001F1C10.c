/* profile: o0 */
#include "common.h"

typedef struct {
    union {
        s32 i;
        f32 f;
    } unk_00;
    u8 pad_04[8];
    s32 unk_0C;
} unk_func_001F1C10_0;

u8 func_001F1C10(unk_func_001F1C10_0 *arg0, unk_func_001F1C10_0 *arg1) {
    u8 var_s0;

    var_s0 = (u8)(arg0->unk_0C == 8);
    if (var_s0) {
        if (arg1->unk_0C != 8) {
            arg1->unk_00.f = arg1->unk_00.i;
        }
    } else {
        var_s0 = (u8)(arg1->unk_0C == 8);
        if (var_s0) {
            arg0->unk_00.f = arg0->unk_00.i;
        }
    }
    return var_s0;
}
