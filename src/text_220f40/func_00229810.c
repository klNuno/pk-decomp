/* profile: o0_301 */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_00229810_0;

typedef struct {
    u8 pad_00[0x4];
    s32 unk_04;
} unk_func_00229810_1;

typedef union {
    unk_func_00229810_1 *unk_00;
    s8 unk_00_s8;
    unk_func_00229810_0 unk_00_v;
} unk_func_00229810_2;

typedef struct {
    unk_func_00229810_2 unk_00;
    u8 pad_0C[0x10];
} unk_func_00229810_3;

typedef struct {
    s32 unk_00;
    s32 unk_04;
    u8 unk_08;
    u8 pad_09[0x3];
    unk_func_00229810_0 unk_0C;
    u8 pad_18[0x8];
    u8 unk_20;
    u8 pad_21[0x3];
} unk_func_00229810_4;

s32 fn_h_StandardGameGetSuperObject(s32);
s32 *fn_p_stEvalTree(s32, s32 *, unk_func_00229810_3 *);
s32 fn_ucGetProcedureUltraOperator(s32);
void fn_vGetUltraOperatorPerso(s32, s32, s32 *);
s32 *func_001EB720(s32 *);
extern u16 D_003601B8;
extern unk_func_00229810_4 D_00605970[];

s32 *func_00229810(s32 arg0, s32 *arg1) {
    unk_func_00229810_3 param;
    s32 perso;
    unk_func_00229810_4 *e;
    s32 op;

    op = arg1[-2];
    perso = arg0;
    if (D_003601B8 >= 20) {
        return func_001EB720(arg1);
    }
    e = &D_00605970[D_003601B8];
    fn_vGetUltraOperatorPerso(fn_ucGetProcedureUltraOperator(op), arg0, &perso);
    e->unk_00 = perso;
    arg1 = fn_p_stEvalTree(arg0, arg1, &param);
    e->unk_04 = fn_h_StandardGameGetSuperObject(param.unk_00.unk_00->unk_04);
    if (e->unk_04 == perso) {
        return func_001EB720(arg1);
    }
    arg1 = fn_p_stEvalTree(arg0, arg1, &param);
    e->unk_08 = param.unk_00.unk_00_s8;
    if (e->unk_08 == 0xFF) {
        return func_001EB720(arg1);
    }
    arg1 = fn_p_stEvalTree(arg0, arg1, &param);
    e->unk_0C = param.unk_00.unk_00_v;
    e->unk_20 = 0;
    D_003601B8++;
    return arg1;
}
