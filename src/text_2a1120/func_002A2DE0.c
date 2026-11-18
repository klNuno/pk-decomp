#include "common.h"

typedef struct unk_func_002A2DE0_0 {
    void *unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
} unk_func_002A2DE0_0;

unk_func_002A2DE0_0 *func_0029DA50();
void func_002A2E30();

void func_002A2DE0(s32 arg0, s32 arg1) {
    unk_func_002A2DE0_0 *temp = func_0029DA50(8);

    temp->unk_08 = arg0;
    temp->unk_0C = arg1;
    temp->unk_00 = func_002A2E30;
}
