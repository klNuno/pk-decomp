#include "common.h"

typedef struct {
    u8 pad_00[8];
    s32 unk_08;
    s32 unk_0C;
} unk_func_0030DC60_0;

void func_0030D0F0();
s32 *func_0030D3F0();
s32 func_0030D400();

void func_0030DC60(unk_func_0030DC60_0 *arg0) {
    s32 temp;
    s32 *p;

    if (arg0->unk_08 == 1) {
        temp = func_0030D400(arg0->unk_08);
        p = func_0030D3F0(temp);
        *p = arg0->unk_0C;
        func_0030D0F0(0x32, temp, 4, 0, 0, 0, arg0->unk_0C);
        arg0->unk_08 = 2;
    }
}
