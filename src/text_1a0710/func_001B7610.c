/* profile: o0_301 */
#include "common.h"

s32 func_001B74D0(u8, s32);
void func_001B7570(u8, s32, s32);

void func_001B7610(u8 arg0, s32 arg1, s16 arg2, u8 arg3) {
    s32 val;
    s16 shift;

    shift = arg2 * 2;
    val = func_001B74D0(arg0, arg1);
    switch (arg3) {
    case 0:
        val &= ~(3 << shift);
        break;
    case 1:
        val &= ~(3 << shift);
        val |= 1 << shift;
        break;
    case 2:
        val &= ~(3 << shift);
        val |= 2 << shift;
        break;
    }
    func_001B7570(arg0, arg1, val);
}
