/* profile: o0_p */
#include "common.h"

typedef struct {
    f32 unk_00, unk_04, unk_08;
} unk_func_00216C60_0;

typedef struct {
    unk_func_00216C60_0 unk_00;
    s32 unk_0C;
} unk_func_00216C60_1;

s32 *fn_p_stEvalTree(s32, s32 *, unk_func_00216C60_1 *);
f32 func_001156B8(f32);
f32 func_00151360(f32);
f32 func_001E60E0(f32);
s32 *func_001EB830(s32 *);

s32 *func_00216C60(s32 arg0, s32 *arg1, unk_func_00216C60_1 *arg2)
{
    unk_func_00216C60_0 sp50, sp60, sp70;
    f32 sp80, sp84, sp88, sp8C, sp90, sp94;
    s32 temp0 = arg1[-2];
    u8 temp1 = 0;
    u8 temp2;

    arg1 = fn_p_stEvalTree(arg0, arg1, arg2);
    sp50 = arg2->unk_00;
    arg1 = fn_p_stEvalTree(arg0, arg1, arg2);
    sp60 = arg2->unk_00;

    if (!((sp50.unk_00 > 0.0f ? sp50.unk_00 : -sp50.unk_00) < 0.00001f &&
        (sp50.unk_04 > 0.0f ? sp50.unk_04 : -sp50.unk_04) < 0.00001f &&
        (sp50.unk_08 > 0.0f ? sp50.unk_08 : -sp50.unk_08) < 0.00001f)) {
        sp90 = func_001E60E0(func_00151360(sp50.unk_08) +
                              (func_00151360(sp50.unk_00) + func_00151360(sp50.unk_04)));
        if (0.0f != sp90) {
            sp90 = 1.0f / sp90;
            sp50.unk_00 = sp90 * sp50.unk_00;
            sp50.unk_04 = sp90 * sp50.unk_04;
            sp50.unk_08 = sp90 * sp50.unk_08;
        } else {
            sp50 = sp50;
        }
    } else {
        temp1 = 1;
    }

    if (!((sp60.unk_00 > 0.0f ? sp60.unk_00 : -sp60.unk_00) < 0.00001f &&
        (sp60.unk_04 > 0.0f ? sp60.unk_04 : -sp60.unk_04) < 0.00001f &&
        (sp60.unk_08 > 0.0f ? sp60.unk_08 : -sp60.unk_08) < 0.00001f)) {
        sp94 = func_001E60E0(func_00151360(sp60.unk_08) +
                              (func_00151360(sp60.unk_00) + func_00151360(sp60.unk_04)));
        if (0.0f != sp94) {
            sp94 = 1.0f / sp94;
            sp60.unk_00 = sp94 * sp60.unk_00;
            sp60.unk_04 = sp94 * sp60.unk_04;
            sp60.unk_08 = sp94 * sp60.unk_08;
        } else {
            sp60 = sp60;
        }
    } else {
        temp1 = 1;
    }

    switch (temp0) {
    case 0xF8:
        if (temp1) {
            arg1 = func_001EB830(arg1);
            sp88 = 0.0f;
        } else {
            arg1 = fn_p_stEvalTree(arg0, arg1, arg2);
            temp2 = *(u8 *)arg2;
            sp84 = sp50.unk_08 * sp60.unk_08 +
                   (sp50.unk_00 * sp60.unk_00 + sp50.unk_04 * sp60.unk_04);
            if (sp84 > 1.0f) {
                sp84 = 1.0f;
            } else if (sp84 < -1.0f) {
                sp84 = -1.0f;
            }
            sp88 = func_001156B8(sp84);
            switch (temp2) {
            case 0:
                sp8C = sp50.unk_00 * sp60.unk_04 - sp50.unk_04 * sp60.unk_00;
                if (sp8C < 0.0f) {
                    sp88 = -sp88;
                }
                break;
            case 1:
                sp8C = sp50.unk_04 * sp60.unk_08 - sp50.unk_08 * sp60.unk_04;
                if (sp8C < 0.0f) {
                    sp88 = -sp88;
                }
                break;
            case 2:
                sp8C = sp50.unk_08 * sp60.unk_00 - sp50.unk_00 * sp60.unk_08;
                if (sp8C < 0.0f) {
                    sp88 = -sp88;
                }
                break;
            }
            sp88 = 57.29578f * sp88;
        }
        arg2->unk_00.unk_00 = sp88;
        arg2->unk_0C = 8;
        break;
    case 0xF9:
        if (temp1) {
            sp84 = 1.0f;
        } else {
            sp84 = sp50.unk_08 * sp60.unk_08 +
                   (sp50.unk_00 * sp60.unk_00 + sp50.unk_04 * sp60.unk_04);
            if (sp84 > 1.0f) {
                sp84 = 1.0f;
            } else if (sp84 < -1.0f) {
                sp84 = -1.0f;
            }
        }
        arg2->unk_00.unk_00 = sp84;
        arg2->unk_0C = 8;
        break;
    case 0xFA:
        if (temp1) {
            arg1 = func_001EB830(arg1);
            sp80 = 0.0f;
        } else {
            arg1 = fn_p_stEvalTree(arg0, arg1, arg2);
            temp2 = *(u8 *)arg2;
            sp70.unk_00 = sp50.unk_04 * sp60.unk_08 - sp50.unk_08 * sp60.unk_04;
            sp70.unk_04 = sp50.unk_08 * sp60.unk_00 - sp50.unk_00 * sp60.unk_08;
            sp70.unk_08 = sp50.unk_00 * sp60.unk_04 - sp50.unk_04 * sp60.unk_00;
            sp80 = func_001E60E0(func_00151360(sp70.unk_08) +
                                 (func_00151360(sp70.unk_00) + func_00151360(sp70.unk_04)));
            switch (temp2) {
            case 0:
                if (sp70.unk_08 < 0.0f) {
                    sp80 = -sp80;
                }
                break;
            case 1:
                if (sp70.unk_00 < 0.0f) {
                    sp80 = -sp80;
                }
                break;
            case 2:
                if (sp70.unk_04 < 0.0f) {
                    sp80 = -sp80;
                }
                break;
            }
            if (sp80 > 1.0f) {
                sp80 = 1.0f;
            } else if (sp80 < -1.0f) {
                sp80 = -1.0f;
            }
        }
        arg2->unk_00.unk_00 = sp80;
        arg2->unk_0C = 8;
        break;
    }
    return arg1;
}
