/* profile: o0 */
#include "common.h"

extern s32 D_003601A4;
extern s32 D_00605770[];
extern s32 D_00605840[];

s32 func_0023EB00(s32 arg0, s32 arg1) {
    if (D_003601A4 == 0) {
        return arg1;
    }
    D_00605840[D_003601A4 - 1]--;
    if (D_00605840[D_003601A4 - 1] > 0) {
        return D_00605770[D_003601A4 - 1];
    }
    D_003601A4--;
    return arg1;
}
