#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
} unk_func_002F7B60_0;

void *func_00302D10();
void func_00302FF0();
s32 func_00303380();
extern s32 D_0035C728[];
extern u8 D_007BF390[];

void **func_002F7B60(unk_func_002F7B60_0 **arg0, u8 *arg1) {
    unk_func_002F7B60_0 *temp;
    s32 temp2;

    temp = *arg0;
    temp2 = D_0035C728[0] == temp->unk_04;
    if (temp2) {
        temp2 = D_0035C728[1] == temp->unk_08;
    }
    if (!temp2) {
        temp->unk_00--;
        if (temp->unk_00 == 0 && temp->unk_0C == 0) {
            func_00302FF0(func_00303380(), temp);
        }
    }
    if (arg1 == NULL) {
        *arg0 = (void *)D_007BF390;
    } else {
        *arg0 = func_00302D10(func_00303380(), arg1 + 4);
    }
    return (void **)arg0;
}
