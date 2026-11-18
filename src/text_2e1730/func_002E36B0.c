#include "common.h"

typedef struct {
    u8 pad_00[0x18];
} unk_func_002E36B0_0;

void func_002DD690();
u8 func_002DD340();
void func_002DC6D0();
void func_002DD2F0();

void func_002E36B0(u8 *arg0) {
    unk_func_002E36B0_0 sp30;
    f32 sp48;
    f32 sp4C;
    u8 temp;

    func_002DD690(&sp30, arg0);
    *(s32 *)(arg0 + 0x10) += 4;
    temp = func_002DD340(&sp30);
    func_002DC6D0(arg0, &sp48);
    func_002DC6D0(arg0, &sp4C);
    if (temp) {
        func_002DD2F0(&sp30, sp48 >= sp4C);
    }
}
