#include "common.h"

typedef struct {
    u8 pad_00[0x10];
} unk_func_002E0510_0;

void func_002DF290(unk_func_002E0510_0 *, s32);
s32 func_002DEF70(unk_func_002E0510_0 *);
void func_002DEB50(unk_func_002E0510_0 *, s32);

void func_002E0510(s32 arg0, s32 *arg1) {
    unk_func_002E0510_0 sp20;
    s32 var_a1;

    func_002DF290(&sp20, arg0);
    if (func_002DEF70(&sp20) != 0) {
        func_002DEB50(&sp20, *arg1 < 0 ? -*arg1 : *arg1);
    }
}
