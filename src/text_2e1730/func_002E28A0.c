#include "common.h"

typedef struct unk_func_002E28A0_0 {
    u8 pad_00[0x10];
    s32 unk_10;
} unk_func_002E28A0_0;

void func_002DD690();
u8 func_002DD340();
void func_002DCB20();
void func_002DD2F0();

void func_002E28A0(unk_func_002E28A0_0 *arg0) {
    u8 sp20[0x1C];
    s32 sp3C;
    u8 temp;

    func_002DD690(sp20, arg0);
    arg0->unk_10 += 4;
    temp = func_002DD340(sp20);
    func_002DCB20(arg0, &sp3C);
    if (temp) {
        func_002DD2F0(sp20, sp3C == 0);
    }
}
