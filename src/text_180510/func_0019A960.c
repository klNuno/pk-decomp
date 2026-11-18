/* profile: o0_301_p */
#include "common.h"

s32 *HIE_fn_hGetSuperObjectObject(s32);
s32 func_00199810(s32, u32);
extern u32 D_003338C0[];
extern s32 D_003338D0[];
extern void **D_003338D8[];

s32 func_0019A960(void *arg0) {
    s32 count;
    u32 i;
    s32 *obj;

    count = 0;
    for (i = 0; i < D_003338C0[0]; i++) {
        obj = HIE_fn_hGetSuperObjectObject(func_00199810(D_003338D0[0], i));
        if (obj != NULL && *obj != 0 && D_003338D8[0][i] == arg0) {
            count++;
        }
    }
    return count;
}
