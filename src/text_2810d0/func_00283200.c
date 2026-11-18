/* profile: o0_301_p */
#include "common.h"

s32 func_00281990();
s32 func_002809C0();
void func_00281A90();
s32 func_002819F0();
s32 func_00280570(s32, f32);
s32 func_002804C0(s32, f32);
void func_0011CBB0(void *, void *, s32, s32);
s32 func_00281AB0(void *);
s32 func_0027C010();
s32 func_00281890(s32, s32, s32, s32, s32, s32, s32);
void func_0027BC00();
extern char D_00350548[];
extern s32 D_007B0098[];
extern s32 D_007B009C[];
extern s32 D_007B00B8[];

s32 func_00283200(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    char sp50[0x200];
    s32 res;
    s32 done;
    s32 fail;
    s32 unused;

    unused = 0;
    done = 0;
    fail = 0;
    do {
        done = 0;
        fail = 0;
        res = 0;
        if (!func_00281990()) {
            if (func_002809C0() == 4) {
                return 0;
            }
        } else {
            func_00281A90();
        }
        if (!func_002819F0() && func_00280570(D_007B009C[0], 450.0f) == 4) {
            return 0;
        }
        if (func_002819F0() && func_00281990() && res != 3 && func_00281990()) {
            func_0011CBB0(sp50, D_00350548, arg2, arg2);
            if (!func_00281AB0(sp50)) {
                if (func_00280570(D_007B009C[0], 450.0f) == 4) {
                    return 0;
                }
            } else if (!func_0027C010(arg0, arg1, sp50)) {
                if (func_00280570(D_007B00B8[0], 450.0f) == 4) {
                    return 0;
                }
            } else {
                res = func_00281890(arg0, arg1, arg2, arg3, arg4, arg5, 0);
                func_00281A90();
                func_0027BC00();
                if (res == 1) {
                    return 1;
                }
                if (res == 0) {
                    if (func_002804C0(D_007B0098[0], 450.0f) == 4) {
                        return 0;
                    }
                } else if (res == 2) {
                    return 0;
                }
            }
        }
    } while (!fail && !done);
    return 0;
}
