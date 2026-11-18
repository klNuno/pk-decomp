#include "common.h"

typedef struct unk_func_002E4100_0 {
    u8 pad_00[0x10];
    s32 unk_10;
} unk_func_002E4100_0;

void func_002DDE50();
u8 func_002DD720();
void func_002DB850();
void func_002DD6D0();

void func_002E4100(unk_func_002E4100_0 *arg0) {
    u8 sp20[0x1E];
    u8 sp3E;
    u8 sp3F;
    u8 temp;

    func_002DDE50(sp20, arg0);
    arg0->unk_10 += 4;
    temp = func_002DD720(sp20, &sp3E);
    func_002DB850(arg0, &sp3F);
    if (temp) {
        func_002DD6D0(sp20, (u8)(sp3E - sp3F));
    }
}
