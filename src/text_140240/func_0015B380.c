#include "common.h"

typedef struct unk_func_0015B380_0 {
    s32 unk_00;
    u8 pad_04[0x100];
} unk_func_0015B380_0;

void func_00160660();
extern unk_func_0015B380_0 D_00367AC0[];

void func_0015B380(s32 arg0, u8 arg1) {
    func_00160660(arg0, D_00367AC0[arg1].unk_00);
}
