#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
} unk_func_002E7540_0;

s32 func_00303380();
void func_00302FF0();
extern s32 D_0035C728[];
extern s32 D_0035C72C[];

void func_002E7540(unk_func_002E7540_0 *arg0) {
    s32 eq;

    eq = D_0035C728[0] == arg0->unk_04;
    if (eq) {
        eq = D_0035C72C[0] == arg0->unk_08;
    }
    if (!eq) {
        arg0->unk_00--;
        if (arg0->unk_00 == 0 && arg0->unk_0C == 0) {
            func_00302FF0(func_00303380(), arg0);
        }
    }
}
