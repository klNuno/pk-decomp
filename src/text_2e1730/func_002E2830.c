#include "common.h"

void func_002DB430(void *, u8 *);
void func_002DD2F0(void *, s32);
u8 func_002DD340(void *);
void func_002DD690(void *, void *);

void func_002E2830(void *arg0) {
    u8 sp20[0x10];
    u8 sp3F;
    u8 temp_s0;

    func_002DD690(sp20, arg0);
    *(s32 *)((u8 *)arg0 + 0x10) += 4;
    temp_s0 = func_002DD340(sp20);
    func_002DB430(arg0, &sp3F);
    if (temp_s0) {
        func_002DD2F0(sp20, !sp3F);
    }
}
