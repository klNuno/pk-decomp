#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
} unk_func_002D0340_0;

s32 func_00303380();
void func_00303210();

void func_002D0340(s32 arg0) {
    unk_func_002D0340_0 sp18;
    sp18.unk_00 = 1;
    sp18.unk_04 = arg0;
    func_00303210(func_00303380(), &sp18);
}
