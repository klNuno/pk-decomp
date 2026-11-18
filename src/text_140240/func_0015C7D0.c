#include "common.h"

typedef struct unk_func_0015C7D0_0 {
    u8 unk_00;
    u8 pad_01[0x103];
} unk_func_0015C7D0_0;

extern unk_func_0015C7D0_0 D_00367B1C[];

u8 func_0015C7D0(u8 arg0) {
    return D_00367B1C[arg0].unk_00;
}
