/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_002047B0_0 {
    u8 pad_00[4];
    s32 unk_04;
} unk_func_002047B0_0;

typedef union unk_func_002047B0_1 {
    unk_func_002047B0_0 *unk_00;
    s8 unk_00_b;
} unk_func_002047B0_1;

void *fn_h_StandardGameGetSuperObject();
s32 *fn_p_stEvalTree();
u8 func_001B2540(void *, u8, u8, void *);
u8 func_001B25C0();
u8 func_001ED480(void *, u8, s32);

s32 *func_002047B0(s32 arg0, s32 *arg1, s32 *arg2) {
    void *obj1 = 0;
    void *obj2 = 0;
    s32 op;
    u8 c;
    u8 b1;
    u8 b2;
    u8 b3;
    unk_func_002047B0_1 param[4];

    op = arg1[-2];
    arg1 = fn_p_stEvalTree(arg0, arg1, param);
    obj1 = fn_h_StandardGameGetSuperObject(param[0].unk_00->unk_04);
    arg1 = fn_p_stEvalTree(arg0, arg1, param);
    switch (op) {
    case 10:
    case 11:
        b1 = (op == 10) ? 0 : 1;
        b2 = param[0].unk_00_b;
        arg1 = fn_p_stEvalTree(arg0, arg1, param);
        obj2 = fn_h_StandardGameGetSuperObject(param[0].unk_00->unk_04);
        if (obj1 != 0) {
            *arg2 = func_001B2540(obj1, b1, b2, obj2);
        } else {
            *arg2 = 0;
        }
        return arg1;
    case 12:
        obj2 = fn_h_StandardGameGetSuperObject(param[0].unk_00->unk_04);
        if (obj1 != 0 && obj2 != 0) {
            *arg2 = func_001B25C0(obj1, obj2);
        } else {
            *arg2 = 0;
        }
        return arg1;
    case 13:
    case 14:
        c = 0;
        b3 = (op == 13) ? 0 : 1;
        c = param[0].unk_00_b;
        if (obj1 != 0) {
            *arg2 = func_001ED480(obj1, b3, c);
        } else {
            *arg2 = 0;
        }
        return arg1;
    default:
        *arg2 = 0;
        return arg1;
    }
}
