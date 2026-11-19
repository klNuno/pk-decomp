/* profile: o0_301_p */
#include "common.h"

typedef struct unk_func_001A7C90_0 {
    u8 pad_00[8];
    struct unk_func_001A7C90_0 *unk_08;
} unk_func_001A7C90_0;

void *func_001A7D60(unk_func_001A7C90_0 *);
extern unk_func_001A7C90_0 *D_005ABDB0[];

s32 func_001A7C90(void *arg0) {
    unk_func_001A7C90_0 *var_s0;
    u16 var_s2;
    unk_func_001A7C90_0 *var_s1;
    unk_func_001A7C90_0 *var_s3;

    var_s2 = 0;
    var_s0 = D_005ABDB0[0];
    var_s3 = var_s0;
    while (var_s0 != NULL) {
        if (func_001A7D60(var_s0) == arg0) {
            return 1;
        }
        var_s2++;
        var_s0 = var_s0->unk_08;
        var_s1 = var_s0;
        (void)var_s1;
    }
    return 0;
}
