#include "common.h"

typedef struct {
    u8 pad_0[0x10];
    s32 unk_10;
} unk_func_002E3B30_0;

typedef struct {
    u8 pad_0[0x18];
} unk_func_002E3B30_1;

void func_002DD690();
u8 func_002DD340();
void func_002DC6D0();
void func_002DD2F0();

void func_002E3B30(unk_func_002E3B30_0 *arg0) {
    unk_func_002E3B30_1 temp;
    u8 temp2;
    f32 temp3;
    f32 temp4;

    func_002DD690(&temp, arg0);
    arg0->unk_10 += 4;
    temp2 = func_002DD340(&temp);
    func_002DC6D0(arg0, &temp3);
    func_002DC6D0(arg0, &temp4);
    if (temp2) {
        func_002DD2F0(&temp, temp3 == temp4);
    }
}
