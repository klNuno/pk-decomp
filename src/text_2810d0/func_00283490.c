/* profile: o0_301_p */
#include "common.h"

void func_0011CBB0(char *, char *, s32, s32);
void func_0027BC00(void);
s32 func_0027C010(s32, s32, char *);
void func_0027C690(s32, s32, s32);
s32 func_002808A0(void);
s32 func_00280E10(void);
s32 func_00281890(s32, s32, s32, s32, s32, s32, s32);
s32 func_00281990(void);
s32 func_002819F0(void);
void func_00281A90(void);
extern char D_00350548[];

s32 func_00283490(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    s32 temp_s0;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;
    char sp50[0x200];

    var_s3 = 0;
    var_s1 = 0;
    var_s2 = 0;
    do {
        var_s1 = 0;
        var_s2 = 0;
        temp_s0 = 0;
        if (func_00281990() == 0) {
            if (func_002808A0() == 4 && func_00280E10() == 2) {
                return 2;
            }
        } else {
            func_00281A90();
        }
        if (func_002819F0() == 0) {
            return 0;
        }
        if (func_002819F0() != 0 && func_00281990() != 0) {
            func_0011CBB0(sp50, D_00350548, arg2, arg2);
            if (temp_s0 != 3 && func_00281990() != 0) {
                if (func_0027C010(arg0, arg1, sp50) == 0) {
                    return 0;
                }
                temp_s0 = func_00281890(arg0, arg1, arg2, arg3, arg4, arg5, 0);
                func_00281A90();
                func_0027BC00();
                if (temp_s0 == 1 && func_00281990() != 0) {
                    func_0027C690(arg0, arg1, arg2);
                    return 1;
                }
                if (temp_s0 == 0) {
                    return 2;
                }
                if (temp_s0 == 2 && func_00280E10() == 2) {
                    return 0;
                }
            }
        }
    } while (var_s2 == 0 && var_s1 == 0);
    return 0;
}
