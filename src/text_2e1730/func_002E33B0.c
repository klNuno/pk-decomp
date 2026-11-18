#include "common.h"

typedef struct unk_func_002E33B0_0 {
    u8 pad_00[0x10];
    s32 unk_10;
} unk_func_002E33B0_0;

typedef struct unk_func_002E33B0_1 {
    u8 pad_00[0x18];
} unk_func_002E33B0_1;

void func_002DD690(unk_func_002E33B0_1 *, unk_func_002E33B0_0 *);
u8 func_002DD340(unk_func_002E33B0_1 *);
void func_002DC6D0(unk_func_002E33B0_0 *, f32 *);
void func_002DD2F0(unk_func_002E33B0_1 *, s32);

void func_002E33B0(unk_func_002E33B0_0 *arg0) {
    unk_func_002E33B0_1 sp30;
    f32 sp48;
    f32 sp4C;
    u8 temp;

    func_002DD690(&sp30, arg0);
    arg0->unk_10 += 4;
    temp = func_002DD340(&sp30);
    func_002DC6D0(arg0, &sp48);
    func_002DC6D0(arg0, &sp4C);
    if (temp) {
        func_002DD2F0(&sp30, sp48 > sp4C);
    }
}
