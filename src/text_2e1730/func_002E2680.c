#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
} unk_func_002E2680_0;

void func_002DB030(unk_func_002E2680_0 *, u16 *);
void func_002DD2F0(s32 *, s32);
u8 func_002DD340(s32 *);
void func_002DD690(s32 *, unk_func_002E2680_0 *);

void func_002E2680(unk_func_002E2680_0 *arg0) {
    s32 sp30[4];
    u16 a;
    u16 b;
    u8 ok;

    func_002DD690(sp30, arg0);
    arg0->unk_10 += 4;
    ok = func_002DD340(sp30);
    func_002DB030(arg0, &a);
    func_002DB030(arg0, &b);
    if (ok) {
        func_002DD2F0(sp30, a < b);
    }
}
