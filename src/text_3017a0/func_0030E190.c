#include "common.h"

typedef struct {
    u8 pad_00[8];
    u8 unk_08[0x1000];
    u32 unk_1008;
    s32 unk_100C;
} unk_func_0030E190_0;

void func_002D2BA0();
void func_0031ECD0();

u32 func_0030E190(unk_func_0030E190_0 *arg0, u8 *arg1, u32 arg2, u32 arg3) {
    u32 temp;
    u32 temp2;

    temp2 = arg2 * arg3;
    while (temp2 != 0) {
        temp = 0x1000;
        if (temp2 < 0x1000) {
            temp = temp2;
        }
        if (temp + arg0->unk_1008 > 0x1000) {
            temp = 0x1000 - arg0->unk_1008;
        }
        func_002D2BA0(arg0->unk_08 + arg0->unk_1008, arg1, temp);
        arg0->unk_1008 += temp;
        if (arg0->unk_1008 == 0x1000) {
            func_0031ECD0(arg0->unk_100C, arg0->unk_08, 0x1000);
            arg0->unk_1008 = 0;
        }
        temp2 -= temp;
        arg1 += temp;
    }
    return arg3;
}
