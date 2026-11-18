#include "common.h"

typedef struct {
    void *unk_00;
    u8 pad_04[0x4];
    f32 unk_08[3];
} unk_func_002A1ED0_0;

f32 int2dB(int);

extern "C" {
unk_func_002A1ED0_0 *func_0029DA50(...);
void func_002A1EC0();

void func_002A1ED0(s32 arg0, s32 arg1, s32 arg2) {
    f32 *v;
    unk_func_002A1ED0_0 *p;

    p = func_0029DA50(0xC);
    v = p->unk_08;
    v[0] = int2dB(arg0);
    v[1] = int2dB(arg1);
    v[2] = int2dB(arg2);
    p->unk_00 = (void *)func_002A1EC0;
}
}
