#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
} unk_func_002AA060_1;

typedef struct {
    void *unk_00;
    u8 pad_04[4];
    unk_func_002AA060_1 unk_08;
} unk_func_002AA060_0;

unk_func_002AA060_0 *func_0029DA50(s32);
s32 func_0029DB20();
void func_002AA0C0();

void func_002AA060(s32 arg0, s32 arg1) {
    unk_func_002AA060_0 *temp;
    unk_func_002AA060_1 *temp2;

    temp = func_0029DA50(8);
    temp2 = &temp->unk_08;
    temp2->unk_00 = arg0;
    temp2->unk_04 = func_0029DB20(arg1, 0x20);
    temp->unk_00 = func_002AA0C0;
}
