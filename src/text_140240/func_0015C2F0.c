#include "common.h"

typedef struct unk_func_0015C2F0_0 {
    s32 unk_00;
    u8 pad_04[0x100];
} unk_func_0015C2F0_0;

extern unk_func_0015C2F0_0 D_00367BBC[];

s32 func_0015C2F0(u8 arg0) {
    return D_00367BBC[arg0].unk_00;
}
