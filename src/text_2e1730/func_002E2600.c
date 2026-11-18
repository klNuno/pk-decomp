#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
} unk_func_002E2600_0;

void func_002DB850();
void func_002DD2F0();
u8 func_002DD340();
void func_002DD690();

void func_002E2600(unk_func_002E2600_0 *arg0) {
    s32 sp30[4];
    u8 ok;
    u8 a;
    u8 b;

    func_002DD690(sp30, arg0);
    arg0->unk_10 += 4;
    ok = func_002DD340(sp30);
    func_002DB850(arg0, &a);
    func_002DB850(arg0, &b);
    if (ok) {
        func_002DD2F0(sp30, a < b);
    }
}
