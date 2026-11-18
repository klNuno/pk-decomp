#include "common.h"

typedef struct unk_func_002A51B0_0 {
    void *unk_00;
    s32 unk_04;
    f32 unk_08;
} unk_func_002A51B0_0;

f32 int2dB(int);

extern "C" {
unk_func_002A51B0_0 *func_0029DA50(...);
void func_002A5160(...);

void func_002A51B0(s32 arg0) {
    unk_func_002A51B0_0 *temp = func_0029DA50(4);
    temp->unk_08 = int2dB(arg0);
    temp->unk_00 = (void *)func_002A5160;
}
}
