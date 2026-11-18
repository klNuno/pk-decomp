#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
} unk_func_002D51C0_0;

unk_func_002D51C0_0 **func_002D5220(s32);
unk_func_002D51C0_0 *func_002D51B0(s32);
void func_002D5850(s32);
void func_002CFEF0(unk_func_002D51C0_0 **);

s32 func_002D51C0(s32 arg0) {
    unk_func_002D51C0_0 *temp;
    unk_func_002D51C0_0 *temp2;

    temp = *func_002D5220(arg0);
    while (temp2 = func_002D51B0(arg0), temp != temp2) {
        func_002D5850(temp->unk_10);
        func_002CFEF0(&temp);
    }
    return 1;
}
