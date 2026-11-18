/* profile: o0_301 */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_0022DF20_0;

typedef struct {
    u8 pad_00[0x24];
    unk_func_0022DF20_0 unk_24;
    unk_func_0022DF20_0 unk_30;
} unk_func_0022DF20_1;

typedef struct {
    u8 pad_00[8];
    s32 unk_08;
} unk_func_0022DF20_2;

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} unk_func_0022DF20_3;

typedef union {
    unk_func_0022DF20_0 unk_00;
    u8 pad_00[0x18];
} unk_func_0022DF20_4;

extern unk_func_0022DF20_2 *HIE_fn_hGetSuperObjectObject(s32);
extern s32 *fn_p_stEvalTree(s32, s32 *, unk_func_0022DF20_4 *);
extern s32 fn_ucGetProcedureUltraOperator(s32);
extern void fn_vGetUltraOperatorPerso(s32, s32, s32 *);
extern unk_func_0022DF20_1 *func_00138800(s32);
extern s32 func_001B84B0(s32);

s32 *func_0022DF20(s32 arg0, s32 *arg1) {
    s32 sp88;
    f32 temp;
    unk_func_0022DF20_0 sp78;
    unk_func_0022DF20_4 sp60;
    s32 s2;
    s32 s3;
    unk_func_0022DF20_0 *s1;
    s32 s0;

    s3 = arg1[-2];
    fn_vGetUltraOperatorPerso(fn_ucGetProcedureUltraOperator(s3), arg0, &sp88);
    arg1 = fn_p_stEvalTree(arg0, arg1, &sp60);
    s1 = &sp60.unk_00;
    s2 = HIE_fn_hGetSuperObjectObject(sp88)->unk_08;
    if (s2 == 0) {
        return arg1;
    }
    s0 = func_001B84B0(s2);
    switch (s3) {
        case 0x133:
            sp78 = func_00138800(s0)->unk_24;
            temp = s1->unk_00;
            if (!(temp <= 0.0f)) {
                sp78.unk_00 = temp;
            }
            temp = s1->unk_04;
            if (!(temp <= 0.0f)) {
                sp78.unk_04 = temp;
            }
            temp = s1->unk_08;
            if (!(temp <= 0.0f)) {
                sp78.unk_08 = temp;
            }
            ((unk_func_0022DF20_3 *)&func_00138800(s0)->unk_24)->unk_00 = ((unk_func_0022DF20_3 *)&sp78)->unk_00;
            ((unk_func_0022DF20_3 *)&func_00138800(s0)->unk_24)->unk_04 = ((unk_func_0022DF20_3 *)&sp78)->unk_04;
            ((unk_func_0022DF20_3 *)&func_00138800(s0)->unk_24)->unk_08 = ((unk_func_0022DF20_3 *)&sp78)->unk_08;
            break;
        case 0x135:
            ((unk_func_0022DF20_3 *)&func_00138800(s0)->unk_30)->unk_00 = ((unk_func_0022DF20_3 *)s1)->unk_00;
            ((unk_func_0022DF20_3 *)&func_00138800(s0)->unk_30)->unk_04 = ((unk_func_0022DF20_3 *)s1)->unk_04;
            ((unk_func_0022DF20_3 *)&func_00138800(s0)->unk_30)->unk_08 = ((unk_func_0022DF20_3 *)s1)->unk_08;
            break;
        case 0x137:
            sp78.unk_00 = s1->unk_00 + func_00138800(s0)->unk_30.unk_00;
            sp78.unk_04 = s1->unk_04 + func_00138800(s0)->unk_30.unk_04;
            sp78.unk_08 = s1->unk_08 + func_00138800(s0)->unk_30.unk_08;
            ((unk_func_0022DF20_3 *)&func_00138800(s0)->unk_30)->unk_00 = ((unk_func_0022DF20_3 *)&sp78)->unk_00;
            ((unk_func_0022DF20_3 *)&func_00138800(s0)->unk_30)->unk_04 = ((unk_func_0022DF20_3 *)&sp78)->unk_04;
            ((unk_func_0022DF20_3 *)&func_00138800(s0)->unk_30)->unk_08 = ((unk_func_0022DF20_3 *)&sp78)->unk_08;
            break;
    }
    return arg1;
}
