#include "common.h"

typedef struct unk_func_002E49D0_0 {
    u8 pad_00[0x10];
    s32 unk_10;
} unk_func_002E49D0_0;

typedef struct unk_func_002E49D0_1 {
    u8 pad_00[0x10];
} unk_func_002E49D0_1;

void func_002DE020(unk_func_002E49D0_1 *, unk_func_002E49D0_0 *);
s32 func_002DDEB0(unk_func_002E49D0_1 *);
void func_002DB030(unk_func_002E49D0_0 *, u16 *);
void func_002DDE90(unk_func_002E49D0_1 *, u16);

void func_002E49D0(unk_func_002E49D0_0 *arg0) {
    unk_func_002E49D0_1 sp20;
    u16 sp3E;
    u8 temp;

    func_002DE020(&sp20, arg0);
    arg0->unk_10 += 4;
    temp = func_002DDEB0(&sp20);
    func_002DB030(arg0, &sp3E);
    if (temp) {
        func_002DDE90(&sp20, sp3E);
    }
}
