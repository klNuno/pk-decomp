#include "common.h"

typedef struct unk_func_002E4AB0_0 {
    u8 pad_00[0x1F];
} unk_func_002E4AB0_0;

void func_002DD690();
u8 func_002DD340();
void func_002DB430();
void func_002DD2F0();

void func_002E4AB0(u8 *arg0) {
    unk_func_002E4AB0_0 sp20;
    u8 sp3C;
    u8 temp;

    func_002DD690(&sp20, arg0);
    *(s32 *)(arg0 + 0x10) += 4;
    temp = func_002DD340(&sp20);
    func_002DB430(arg0, &sp3C);
    if (temp) {
        func_002DD2F0(&sp20, sp3C);
    }
}
