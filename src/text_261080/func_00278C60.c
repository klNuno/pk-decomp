/* profile: opt_noprop */
#include "common.h"

typedef struct unk_func_00278C60_0 {
    u8 pad_00[8];
    s32 unk_08;
} unk_func_00278C60_0;

typedef struct unk_func_00278C60_1 {
    u8 pad_00[0x28008];
    s32 unk_28008;
} unk_func_00278C60_1;

typedef struct unk_func_00278C60_2 {
    u8 pad_00[4];
    s32 unk_04;
} unk_func_00278C60_2;

typedef struct unk_func_00278C60_3 {
    u8 pad_00[0x18];
    s32 unk_18;
    u8 pad_1C[0x14];
} unk_func_00278C60_3;

s32 func_00107F60();
s32 func_0010AF60();
s32 func_002774A0();
void func_00279250();
s32 func_00279290();
void func_002792F0();
s32 func_00279370();
s32 func_002793F0();
s32 func_0027AB10();
s32 func_0027AB70();
s32 func_0027AD40();
void func_0027AD50();
void func_0031A1D0();
s32 func_0031A210();
void func_0031A220();
extern s32 D_00360344;
extern char D_007A81C0[];
extern char D_007A81E0[];

#define M_0031A210() \
    { \
        unk_func_00278C60_3 spD0; \
        func_0031A220(func_0031A210(), &spD0); \
        func_0031A1D0(spD0.unk_18); \
    }

s32 func_00278C60(unk_func_00278C60_0 *arg0, unk_func_00278C60_1 *arg1, unk_func_00278C60_2 *arg2, s32 arg3) {
    s32 var_s7;
    s32 var_s6;
    s32 var_s5;
    s32 var_s0;
    s32 var_s1;
    unk_func_00278C60_1 *temp_s2 = arg1;
    unk_func_00278C60_0 *temp_s3 = arg0;
    s32 temp_s4;
    s32 temp_v0;
    s32 temp_v1;
    u8 spB0[0x20];
    s32 sp168;
    s32 sp16C;

    var_s7 = 0;
    var_s6 = 0;
    var_s0 = 0;
    var_s1 = arg2->unk_04;
    var_s5 = var_s1;
    while (var_s1 > 4 && func_0027AD40(temp_s3) != 3) {
        if (arg3 != 0 && func_0010AF60(0, 0, spB0) > 0) {
            D_00360344 = ((spB0[2] << 8) | spB0[3]) ^ 0xFFFF;
        } else {
            D_00360344 = 0;
        }
        temp_v1 = D_00360344 & (var_s6 ^ D_00360344) & 0x8F0;
        var_s6 = D_00360344;
        if ((temp_v1 == 0x800 || temp_v1 == 0x40) && temp_s3->unk_08 > 10) {
            func_0027AD50(D_007A81E0);
        }
        temp_v0 = func_00279370(temp_s2, &sp168);
        if (var_s5 > 0 && temp_v0 >= 0x8000) {
            temp_s4 = func_002793F0(arg2, sp168, 0x8000);
            if (temp_s4 >= 0) {
                func_002792F0(temp_s2, temp_s4);
                var_s5 -= temp_s4;
            } else {
                func_0027AD50(D_007A81E0);
                return 0;
            }
        }
        temp_v0 = func_00279370(temp_s2, &sp168);
        if (var_s0 == 0 && temp_v0 == 0) {
            var_s0 = 1;
        }
        if (var_s0 != 0) {
            temp_v0 = func_00279290(temp_s2, &sp16C);
            if (temp_v0 > 0) {
                temp_s4 = func_00107F60(temp_s3, sp16C, temp_v0, temp_s2, temp_s2->unk_28008);
                func_00279250(temp_s2, temp_s4);
                var_s1 -= temp_s4;
            }
        }
        M_0031A210();
        if (var_s7 == 0 && func_002774A0(D_007A81C0) != 0) {
            var_s7 = 1;
        }
    }
    while (func_0027AB70(temp_s3) == 0) {
        M_0031A210();
    }
    while (func_0027AB10(temp_s3) == 0 && func_0027AD40(temp_s3) != 3) {
        M_0031A210();
    }
    return 1;
}
