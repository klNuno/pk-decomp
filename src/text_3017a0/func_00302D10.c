#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} unk_func_00302D10_0;

unk_func_00302D10_0 *func_00302D70();
extern s32 D_0035C728[];
extern s32 D_0035C72C[];

void func_00302D10(void) {
    unk_func_00302D10_0 *temp;
    s32 temp2;

    temp = func_00302D70();
    temp2 = D_0035C728[0] == temp->unk_04 && D_0035C72C[0] == temp->unk_08;
    if (!temp2) {
        temp->unk_00++;
    }
}
