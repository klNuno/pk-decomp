#include "common.h"

typedef struct unk_func_002E42E0_0 {
    u8 pad_00[0x10];
    s32 unk_10;
} unk_func_002E42E0_0;

typedef struct unk_func_002E42E0_1 {
    u8 pad_00[0x10];
} unk_func_002E42E0_1;

void func_002DF290(unk_func_002E42E0_1 *, unk_func_002E42E0_0 *);
s32 func_002DEF70(unk_func_002E42E0_1 *);
void func_002DB850(unk_func_002E42E0_0 *, u8 *);
void func_002DEB50(unk_func_002E42E0_1 *, u8);

void func_002E42E0(unk_func_002E42E0_0 *arg0) {
    unk_func_002E42E0_1 sp20;
    u8 sp3F;
    u8 temp;

    func_002DF290(&sp20, arg0);
    arg0->unk_10 += 4;
    temp = func_002DEF70(&sp20);
    func_002DB850(arg0, &sp3F);
    if (temp) {
        func_002DEB50(&sp20, sp3F);
    }
}
