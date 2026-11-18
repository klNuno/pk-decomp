#include "common.h"

typedef struct unk_func_0015B3B0_0 {
    s32 unk_00;
    u8 pad_04[0x100];
} unk_func_0015B3B0_0;

extern unk_func_0015B3B0_0 D_00367AC0[];
void func_00160700();

void func_0015B3B0(s32 arg0, u8 arg1) {
    func_00160700(arg0, D_00367AC0[arg1].unk_00);
}
