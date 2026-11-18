/* profile: o1 */
#include "common.h"

extern s32 D_005AD940[];
extern s32 D_005AD944[];
extern s16 D_005AD948[];
extern s32 D_005AD94C[];
extern s32 D_005AD950[];
s32 func_00133590();

void func_001C00F0(void) {
    D_005AD948[0] = 0;
    D_005AD94C[0] = 0;
    D_005AD950[0] = 0;
    D_005AD940[0] = 0;
    D_005AD944[0] = func_00133590();
}
