/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_00220220_0 {
    s32 unk_00;
    u8 pad_04[8];
    s32 unk_0C;
    u8 pad_10[0xC];
} unk_func_00220220_0;

typedef struct unk_func_00220220_1 {
    u8 pad_00[4];
    u8 *unk_04;
} unk_func_00220220_1;

typedef struct unk_func_00220220_2 {
    unk_func_00220220_1 **unk_00;
    u8 pad_04[4];
    u8 *unk_08;
} unk_func_00220220_2;

typedef struct unk_func_00220220_3 {
    u8 pad_00[0xC];
    unk_func_00220220_2 *unk_0C;
} unk_func_00220220_3;

typedef struct unk_func_00220220_4 {
    u8 pad_00[0xC];
    s32 unk_0C;
} unk_func_00220220_4;

u8 *fn_p_stEvalTree(s32, u8 *, unk_func_00220220_0 *);
char *fn_szGetStringFromTextOrStringParam(unk_func_00220220_0 *);
u8 *fn_p_stOperatorGetPerso(s32, u8 *, s32 *);
unk_func_00220220_4 *HIE_fn_hGetSuperObjectObject(s32);
unk_func_00220220_3 *fn_p_stBrainGetMind(s32);
s16 func_001DA020(u8 *, s32, char *, s32);

u8 *func_00220220(s32 arg0, u8 *arg1, unk_func_00220220_0 *arg2) {
    unk_func_00220220_3 *mind;
    u8 idx;
    char *str;
    s32 res;
    unk_func_00220220_0 param;
    s32 perso;

    arg1 = fn_p_stEvalTree(arg0, arg1, &param);
    str = fn_szGetStringFromTextOrStringParam(&param);
    if (arg1[7] == 2) {
        arg1 += 8;
        arg1 = fn_p_stOperatorGetPerso(arg0, arg1, &perso);
    } else {
        perso = arg0;
    }
    mind = fn_p_stBrainGetMind(HIE_fn_hGetSuperObjectObject(perso)->unk_0C);
    idx = *(s8 *)arg1;
    arg1 += 8;
    res = func_001DA020(mind->unk_0C->unk_08 + *(s32 *)((*mind->unk_0C->unk_00)->unk_04 + idx * 16), 4, str, 1);
    arg2->unk_00 = res;
    arg2->unk_0C = 6;
    return arg1;
}
