/* profile: o0_301 */
#include "common.h"

s32 func_001B9A50();
void func_00165660(s32, f32 *, f32 *);
void func_00165680(s32, f32, f32);

void func_001B98D0(s32 arg0, f32 arg1) {
    f32 temp;
    f32 temp2;

    func_00165660(func_001B9A50(arg0), &temp, &temp2);
    func_00165680(func_001B9A50(arg0), arg1, temp2);
}
