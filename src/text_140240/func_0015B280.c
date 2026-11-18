#include "common.h"

typedef struct {
    u8 pad_00[8];
    s32 unk_08;
    u8 pad_0C[0xF8];
} unk_func_0015B280_0;

void func_0015FD10();
extern unk_func_0015B280_0 D_003678B0[];

void func_0015B280(s32 arg0) {
    u32 i;

    if (arg0 != 0) {
        for (i = 1; i < 0x12; i++) {
            func_0015FD10(arg0, D_003678B0[i].unk_08);
        }
    }
}
