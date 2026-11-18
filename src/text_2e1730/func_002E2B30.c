#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
} unk_func_002E2B30_0;

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
} unk_func_002E2B30_1;

void func_002DCB20(unk_func_002E2B30_1 *, s32 *);
void func_002DD2F0(unk_func_002E2B30_0 *, s32);
u8 func_002DD340(unk_func_002E2B30_0 *);
void func_002DD690(unk_func_002E2B30_0 *, unk_func_002E2B30_1 *);

void func_002E2B30(unk_func_002E2B30_1 *arg0) {
    unk_func_002E2B30_0 sp30;
    s32 a;
    s32 b;
    u8 temp;

    func_002DD690(&sp30, arg0);
    arg0->unk_10 += 4;
    temp = func_002DD340(&sp30);
    func_002DCB20(arg0, &a);
    func_002DCB20(arg0, &b);
    if (temp) {
        func_002DD2F0(&sp30, a <= b);
    }
}
