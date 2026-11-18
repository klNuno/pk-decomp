#include "common.h"

typedef struct unk_func_002A2950_0 {
    void *unk_00;
    u8 pad_04[4];
    s16 unk_08;
    s16 unk_0A;
    s16 unk_0C;
} unk_func_002A2950_0;

unk_func_002A2950_0 *func_0029DA50(s32);
void func_002A2A10();

void func_002A2950(s16 *arg0) {
    s16 x;
    s16 y;
    s16 z;
    unk_func_002A2950_0 *temp;

    z = arg0[2];
    y = arg0[1];
    x = arg0[0];
    temp = func_0029DA50(6);
    temp->unk_08 = x;
    temp->unk_0A = y;
    temp->unk_0C = z;
    temp->unk_00 = func_002A2A10;
}
