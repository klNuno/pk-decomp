/* profile: o0_301 */
#include "common.h"

void func_001FA420(s32 *, s32, s32, s32, s32, s32, s32, s32);

void func_0024D750(s32 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;

    var_s0 = 0;
    var_s1 = 0;
    var_s2 = 0;
    var_s3 = 0;
    switch (arg1) {
    case 0x231:
        var_s0 = arg0[0];
        var_s1 = arg0[1];
        var_s2 = arg0[2];
        var_s3 = arg0[3];
        break;
    case 0x232:
        var_s0 = arg0[0] + 0xC;
        var_s1 = arg0[1] + 0xC;
        var_s2 = arg0[2] + 0xC;
        var_s3 = arg0[3] + 0xC;
        break;
    }
    func_001FA420(arg0, var_s0, var_s1, var_s2, var_s3, arg2, arg3, arg4);
}
