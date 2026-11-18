#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
} unk_func_002E3BC0_0;

void func_002DB030(unk_func_002E3BC0_0 *, u16 *);
void func_002DD2F0(s32 *, s32);
u8 func_002DD340(s32 *);
void func_002DD690(s32 *, unk_func_002E3BC0_0 *);

void func_002E3BC0(unk_func_002E3BC0_0 *arg0) {
    s32 sp30[7];
    u16 sp4C;
    u16 sp4E;
    u8 temp_s0;

    func_002DD690(sp30, arg0);
    arg0->unk_10 += 4;
    temp_s0 = func_002DD340(sp30);
    func_002DB030(arg0, &sp4C);
    func_002DB030(arg0, &sp4E);
    if (temp_s0) {
        func_002DD2F0(sp30, sp4C == sp4E);
    }
}
