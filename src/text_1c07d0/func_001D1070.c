/* profile: o0_301 */
#include "common.h"

s32 *HIE_fn_hGetSuperObjectObject(s32);
void func_0012D940(s32);
void func_00155E80(s32, s32);
s32 func_001979C0(s32);
s32 func_001B84B0(s32);
void func_001D0FE0(s32, s32, s32);

void func_001D1070(s32 arg0, s32 arg1) {
    s32 s0;
    s32 s1;
    s32 s2;
    s0 = HIE_fn_hGetSuperObjectObject(arg0)[2];
    s1 = func_001B84B0(s0);
    s2 = func_001979C0(arg0);
    func_00155E80(s2, arg1);
    func_0012D940(arg0);
    func_001D0FE0(s1, arg0, arg1);
}
