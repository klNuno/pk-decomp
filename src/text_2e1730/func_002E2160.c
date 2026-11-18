#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
} unk_func_002E2160_0;

void func_002DB430(unk_func_002E2160_0 *, u8 *);
void func_002DD2F0(s32 *, s32);
u8 func_002DD340(s32 *);
void func_002DD690(s32 *, unk_func_002E2160_0 *);

void func_002E2160(unk_func_002E2160_0 *arg0) {
    s32 sp30[7];
    u8 sp4E;
    u8 sp4F;
    u8 temp_s0;

    func_002DD690(sp30, arg0);
    arg0->unk_10 += 4;
    temp_s0 = func_002DD340(sp30);
    func_002DB430(arg0, &sp4E);
    func_002DB430(arg0, &sp4F);
    if (temp_s0) {
        func_002DD2F0(sp30, sp4E != sp4F);
    }
}
