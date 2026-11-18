#include "common.h"

typedef struct unk_func_0015C470_0 {
    s16 unk_00;
    u8 pad_02[0x102];
} unk_func_0015C470_0;

extern unk_func_0015C470_0 D_00367BAE[];

s16 func_0015C470(u8 arg0) {
    return D_00367BAE[arg0].unk_00;
}
