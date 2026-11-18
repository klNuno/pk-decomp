#include "common.h"

typedef struct unk_func_0029E320_0 {
    u8 unk_00[8];
} unk_func_0029E320_0;

typedef struct unk_func_0029E320_1 {
    s32 unk_00;
    unk_func_0029E320_0 unk_04;
    unk_func_0029E320_0 unk_0C;
} unk_func_0029E320_1;

typedef struct unk_func_0029E320_2 {
    void *unk_00;
    u8 pad_04[0x4];
    unk_func_0029E320_1 unk_08;
} unk_func_0029E320_2;

unk_func_0029E320_2 *func_0029DA50();
void func_0029E390();
void *memcpy(void *, const void *, u32);

void func_0029E320(s32 arg0, unk_func_0029E320_0 arg1, unk_func_0029E320_0 arg2) {
    unk_func_0029E320_2 *temp;
    unk_func_0029E320_1 *temp2;

    temp = func_0029DA50(0x14);
    temp->unk_08.unk_00 = arg0;
    temp2 = &temp->unk_08;
    memcpy(&temp2->unk_04, &arg1, 8);
    memcpy(&temp2->unk_0C, &arg2, 8);
    temp->unk_00 = func_0029E390;
}
