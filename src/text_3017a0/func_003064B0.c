#include "common.h"

typedef struct {
    u8 pad_00[0x8];
    s32 unk_08;
} unk_func_003064B0_0;

typedef struct {
    u8 pad_00[0x8];
    s32 unk_08;
    u8 pad_0C[0x10];
    unk_func_003064B0_0 *unk_1C;
} unk_func_003064B0_1;

void func_00305800();
void func_003057D0();
s32 func_0030D400();
s32 *func_0030D3F0(s32);
void func_0030D0F0(s32, s32, s32, s32, s32, s32, s32);

void func_003064B0(unk_func_003064B0_1 *arg0) {
    s32 temp;
    s32 *q;

    func_00305800();
    if (arg0->unk_1C->unk_08 == 2) {
        temp = func_0030D400();
        q = func_0030D3F0(temp);
        *q = arg0->unk_08;
        func_0030D0F0(0x57, temp, 4, 0, 0, 0, arg0->unk_08);
        arg0->unk_1C->unk_08 = 1;
    }
    func_003057D0();
}
