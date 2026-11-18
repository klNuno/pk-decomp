/* profile: o0_p */
#include "common.h"

typedef struct unk_func_001AB8D0_0 {
    struct unk_func_001AB8D0_0 *unk_00;
    u8 pad_04[0x8];
    s32 unk_0C;
} unk_func_001AB8D0_0;

extern unk_func_001AB8D0_0 *D_005AB75C[];

s32 func_001AB8D0(u32 arg0) {
    unk_func_001AB8D0_0 *var_s0;
    u32 i;
    unk_func_001AB8D0_0 *var_s2;
    unk_func_001AB8D0_0 *var_s3;

    i = 0;
    var_s0 = D_005AB75C[0];
    var_s3 = var_s0;
    while (i < arg0) {
        i++;
        var_s0 = var_s0->unk_00;
        var_s2 = var_s0;
    }
    if (var_s0 != NULL) {
        return var_s0->unk_0C;
    }
    return 0;
}
