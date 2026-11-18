#include "common.h"

typedef struct unk_func_002A2580_0 {
    void *unk_00;
    u8 pad_04[4];
    s16 unk_08;
    s16 unk_0A;
    s16 unk_0C;
    s16 unk_0E;
} unk_func_002A2580_0;

unk_func_002A2580_0 *func_0029DA50(s32);
void func_002A25F0();

void func_002A2580(s16 arg0, s16 arg1, s16 arg2, s16 arg3) {
    unk_func_002A2580_0 *temp;

    temp = func_0029DA50(8);
    temp->unk_08 = arg0;
    temp->unk_0A = arg1;
    temp->unk_0C = arg2;
    temp->unk_0E = arg3;
    temp->unk_00 = func_002A25F0;
}
