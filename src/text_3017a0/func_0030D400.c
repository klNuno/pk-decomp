#include "common.h"

typedef struct unk_func_0030D400_0 {
    u8 pad_00[0x58];
    struct unk_func_0030D400_0 *unk_58;
} unk_func_0030D400_0;

unk_func_0030D400_0 *func_002D2BC0();
void func_00308B80();
void func_00308BE0();
extern unk_func_0030D400_0 *D_00360868;
extern s32 D_0036086C;
extern s32 D_00360870;

unk_func_0030D400_0 *func_0030D400(void) {
    unk_func_0030D400_0 *p;

    if (D_00360870 != 0) {
        func_00308BE0(D_00360870);
    }
    p = D_00360868;
    if (p != NULL) {
        D_00360868 = p->unk_58;
    } else {
        D_0036086C++;
        p = func_002D2BC0(0x60);
    }
    if (D_00360870 != 0) {
        func_00308B80(D_00360870);
    }
    return p;
}
