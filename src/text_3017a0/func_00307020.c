#include "common.h"

typedef struct {
    u8 pad_00[0x8];
    s32 unk_08;
} unk_func_00307020_0;

typedef struct {
    u8 pad_00[0x8];
    s32 unk_08;
    u8 pad_0C[0xC];
    unk_func_00307020_0 *unk_18;
} unk_func_00307020_1;

void func_00305800();
void func_003057D0();
s32 func_0030D400();
s32 *func_0030D3F0(s32);
void func_0030D0F0(s32, s32, s32, s32, s32, s32, s32);

void func_00307020(unk_func_00307020_1 *arg0) {
    s32 temp;
    s32 *q;

    func_00305800();
    if (arg0->unk_18->unk_08 == 1) {
        temp = func_0030D400();
        q = func_0030D3F0(temp);
        *q = arg0->unk_08;
        func_0030D0F0(0x46, temp, 4, 0, 0, 0, arg0->unk_08);
        arg0->unk_18->unk_08 = 2;
    }
    func_003057D0();
}
