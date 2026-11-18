/* profile: o0 */
#include "common.h"

void func_001B0C40(s32, u8, u8, s32 *, u16 *, u16);
void func_001EC3E0(u8 *, s32);
extern s32 D_00603EA0[];

void func_001ED2F0(u8 *arg0, s32 arg1, u8 arg2, s16 arg3, u16 arg4) {
    u16 sp2E;
    u16 i;

    arg0[0] = 0;
    sp2E = arg0[1];
    func_001B0C40(arg1, arg2, arg3, D_00603EA0, &sp2E, arg4);
    for (i = 0; i < sp2E; i++) {
        func_001EC3E0(arg0, D_00603EA0[i]);
    }
}
