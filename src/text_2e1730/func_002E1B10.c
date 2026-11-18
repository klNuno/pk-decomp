#include "common.h"

typedef struct unk_func_002E1B10_0 {
    u8 pad_00[0x10];
    s32 unk_10;
} unk_func_002E1B10_0;

void func_002DDE50();
u8 func_002DDAF0();
void func_002DB850();
void func_002DD6D0();

void func_002E1B10(unk_func_002E1B10_0 *arg0) {
    u8 sp30[0x1C];
    u8 sp4E;
    u8 sp4F;
    u8 temp;

    func_002DDE50(sp30, arg0);
    arg0->unk_10 += 4;
    temp = func_002DDAF0(sp30);
    func_002DB850(arg0, &sp4E);
    func_002DB850(arg0, &sp4F);
    if (temp) {
        func_002DD6D0(sp30, (u8)(sp4E | sp4F));
    }
}
