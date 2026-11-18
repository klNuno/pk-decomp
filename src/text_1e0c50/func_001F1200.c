/* profile: o0_301 */
#include "common.h"

s32 func_001E62D0();
s32 func_001E6A60();
void func_001E6970();
extern s32 D_005AB800[];

s32 func_001F1200(s32 arg0, s32 arg1) {
    arg1 = func_001E62D0(arg0, arg1);
    func_001E6970(0, arg0, D_005AB800[0] + func_001E6A60(0, arg0));
    return arg1;
}
