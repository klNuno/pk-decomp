/* profile: o0_301_p */
#include "common.h"

typedef struct unk_func_00230380_0 {
    s32 unk_00;
    u8 pad_04[4];
} unk_func_00230380_0;

typedef struct unk_func_00230380_1 {
    union {
        s32 unk_00;
        s32 *unk_00_p;
        u8 *unk_00_u8p;
    } unk_00;
    u8 pad_04[0x18];
} unk_func_00230380_1;

typedef struct unk_func_00230380_2 {
    u8 pad_00[0x14];
    struct unk_func_00230380_2 *unk_14;
} unk_func_00230380_2;

typedef struct unk_func_00230380_3 {
    u8 pad_00[8];
    unk_func_00230380_2 *unk_08;
    u8 pad_0C[0x10];
    s32 unk_1C;
} unk_func_00230380_3;

typedef struct unk_func_00230380_4 {
    u8 pad_00[8];
    s32 unk_08;
} unk_func_00230380_4;

unk_func_00230380_4 *HIE_fn_hGetSuperObjectObject(unk_func_00230380_3 *);
s32 fn_h_StandardGameGetSuperObject(s32);
unk_func_00230380_0 *fn_p_stEvalTree(s32, unk_func_00230380_0 *, unk_func_00230380_1 *);
u8 fn_ucGetProcedureUltraOperator(s32);
void fn_vGetUltraOperatorPerso(u8, s32, unk_func_00230380_3 **);
void func_0012D6F0(unk_func_00230380_3 *, s32, s32);
void func_00148D00(s32, unk_func_00230380_3 *);
void func_00148D70(s32, unk_func_00230380_3 *, s32);
s32 func_001971C0(unk_func_00230380_2 *);
void func_001A2AD0(unk_func_00230380_3 *);
s32 func_001B84B0(s32);
s32 func_001BFBF0(unk_func_00230380_3 *);
void func_001EC3E0(u8 *, unk_func_00230380_2 *);
s32 func_002241B0(s32);

unk_func_00230380_0 *func_00230380(s32 arg0, unk_func_00230380_0 *arg1) {
    unk_func_00230380_1 temp;
    unk_func_00230380_3 *perso;
    s32 obj;
    unk_func_00230380_2 *node;
    s32 sub;
    s32 so;
    unk_func_00230380_2 *first;
    u8 *res;
    s32 i;
    unk_func_00230380_2 *next;
    s32 op;

    op = arg1[-1].unk_00;
    fn_vGetUltraOperatorPerso(fn_ucGetProcedureUltraOperator(op), arg0, &perso);
    obj = HIE_fn_hGetSuperObjectObject(perso)->unk_08;
    if (obj != 0) {
        sub = func_001B84B0(obj);
    } else {
        sub = 0;
    }
    switch (op) {
    case 0x14E:
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp);
        if (temp.unk_00.unk_00 == 0) {
            func_0012D6F0(perso, perso->unk_1C, func_001BFBF0(perso));
        } else {
            so = fn_h_StandardGameGetSuperObject(temp.unk_00.unk_00_p[1]);
            if (sub != 0 && func_002241B0(sub) != 0) {
                func_00148D70(sub, perso, so);
            } else {
                func_0012D6F0(perso, so, 0);
            }
        }
        break;
    case 0x14F:
        if (sub != 0 && func_002241B0(sub) != 0) {
            func_00148D00(sub, perso);
        } else {
            func_001A2AD0(perso);
        }
        break;
    case 0x150:
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp);
        res = temp.unk_00.unk_00_u8p;
        res[0] = 0;
        if (res[1] > 0) {
            i = 0;
            node = perso->unk_08;
            first = node;
            while (node != NULL) {
                if (node != NULL && func_001971C0(node) == 2) {
                    func_001EC3E0(res, node);
                    if (res[0] == res[1]) {
                        return arg1;
                    }
                }
                i++;
                next = node = node->unk_14;
                (void)next;
            }
        }
        break;
    }
    return arg1;
}
