#include "common.h"

typedef struct {
    u8 pad_00[8];
    s32 unk_08;
    s32 unk_0C;
} unk_func_003070B0_1;

typedef struct {
    u8 pad_00[8];
    s32 unk_08;
    u8 pad_0C[0xC];
    unk_func_003070B0_1 *unk_18;
} unk_func_003070B0_0;

void func_00305800();
void func_003057D0();
s32 func_0030D400();
s32 *func_0030D3F0(s32);
void func_0030D0F0(s32, s32, s32, s32, s32, s32, s32);

void func_003070B0(unk_func_003070B0_0 *arg0, s32 arg1) {
    s32 *p;
    s32 temp;


    func_00305800();
    if (arg1 != 0 && (s32)arg0->unk_18 == arg1) {
        if (arg0->unk_18->unk_08 != 0) {
            temp = func_0030D400();
            p = func_0030D3F0(temp);
            *p = arg0->unk_08;
            func_0030D0F0(0x45, temp, 4, 0, 0, 0, arg0->unk_18->unk_0C);
            arg0->unk_18->unk_08 = 0;
            arg0->unk_18->unk_0C = 0;
        }
        func_003057D0();
    }
}
