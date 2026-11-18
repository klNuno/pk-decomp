#include "common.h"

typedef struct unk_func_003065D0_0 {
    u8 pad_00[8];
    s32 unk_08;
    s32 unk_0C;
} unk_func_003065D0_0;

typedef struct unk_func_003065D0_1 {
    u8 pad_00[8];
    s32 unk_08;
    u8 pad_0C[0x10];
    unk_func_003065D0_0 *unk_1C;
} unk_func_003065D0_1;

void func_00305800();
void func_003057D0();
s32 func_0030D400();
s32 *func_0030D3F0(s32);
void func_0030D0F0(s32, s32, s32, s32, s32, s32, s32);

void func_003065D0(unk_func_003065D0_1 *arg0) {
    s32 temp;
    s32 *p;

    func_00305800();
    if (arg0->unk_1C->unk_08 != 0) {
        temp = func_0030D400();
        p = func_0030D3F0(temp);
        *p = arg0->unk_08;
        func_0030D0F0(0x55, temp, 4, 0, 0, 0, arg0->unk_1C->unk_0C);
        arg0->unk_1C->unk_08 = 0;
        arg0->unk_1C->unk_0C = 0;
    }
    func_003057D0();
}
