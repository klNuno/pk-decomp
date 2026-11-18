#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
} unk_func_002E4A40_0;

void func_002DDE50();
u8 func_002DDAF0();
void func_002DB850();
void func_002DD6D0();

void func_002E4A40(unk_func_002E4A40_0 *arg0) {
    s32 sp20[7];
    u8 sp3F;
    u8 temp;

    func_002DDE50(sp20, arg0);
    arg0->unk_10 += 4;
    temp = func_002DDAF0(sp20);
    func_002DB850(arg0, &sp3F);
    if (temp) {
        func_002DD6D0(sp20, sp3F);
    }
}
