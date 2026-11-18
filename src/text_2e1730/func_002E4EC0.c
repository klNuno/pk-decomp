#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
} unk_func_002E4EC0_0;

void func_002DC6D0(unk_func_002E4EC0_0 *, f32 *);
void func_002DE050(s32 *, f32);
u8 func_002DE470(s32 *);
void func_002DE7C0(s32 *, unk_func_002E4EC0_0 *);

void func_002E4EC0(unk_func_002E4EC0_0 *arg0) {
    s32 sp30[4];
    f32 a;
    f32 b;
    u8 ok;

    func_002DE7C0(sp30, arg0);
    arg0->unk_10 += 4;
    ok = func_002DE470(sp30);
    func_002DC6D0(arg0, &a);
    func_002DC6D0(arg0, &b);
    if (ok) {
        func_002DE050(sp30, a + b);
    }
}
