#include "common.h"

void func_002DCB20(void *, s32 *);
void func_002DEB50(void *, s32);
u8 func_002DEBA0(void *, s32 *);
void func_002DF290(void *, void *);

void func_002E4020(void *arg0) {
    u8 sp20[0x10];
    s32 sp38;
    s32 sp3C;
    u8 temp_s0;

    func_002DF290(sp20, arg0);
    *(s32 *)((u8 *)arg0 + 0x10) += 4;
    temp_s0 = func_002DEBA0(sp20, &sp38);
    func_002DCB20(arg0, &sp3C);
    if (temp_s0) {
        func_002DEB50(sp20, sp38 - sp3C);
    }
}
