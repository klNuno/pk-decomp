#include "common.h"

typedef struct unk_func_002E27C0_0 {
    u8 pad_00[0x10];
    s32 unk_10;
} unk_func_002E27C0_0;

typedef struct unk_func_002E27C0_1 {
    u8 pad_00[0x10];
} unk_func_002E27C0_1;

void func_002DD690(unk_func_002E27C0_1 *, unk_func_002E27C0_0 *);
s32 func_002DD340(unk_func_002E27C0_1 *);
void func_002DB850(unk_func_002E27C0_0 *, u8 *);
void func_002DD2F0(unk_func_002E27C0_1 *, s32);

void func_002E27C0(unk_func_002E27C0_0 *arg0) {
    unk_func_002E27C0_1 sp20;
    u8 sp3F;
    u8 temp;

    func_002DD690(&sp20, arg0);
    arg0->unk_10 += 4;
    temp = func_002DD340(&sp20);
    func_002DB850(arg0, &sp3F);
    if (temp) {
        func_002DD2F0(&sp20, sp3F != 0);
    }
}
