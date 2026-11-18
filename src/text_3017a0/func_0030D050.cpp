/* profile: opt_300 */
#include "common.h"

extern "C" {
void func_00308B80(s32);
void func_00308BE0(s32);
extern s32 D_00360870;
extern u32 D_007DE190[];

bool func_0030D050(u32 arg0) {
    bool ret = false;

    if (D_00360870 != 0) {
        func_00308BE0(D_00360870);
    }
    ret = false;
    if (arg0 != 0 && (arg0 & ~0x3FF) == (D_007DE190[arg0 & 0x3FF] & ~0x3FF)) {
        ret = true;
    }
    if (D_00360870 != 0) {
        func_00308B80(D_00360870);
    }
    return ret;
}
}
