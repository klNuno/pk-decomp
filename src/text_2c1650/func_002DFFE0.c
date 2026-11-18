#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
} unk_func_002DFFE0_0;

void func_002DF290();
s32 func_002DEF70();
f32 func_00114EA0(f32);
s32 func_001273A8(f32);
void func_002DEB50();

void func_002DFFE0(s32 arg0, f32 *arg1) {
    unk_func_002DFFE0_0 sp20;

    func_002DF290(&sp20, arg0);
    if (func_002DEF70(&sp20) != 0) {
        func_002DEB50(&sp20, func_001273A8(func_00114EA0(*arg1)));
    }
}
