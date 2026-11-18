#include "common.h"

void func_002DB850(void *, u8 *);
void func_002DD6D0(void *, u8);
u8 func_002DD720(void *, u8 *);
void func_002DDE50(void *, void *);

void func_002E3160(void *arg0) {
    u8 sp20[0x10];
    u8 sp3E;
    u8 sp3F;
    u8 temp_s0;

    func_002DDE50(sp20, arg0);
    *(s32 *)((u8 *)arg0 + 0x10) += 4;
    temp_s0 = func_002DD720(sp20, &sp3E);
    func_002DB850(arg0, &sp3F);
    if (temp_s0) {
        func_002DD6D0(sp20, sp3E + sp3F);
    }
}
