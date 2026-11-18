#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
} unk_func_002E4E40_0;

void func_002DCB20();
void func_002DEB50();
u8 func_002DEF70();
void func_002DF290();

void func_002E4E40(unk_func_002E4E40_0 *arg0) {
    s32 sp30[4];
    u8 ok;
    s32 a;
    s32 b;

    func_002DF290(sp30, arg0);
    arg0->unk_10 += 4;
    ok = func_002DEF70(sp30);
    func_002DCB20(arg0, &a);
    func_002DCB20(arg0, &b);
    if (ok) {
        func_002DEB50(sp30, a + b);
    }
}
