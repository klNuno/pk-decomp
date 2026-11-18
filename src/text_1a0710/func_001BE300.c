/* profile: o0_301 */
#include "common.h"

typedef struct {
    u8 pad_00[0x1C];
    s32 unk_1C;
} unk_func_001BE300_0;

typedef struct {
    u8 pad_00[0x30];
    u32 unk_30;
} unk_func_001BE300_1;

unk_func_001BE300_0 *HIE_fn_hGetSuperObjectObject();
void func_00131D20();
void func_00131E00();
s32 func_001B9740();
s32 func_001B9AA0();
s32 func_001B9AF0();

void func_001BE300(s32 arg0, unk_func_001BE300_1 *arg1) {
    s32 temp_s0;

    temp_s0 = HIE_fn_hGetSuperObjectObject(arg1)->unk_1C;
    if (func_001B9AA0(temp_s0)) {
        if (func_001B9AF0(temp_s0)) {
            arg1->unk_30 |= 0x20000;
        } else {
            arg1->unk_30 &= ~0x20000;
        }
        return;
    }
    func_00131E00(func_001B9740(temp_s0));
    func_00131D20(arg0, func_001B9740(temp_s0));
}
