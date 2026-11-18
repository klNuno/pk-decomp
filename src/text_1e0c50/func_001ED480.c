/* profile: o0 */
#include "common.h"

extern s32 D_00603EA0[];
void func_001B2DF0(s32, u8, u8, void *, u16 *);

u8 func_001ED480(s32 arg0, u8 arg1, s16 arg2) {
    u16 sp1E;

    sp1E = 1;
    func_001B2DF0(arg0, arg1, arg2, D_00603EA0, &sp1E);
    return sp1E != 0;
}
