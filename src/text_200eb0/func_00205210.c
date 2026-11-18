/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_00205210_0 {
    u8 pad_00[0x24];
    s32 unk_24;
} unk_func_00205210_0;

typedef struct unk_func_00205210_1 {
    u8 pad_00[4];
    s32 unk_04;
    u8 pad_08[0x78];
    unk_func_00205210_0 unk_80;
} unk_func_00205210_1;

typedef struct unk_func_00205210_2 {
    u8 pad_00[4];
    s32 unk_04;
} unk_func_00205210_2;

void *fn_h_StandardGameGetSuperObject();
s32 *fn_p_stEvalTree();
void fn_vGetUltraOperatorPerso();
void *func_00149900();
unk_func_00205210_1 *func_001F19D0();
s32 func_00208B20();

s32 *func_00205210(s32 arg0, s32 *arg1, s32 *arg2) {
    s32 op;
    void *obj;
    unk_func_00205210_1 *p;
    unk_func_00205210_0 *sub;
    s32 h;
    unk_func_00205210_2 *param[7];
    s32 perso;

    op = arg1[-2];
    fn_vGetUltraOperatorPerso(func_00208B20(op), arg0, &perso);
    arg1 = fn_p_stEvalTree(arg0, arg1, param);
    obj = fn_h_StandardGameGetSuperObject(param[0]->unk_04);
    if ((p = func_001F19D0(perso)) == NULL) {
        *arg2 = 0;
        return arg1;
    }
    if ((p->unk_04 & 0x10000) == 0x10000) {
        sub = &p->unk_80;
        h = sub->unk_24;
        if (h != 0) {
            *arg2 = func_00149900(h) == obj;
            return arg1;
        }
    }
    *arg2 = 0;
    return arg1;
}
