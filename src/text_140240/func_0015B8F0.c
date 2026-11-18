#include "common.h"

typedef struct {
    u8 unk_00;
    u8 pad_01[0x3];
    u8 unk_04;
    u8 pad_05[0x3];
    s32 unk_08;
    u8 pad_0C[0xF8];
} unk_func_0015B8F0_0;

s32 func_0015E8A0();
extern unk_func_0015B8F0_0 D_003678B0[];

void func_0015B8F0(void) {
    u32 i;

    i = 2;
    do {
        if (D_003678B0[i].unk_04 == 1) {
            D_003678B0[i].unk_04 = 4;
            if (func_0015E8A0(D_003678B0[i].unk_08) != 0) {
                D_003678B0[0].unk_00 = 2;
            }
        }
        i++;
    } while (i <= 0x11);
}
