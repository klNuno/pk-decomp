/* profile: o0_301_p */
#include "common.h"

typedef struct unk_func_0021F5D0_0 {
    u8 pad_00[0xC];
    s32 unk_0C;
} unk_func_0021F5D0_0;

typedef struct unk_func_0021F5D0_1 {
    s32 unk_00;
    u8 pad_04[8];
    s32 unk_0C;
} unk_func_0021F5D0_1;

unk_func_0021F5D0_0 *HIE_fn_hGetSuperObjectObject(s32);
s32 fn_p_stBrainGetMind(s32);
s8 *fn_p_stOperatorGetPerso(s32, s8 *, s32 *);
u8 fn_ucGetDsgVar(u8, u8, s32, s32 *);
s32 func_001971C0(s32);
u8 func_001EA0D0(u8, u8, s32, s32 *);
s32 func_0021F470(s32 *);

s8 *func_0021F5D0(s32 arg0, s8 *arg1, unk_func_0021F5D0_1 *arg2) {
    s32 sp70[4];
    s32 sp80[4];
    s32 sp9C;
    s32 i;
    u8 temp_s1;
    s32 temp_s2;
    s32 temp_s3;
    s32 temp_s4;
    s32 temp_s5;

    temp_s5 = ((s32 *)arg1)[-2];
    temp_s4 = 0;
    switch (temp_s5) {
    case 0x65:
        i = 0;
        temp_s4 = func_0021F470(sp80);
        for (i = 0; i < 4; i++) {
            if (((u8 *)arg1)[7] == 2) {
                arg1 += 8;
                arg1 = fn_p_stOperatorGetPerso(arg0, arg1, &sp9C);
            } else {
                sp9C = arg0;
            }
            temp_s2 = fn_p_stBrainGetMind(HIE_fn_hGetSuperObjectObject(sp9C)->unk_0C);
            temp_s1 = *arg1;
            arg1 += 8;
            if (fn_ucGetDsgVar(temp_s1, 0, temp_s2, sp70) == 1) {
                if (sp80[i] == 0) {
                    sp70[0] = 0;
                } else {
                    if (func_001971C0(sp80[i]) != 2) {
                        temp_s3 = 0;
                    } else {
                        temp_s3 = (s32)HIE_fn_hGetSuperObjectObject(sp80[i]);
                    }
                    sp70[0] = temp_s3;
                }
                temp_s1 = func_001EA0D0(temp_s1, 0, temp_s2, sp70);
            }
        }
        arg2->unk_00 = temp_s4;
        arg2->unk_0C = 6;
        break;
    }
    return arg1;
}
