#include "common.h"

typedef struct unk_func_002E1BA0_0 {
    u8 pad_00[0x10];
    s32 unk_10;
} unk_func_002E1BA0_0;

typedef struct unk_func_002E1BA0_1 {
    u8 pad_00[0x10];
} unk_func_002E1BA0_1;

void func_002DF290(unk_func_002E1BA0_1 *, unk_func_002E1BA0_0 *);
s32 func_002DEF70(unk_func_002E1BA0_1 *);
void func_002DCB20(unk_func_002E1BA0_0 *, s32 *);
void func_002DEB50(unk_func_002E1BA0_1 *, s32);

void func_002E1BA0(unk_func_002E1BA0_0 *arg0) {
    unk_func_002E1BA0_1 sp20;
    s32 sp3C;
    u8 temp;

    func_002DF290(&sp20, arg0);
    arg0->unk_10 += 4;
    temp = func_002DEF70(&sp20);
    func_002DCB20(arg0, &sp3C);
    if (temp) {
        func_002DEB50(&sp20, ~sp3C);
    }
}
