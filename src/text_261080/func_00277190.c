/* profile: o0_p */
#include "common.h"

typedef struct {
    u32 unk_00;
    s32 unk_04[4];
} unk_func_00277190_0;

extern unk_func_00277190_0 D_005ACC80;

s32 func_00277190(s32 arg0) {
    u32 i;
    u32 n = D_005ACC80.unk_00;

    for (i = 0; i < n; i++) {
        if (D_005ACC80.unk_04[i] == arg0) {
            return 1;
        }
    }
    return 0;
}
