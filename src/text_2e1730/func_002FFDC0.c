#include "common.h"

typedef struct unk_func_002FFDC0_0 {
    u8 pad_00[0x10];
    s32 unk_10;
} unk_func_002FFDC0_0;

void func_002FFE30();
s32 func_002FFE40();
void func_002FFF30();

s32 func_002FFDC0(u8 *arg0, s32 arg1) {
    unk_func_002FFDC0_0 *sp28;
    unk_func_002FFDC0_0 *sp2C;
    unk_func_002FFDC0_0 *temp;

    func_002FFF30(&sp28, arg0 + 4, &arg1);
    temp = sp28;
    func_002FFE30(&sp2C, func_002FFE40(arg0 + 4));
    if (temp == sp2C) {
        return 0;
    }
    return temp->unk_10;
}
