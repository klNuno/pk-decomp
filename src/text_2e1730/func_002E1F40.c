#include "common.h"

void func_002DCB20(void *, s32 *);
void func_002DD2F0(void *, s32);
void func_002DD340(void *);
void func_002DD690(void *, void *);

void func_002E1F40(void *arg0) {
    u8 sp20[0x10];
    s32 sp38;
    s32 sp3C;

    func_002DD690(sp20, arg0);
    *(s32 *)((u8 *)arg0 + 0x10) += 4;
    func_002DD340(sp20);
    func_002DCB20(arg0, &sp38);
    func_002DCB20(arg0, &sp3C);
    func_002DD2F0(sp20, sp38 != sp3C);
}
