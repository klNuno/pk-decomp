#include "common.h"

typedef struct unk_func_00303DF0_0 {
    struct unk_func_00303DF0_0 *unk_00;
    struct unk_func_00303DF0_0 *unk_04;
    u32 unk_08;
    s32 unk_0C;
} unk_func_00303DF0_0;

typedef struct unk_func_00303DF0_1 {
    s32 unk_00;
    s32 unk_04;
    unk_func_00303DF0_0 *unk_08;
} unk_func_00303DF0_1;

typedef struct unk_func_00303DF0_2 {
    u8 pad_00[0xC];
    s32 unk_0C;
} unk_func_00303DF0_2;

extern unk_func_00303DF0_2 *D_0032F73C[];
extern char D_0035CD00[];

void func_00118218(s32, char *);
void func_00116450();
unk_func_00303DF0_0 *func_002D2BC0(s32);
void func_002CEFD0(unk_func_00303DF0_0 *, s32);

unk_func_00303DF0_0 *func_00303DF0(unk_func_00303DF0_1 *arg0, unk_func_00303DF0_0 *arg1, s32 arg2, s32 arg3, s32 *arg4) {
    unk_func_00303DF0_0 *temp;
    s32 *temp2;

    if (arg0->unk_00 > 0xFFFFFFFEUL) {
        func_00118218(D_0032F73C[0]->unk_0C, D_0035CD00);
        func_00116450();
    }
    temp = func_002D2BC0(0x10);
    temp2 = &temp->unk_0C;
    if (temp2 != NULL) {
        *temp2 = *arg4;
    }
    temp->unk_04 = NULL;
    temp->unk_00 = NULL;
    temp->unk_08 = (u32)arg1 | (temp->unk_08 & 1);
    if (arg2 != 0) {
        arg1->unk_00 = temp;
    } else {
        arg1->unk_04 = temp;
    }
    arg0->unk_00++;
    func_002CEFD0(temp, arg0->unk_04);
    if (arg3 != 0) {
        arg0->unk_08 = temp;
    }
    return temp;
}
