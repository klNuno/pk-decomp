#include "common.h"

typedef struct unk_func_0015B4B0_0 {
    s32 unk_00;
    u8 pad_04[0x100];
} unk_func_0015B4B0_0;

void func_00160F00();
extern unk_func_0015B4B0_0 D_00367AC0[];

void func_0015B4B0(u8 arg0) {
    func_00160F00(D_00367AC0[arg0].unk_00);
}
