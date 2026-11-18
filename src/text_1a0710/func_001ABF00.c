/* profile: o0 */
#include "common.h"

void func_001AE990(f32);
extern f32 D_00333A20[];
extern f32 D_00333A24[];
extern f32 D_00333A28[];

void func_001ABF00(f32 arg0, f32 arg1, f32 arg2) {
    D_00333A20[0] = 0.0f;
    if (arg1 >= 0.0f) {
        D_00333A24[0] = arg1;
    }
    if (arg2 >= 0.0f) {
        D_00333A28[0] = arg2;
    }
    func_001AE990(arg0);
}
