/* profile: o0_301 */
#include "common.h"

s32 func_001979C0(s32);
void func_00150060(s32, s32 *, s32 *, s32 *);

s32 func_00209600(s32 arg0, s32 *arg1) {
    s32 temp = 0;
    s32 *p = NULL;
    s32 *temp2 = NULL;
    s32 *temp3 = NULL;

    temp = func_001979C0(arg0);
    func_00150060(temp, p, temp2, temp3);
    arg1[0] = p[0];
    arg1[1] = p[1];
    arg1[2] = p[2];
    arg1[3] = 0x15;
    return 1;
}
