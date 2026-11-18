#include "common.h"

typedef struct unk_func_00278C30_0 {
    u8 pad_00[0x18];
    s32 unk_18;
    u8 pad_1C[0x14];
} unk_func_00278C30_0;

s32 func_0031A210();
void func_0031A220();
void func_0031A1D0();

void func_00278C30(void) {
    unk_func_00278C30_0 sp10;

    func_0031A220(func_0031A210(), &sp10);
    func_0031A1D0(sp10.unk_18);
}
