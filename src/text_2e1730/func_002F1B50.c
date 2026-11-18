#include "common.h"

typedef struct unk_func_002F1B50_3 {
    s32 unk_00;
    u8 unk_04[0xC];
} unk_func_002F1B50_3;

typedef struct unk_func_002F1B50_0 {
    struct unk_func_002F1B50_0 *unk_00;
    struct unk_func_002F1B50_0 *unk_04;
    u32 unk_08;
    unk_func_002F1B50_3 unk_0C;
} unk_func_002F1B50_0;

typedef struct unk_func_002F1B50_1 {
    s32 unk_00;
    s32 unk_04;
    u8 pad_08[4];
    unk_func_002F1B50_0 *unk_0C;
} unk_func_002F1B50_1;

typedef struct unk_func_002F1B50_2 {
    u8 pad_00[0xC];
    s32 unk_0C;
} unk_func_002F1B50_2;

extern unk_func_002F1B50_2 *D_0032F73C[];
extern char D_0035BE60[];

void func_00118218(s32, char *);
void func_00116450();
unk_func_002F1B50_0 *func_002D2BC0(s32);
void func_002F11C0(void *, void *);
void func_002CEFD0(unk_func_002F1B50_0 *, s32);

unk_func_002F1B50_0 *func_002F1B50(unk_func_002F1B50_1 *arg0, unk_func_002F1B50_0 *arg1, s32 arg2, s32 arg3, unk_func_002F1B50_3 *arg4) {
    unk_func_002F1B50_0 *temp;
    unk_func_002F1B50_3 *temp2;

    if (arg0->unk_00 > 0xFFFFFFFEUL) {
        func_00118218(D_0032F73C[0]->unk_0C, D_0035BE60);
        func_00116450();
    }
    temp = func_002D2BC0(0x1C);
    temp2 = &temp->unk_0C;
    if (temp2 != NULL) {
        temp2->unk_00 = arg4->unk_00;
        func_002F11C0(temp2->unk_04, arg4->unk_04);
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
