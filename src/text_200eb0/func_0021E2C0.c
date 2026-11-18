/* profile: o0_301 */
#include "common.h"

typedef struct {
    u8 pad_00[0xC];
    s32 unk_0C;
} unk_func_0021E2C0_0;

unk_func_0021E2C0_0 *HIE_fn_hGetSuperObjectObject(s32);
void fn_vGetUltraOperatorPerso(s32, s32, s32 *);
s32 func_00161FF0(s32);
s32 func_00162090(s32);
u16 func_00162330(s32);
typedef struct {
    u8 pad_00[0x50];
    s32 unk_50;
} unk_func_0021E2C0_1;

unk_func_0021E2C0_1 *func_001F19D0(s32);
s32 func_00208CC0(s32);
s32 func_0021E480(s32);

s32 *func_0021E2C0(s32 arg0, s32 *arg1, s32 *arg2) {
    s32 sp7C;
    s32 temp_s1;
    s32 var_s0;
    unk_func_0021E2C0_1 *var_s4;
    s32 var_s2;
    u16 var_s3;
    s32 var_s5;

    temp_s1 = arg1[-2];
    var_s0 = 0xCDCDCDCD;
    fn_vGetUltraOperatorPerso(func_00208CC0(temp_s1), arg0, &sp7C);
    switch (temp_s1) {
    case 0x110:
    case 0x111:
        if ((var_s5 = HIE_fn_hGetSuperObjectObject(sp7C)->unk_0C) != 0) {
            var_s0 = func_0021E480(var_s5);
            if (func_00162090(var_s0) != 0) {
                if (temp_s1 == 0x110) {
                    var_s2 = func_00161FF0(var_s0);
                    var_s3 = 0;
                    if (var_s2 != -1) {
                        var_s3 = func_00162330(var_s2);
                    }
                    arg2[0] = var_s3;
                    arg2[3] = 0x1A;
                }
            } else {
                arg2[0] = 0;
            }
            arg2[3] = 0x1A;
        }
        return arg1;
    case 0x112: {
        if ((var_s4 = func_001F19D0(sp7C)) != 0) {
            var_s0 = var_s4->unk_50;
        }
    }
    default:
        arg2[0] = var_s0;
        arg2[3] = 0x26;
        return arg1;
    }
}
