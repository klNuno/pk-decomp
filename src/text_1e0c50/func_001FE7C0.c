/* profile: o0 */
#include "common.h"

f32 func_0014EC40(s32, s32, s32);
f32 func_0014F230(s32, s32, s32);
void func_001FE640(s32, f32 *, f32 *);

void func_001FE7C0(s32 arg0, s32 arg1, s32 arg2, f32 *arg3, f32 *arg4, s32 arg5) {
    *arg3 = func_0014F230(arg1, arg2, arg5);
    *arg4 = func_0014EC40(arg1, arg2, arg5);
    func_001FE640(arg0, arg3, arg4);
}
