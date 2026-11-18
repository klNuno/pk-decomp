/* profile: opt_300 */
#include "common.h"

u8 func_00309700(void *, s32, s32);
s32 func_0030E2B0(void *, s32);
extern u8 D_0035F7AC;
extern u8 D_003607E8;
extern s32 D_003607EC;
extern u8 D_007C81D0[];
extern u8 D_007C9200[];

u8 func_00309F30(s32 arg0, s32 arg1) {
    if (D_003607EC != 0) {
        return 0;
    }
    if (D_003607E8 == 0) {
        D_0035F7AC = !func_0030E2B0(D_007C81D0, arg0);
        if (D_0035F7AC != 0) {
            D_003607E8 = func_00309700(D_007C9200, arg0, arg1);
        } else {
            D_003607E8 = 1;
        }
    }
    return D_003607E8;
}
