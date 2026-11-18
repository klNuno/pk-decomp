#include "common.h"

typedef struct unk_func_002A3430_0 {
    void *unk_00;
    u8 pad_04[4];
    s32 unk_08;
    s32 unk_0C;
} unk_func_002A3430_0;

unk_func_002A3430_0 *func_0029DA50(s32);
void func_002A3480();

void func_002A3430(s32 arg0, s32 arg1) {
    unk_func_002A3430_0 *temp;

    temp = func_0029DA50(8);
    temp->unk_08 = arg0;
    temp->unk_0C = arg1;
    temp->unk_00 = func_002A3480;
}
