#include "common.h"

s32 func_0031A210();
void func_0031A220();
void func_0031A1D0();

typedef struct {
    u8 pad_00[0x18];
    s32 unk_18;
    u8 pad_1C[0x14];
} unk_func_002788B0_0;

void func_002788B0(void) {
    unk_func_002788B0_0 sp10;
    while (1) {
        func_0031A220(func_0031A210(), &sp10);
        func_0031A1D0(sp10.unk_18);
    }
}
