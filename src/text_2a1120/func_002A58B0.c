#include "common.h"

typedef struct {
    void *unk_00;
    u8 pad_04[4];
    f32 unk_08[2];
} unk_func_002A58B0_0;

f32 int2dB__Fi(s32);
unk_func_002A58B0_0 *func_0029DA50();
void func_002A5830();

void func_002A58B0(s32 arg0, s32 arg1) {
    f32 *q;
    unk_func_002A58B0_0 *p;

    p = func_0029DA50(8);
    q = p->unk_08;
    q[0] = int2dB__Fi(arg0);
    q[1] = int2dB__Fi(arg1);
    p->unk_00 = func_002A5830;
}
