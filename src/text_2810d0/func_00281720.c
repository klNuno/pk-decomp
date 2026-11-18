/* profile: o0 */
#include "common.h"

s32 StrICmp(char *, char *);
s32 func_0027E6D0(s32, s32, s32, s32, s32, s32);
void func_00280350(s32, f32);
s32 func_002804C0(s32, f32);
s32 func_00281990();
extern char D_003323C0[];
extern char D_005AB791[];
extern s32 D_007B0084[];
extern s32 D_007B008C[];
extern s32 D_007B00C8[];
extern s32 D_007B00D8[];

s32 func_00281720(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    if (StrICmp(D_005AB791, (char *)(s32)D_003323C0) == 0) {
        if (arg6 != 0) {
            func_00280350(D_007B00D8[0], 400.0f);
        } else {
            func_00280350(D_007B0084[0], 400.0f);
        }
    } else {
        func_00280350(D_007B00C8[0], 400.0f);
    }
    if (func_0027E6D0(arg0, arg1, (s32)(void *)arg2, arg3, arg4, arg5) == 1) {
        return 1;
    }
    if (func_00281990() != 0) {
        if (func_002804C0(D_007B008C[0], 400.0f) == 4) {
            return 2;
        }
    } else {
        if (func_002804C0(D_007B008C[0], 400.0f) == 4) {
            return 2;
        }
    }
    return 3;
}
