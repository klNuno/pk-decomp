/* profile: o0_301_p */
#include "common.h"

typedef struct {
    u16 *unk_00;
    s32 unk_04;
} unk_func_001B0130_0;

unk_func_001B0130_0 *func_001B0610(u8, s32);
u16 func_001B0AE0(u16 *);
u8 func_001B3350(u8, s32, s32);
s32 **func_001B6AB0(u8, s32);

s32 func_001B0130(s32 arg0, u8 arg1, u8 arg2) {
    u16 *var_s0;
    s32 var_s1;
    s32 temp_s2;
    s32 **var_s3;
    s32 *var_s4;
    unk_func_001B0130_0 *var_s5;
    u8 var_s6;
    s32 var_s7;

    var_s3 = 0;
    var_s6 = func_001B3350(arg1, arg0, arg2);
    if (var_s6 == 1) {
        var_s3 = func_001B6AB0(arg1, arg0);
        var_s4 = &(*var_s3)[arg2];
        var_s7 = 0;
        return *var_s4;
    }
    if (var_s6 == 0) {
        var_s5 = func_001B0610(arg1, arg0);
        if (var_s5 != 0) {
            var_s0 = var_s5->unk_00;
            temp_s2 = var_s5->unk_04;
            var_s1 = 0;
            while (var_s1 < temp_s2 && arg2 > func_001B0AE0(var_s0)) {
                var_s0++;
                var_s1++;
            }
            if (var_s1 < temp_s2 && arg2 == func_001B0AE0(var_s0)) {
                var_s3 = func_001B6AB0(arg1, arg0);
                var_s4 = &(*var_s3)[arg2];
                var_s7 = 0;
                return *var_s4;
            }
        }
    }
    return 0;
}
