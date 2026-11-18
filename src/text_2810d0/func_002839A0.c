/* profile: o0_301_p */
#include "common.h"

void func_0027BC00(void);
s32 func_0027C490(s32, s32, s32);
void func_0027C690(s32, s32, s32);
s32 func_002809C0(void);
s32 func_00280E10(void);
s32 func_00280FF0(s32, s32, s32);
s32 func_00281370(char *);
s32 func_00281720(s32, s32, s32, s32, s32, s32, s32);
s32 func_00281990(void);
s32 func_002819F0(void);
void func_00281A90(void);
s32 func_00281AB0(char *);

s32 func_002839A0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    char sp60[0x200];
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3 = 0;
    s32 var_s4 = 0;

    (void)var_s3;
    (void)var_s4;
    var_s1 = 0;
    var_s2 = 0;
    do {
        func_00281A90();
        var_s1 = 0;
        var_s2 = 0;
        var_s0 = 0;
        if (func_00281990() == 0 && func_002809C0() == 4 && func_00280E10() == 2) {
            return 0;
        }
        if (func_002819F0() && func_00281990()) {
            if (func_0027C490(arg0, arg1, arg2) == 0) {
                var_s0 = func_00280FF0(arg0, arg1, arg2);
                if (var_s0 == 2 && func_00280E10() == 2) {
                    return 0;
                }
            } else if (func_00281AB0(sp60)) {
                if ((var_s0 = func_00281370(sp60)) == 2) {
                    if (func_00280E10() == 2) {
                        return 0;
                    }
                    var_s0 = 2;
                }
            }
            if (var_s0 != 2 && var_s0 != 3) {
                var_s0 = func_00281720(arg0, arg1, arg2, arg3, arg4, arg5, 0);
                func_00281A90();
                func_0027BC00();
                if (var_s0 == 1) {
                    func_0027C690(arg0, arg1, arg2);
                    return 1;
                }
                if (var_s0 == 2 && func_00280E10() == 2) {
                    return 0;
                }
            }
        } else {
            var_s0 = func_00280FF0(arg0, arg1, arg2);
            if (var_s0 == 2 && func_00280E10() == 2) {
                return 0;
            }
        }
    } while (!var_s2 && !var_s1);
    return 0;
}
