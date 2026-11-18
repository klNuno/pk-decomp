#include "common.h"

typedef struct {
    u8 pad_00[0x8];
    u8 unk_08[0x1000];
    s32 unk_1008;
    s32 unk_100C;
} unk_func_0030E260_0;

void func_0031ECD0(s32, u8 *, s32);
void func_0031E6A8(s32);

void func_0030E260(unk_func_0030E260_0 *arg0) {
    if (arg0->unk_100C >= 0) {
        if (arg0->unk_1008 != 0) {
            func_0031ECD0(arg0->unk_100C, arg0->unk_08, arg0->unk_1008);
            arg0->unk_1008 = 0;
        }
        func_0031E6A8(arg0->unk_100C);
    }
}
