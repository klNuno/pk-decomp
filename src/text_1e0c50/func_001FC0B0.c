/* profile: o0_301 */
#include "common.h"

typedef struct {
    s32 unk_00[3];
} unk_func_001FC0B0_0;

typedef struct {
    u8 pad_00[0x72];
    u16 unk_72;
} unk_func_001FC0B0_1;

typedef struct {
    u8 pad_00[4];
    unk_func_001FC0B0_1 *unk_04;
    unk_func_001FC0B0_1 *unk_08;
    unk_func_001FC0B0_1 *unk_0C;
    u8 pad_10[0x18];
    unk_func_001FC0B0_0 unk_28;
    unk_func_001FC0B0_0 unk_34;
    unk_func_001FC0B0_0 unk_40;
    unk_func_001FC0B0_0 unk_4C;
} unk_func_001FC0B0_2;

typedef struct {
    u8 pad_00[0x10];
    unk_func_001FC0B0_2 *unk_10;
} unk_func_001FC0B0_3;

s32 fn_ucGetProcedureUltraOperator();
void fn_vGetUltraOperatorPerso();
unk_func_001FC0B0_3 *HIE_fn_hGetSuperObjectObject();
s32 *fn_p_stEvalTree(s32, s32 *, unk_func_001FC0B0_0 *);
void func_001FD710(unk_func_001FC0B0_2 *, u16 *, u16 *, u16 *, s32, s32, u16);

#define COPY(dst, src) \
    ((s32 *)(dst))[0] = ((const s32 *)(src))[0]; \
    ((s32 *)(dst))[1] = ((const s32 *)(src))[1]; \
    ((s32 *)(dst))[2] = ((const s32 *)(src))[2]

s32 *func_001FC0B0(s32 arg0, s32 *arg1) {
    unk_func_001FC0B0_2 *obj;
    unk_func_001FC0B0_0 *p;
    s32 flag;
    u16 mask;
    s32 op;
    s32 first;
    unk_func_001FC0B0_0 eval;
    unk_func_001FC0B0_0 vec;
    s32 perso;

    mask = 0;
    op = arg1[-2];
    fn_vGetUltraOperatorPerso(fn_ucGetProcedureUltraOperator(op), arg0, &perso);
    obj = HIE_fn_hGetSuperObjectObject(perso)->unk_10;
    arg1 = fn_p_stEvalTree(arg0, arg1, &eval);
    first = eval.unk_00[0];
    arg1 = fn_p_stEvalTree(arg0, arg1, &eval);
    flag = eval.unk_00[0];
    arg1 = fn_p_stEvalTree(arg0, arg1, &eval);
    p = &eval;
    COPY(&vec, p);
    switch (op) {
    case 0x263:
        if (flag == 1) {
            COPY(&obj->unk_28, p);
        }
        mask = 0x1000;
        break;
    case 0x264:
        if (flag == 1) {
            COPY(&obj->unk_34, p);
        }
        mask = 0x2000;
        break;
    case 0x265:
        arg1 = fn_p_stEvalTree(arg0, arg1, &eval);
        p = &eval;
        if (flag == 1) {
            COPY(&obj->unk_40, &vec);
            COPY(&obj->unk_4C, p);
        }
        mask = 0x4000;
        break;
    }
    func_001FD710(obj, &obj->unk_04->unk_72, &obj->unk_08->unk_72, &obj->unk_0C->unk_72,
                  first, flag, mask);
    return arg1;
}
