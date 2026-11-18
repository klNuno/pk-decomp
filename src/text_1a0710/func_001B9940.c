/* profile: o0_301 */
#include "common.h"

s32 func_001B9A50(s32);
void func_00165660(s32, f32 *, f32 *);
void func_00165680(s32, f32, f32);

void func_001B9940(s32 arg0, f32 arg1) {
    f32 sp18;
    f32 sp1C;

    func_00165660(func_001B9A50(arg0), &sp18, &sp1C);
    func_00165680(func_001B9A50(arg0), sp18, arg1);
}
