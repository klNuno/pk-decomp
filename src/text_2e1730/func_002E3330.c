#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
} unk_func_002E3330_0;

void func_002DCB20(unk_func_002E3330_0 *, s32 *);
void func_002DD2F0(s32 *, s32);
u8 func_002DD340(s32 *);
void func_002DD690(s32 *, unk_func_002E3330_0 *);

void func_002E3330(unk_func_002E3330_0 *arg0) {
    s32 sp30[6];
    s32 sp48;
    s32 sp4C;
    u8 temp_s0;

    func_002DD690(sp30, arg0);
    arg0->unk_10 += 4;
    temp_s0 = func_002DD340(sp30);
    func_002DCB20(arg0, &sp48);
    func_002DCB20(arg0, &sp4C);
    if (temp_s0) {
        func_002DD2F0(sp30, sp48 > sp4C);
    }
}
