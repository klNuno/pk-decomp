/* profile: o0_301_p */
#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
} __attribute__((aligned(16))) unk_Q_0;

void *HIE_fn_hGetSuperObjectObject();
s32 *fn_p_stEvalTree();
void func_0019C600(void *, u16, u8);
extern unk_Q_0 D_00605670;

s32 *func_00225930(s32 arg0, s32 *arg1) {
    unk_Q_0 v = D_00605670;
    s32 i;
    s32 temp;

    temp = arg1[-2];
    if (temp != 0xF3) {
        arg1 = fn_p_stEvalTree(arg0, arg1, &v);
    }
    switch (temp) {
    case 0x73:
        i = v.unk_00;
        for (i--; i >= 0; i--) {
            func_0019C600(HIE_fn_hGetSuperObjectObject(arg0), i, 1);
        }
        return arg1;
    case 0x72:
        i = v.unk_00;
        func_0019C600(HIE_fn_hGetSuperObjectObject(arg0), i, 1);
        return arg1;
    case 0x74:
        i = v.unk_00;
        func_0019C600(HIE_fn_hGetSuperObjectObject(arg0), i, 0);
        return arg1;
    case 0xF3:
        func_0019C600(HIE_fn_hGetSuperObjectObject(arg0), 0xFFFF, 0);
        return arg1;
    }
    return arg1;
}
