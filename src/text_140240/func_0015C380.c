#include "common.h"

typedef struct unk_func_0015C380_0 {
    f32 unk_00;
    u8 pad_04[0x100];
} unk_func_0015C380_0;

extern unk_func_0015C380_0 D_00367BB8[];

void func_0015C380(u8 arg0, f32 arg1) {
    D_00367BB8[arg0].unk_00 = arg1;
}
