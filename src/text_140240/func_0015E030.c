/* profile: opt_300 */
#include "common.h"

extern u8 D_0035F974;
extern u8 D_0035F980;
extern s32 D_00369040[];

void func_0015E030(void) {
    s32 var_a1;

    for (var_a1 = 0; var_a1 < D_0035F974; var_a1++) {
        D_00369040[var_a1] = 0;
    }
    D_0035F974 = 0;
    D_0035F980 = 0;
}
