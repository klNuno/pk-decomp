#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
} unk_func_002E2F30_0;

void func_002DE7C0();
u8 func_002DE470();
void func_002DCB20();
void func_002DE050(void *, f32);

void func_002E2F30(unk_func_002E2F30_0 *arg0) {
    s32 sp20[7];
    s32 sp3C;
    u8 temp;

    func_002DE7C0(sp20, arg0);
    arg0->unk_10 += 4;
    temp = func_002DE470(sp20);
    func_002DCB20(arg0, &sp3C);
    if (temp) {
        func_002DE050(sp20, sp3C);
    }
}
