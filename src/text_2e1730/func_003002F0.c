#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
} unk_func_003002F0_0;

typedef struct unk_func_003002F0_1 {
    struct unk_func_003002F0_1 *unk_00;
    struct unk_func_003002F0_1 *unk_04;
    u32 unk_08;
    unk_func_003002F0_0 unk_0C;
} unk_func_003002F0_1;

typedef struct {
    s32 unk_00;
    s32 unk_04;
    u8 pad_08[0x4];
    unk_func_003002F0_1 *unk_0C;
} unk_func_003002F0_2;

typedef struct {
    u8 pad_00[0xC];
    s32 unk_0C;
} unk_func_003002F0_3;

void func_00118218();
void func_00116450();
void *func_002D2BC0();
void func_002CEFD0();
extern unk_func_003002F0_3 *D_0032F73C[];
extern char D_0035CC80[];

unk_func_003002F0_1 *func_003002F0(unk_func_003002F0_2 *arg0, unk_func_003002F0_1 *arg1, s32 arg2, s32 arg3, unk_func_003002F0_0 *arg4) {
    unk_func_003002F0_1 *temp;
    unk_func_003002F0_0 *temp2;

    if (arg0->unk_00 > 0xFFFFFFFEUL) {
        func_00118218(D_0032F73C[0]->unk_0C, D_0035CC80);
        func_00116450();
    }
    temp = func_002D2BC0(0x14);
    temp2 = &temp->unk_0C;
    if (temp2 != NULL) {
        temp2->unk_00 = arg4->unk_00;
        temp2->unk_04 = arg4->unk_04;
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
        arg0->unk_0C = temp;
    }
    return temp;
}
