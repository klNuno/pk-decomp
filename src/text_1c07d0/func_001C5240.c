/* profile: o0 */
#include "common.h"

void func_00176750(s32);
s32 func_00199810(s32, s32);
s32 func_001C52D0(s32, s32);
extern s32 D_0035FFF0;
extern s32 D_0035FFF8;
extern s16 D_005DFB60[];

void func_001C5240(s32 arg0) {
    s32 idx;

    func_00176750(arg0);
    if (arg0 != func_00199810(D_0035FFF8, 0x400)) {
        idx = func_001C52D0(D_0035FFF8, arg0);
        D_005DFB60[idx] = 0;
    }
    D_0035FFF0--;
}
