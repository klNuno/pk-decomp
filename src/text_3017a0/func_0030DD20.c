#include "common.h"

typedef struct {
    u8 pad_00[8];
    s32 unk_08;
    s32 unk_0C;
    u8 pad_10[0x20];
    void (*unk_30)(s32);
    s32 unk_34;
} unk_func_0030DD20_0;

s32 func_0030D400();
s32 *func_0030D3F0(s32);
void func_0030D0F0();

void func_0030DD20(unk_func_0030DD20_0 *arg0) {
    s32 buf;
    s32 *p;

    if (arg0->unk_30 != NULL) {
        arg0->unk_30(arg0->unk_34);
        arg0->unk_30 = NULL;
        arg0->unk_34 = 0;
    }
    if (arg0->unk_08 != 0) {
        buf = func_0030D400();
        p = func_0030D3F0(buf);
        *p = arg0->unk_0C;
        func_0030D0F0(0x31, buf, 4, 0, 0, 0, arg0->unk_0C);
        arg0->unk_08 = 0;
    }
}
