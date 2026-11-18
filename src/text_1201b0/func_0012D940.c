#include "common.h"

typedef struct unk_func_0012D940_0 {
    u8 pad_00[0x24];
    s32 unk_24;
} unk_func_0012D940_0;

typedef struct unk_func_0012D940_1 {
    u8 pad_00[0x1C];
    unk_func_0012D940_0 *unk_1C;
    s32 unk_20;
    s32 unk_24;
} unk_func_0012D940_1;

void func_00154B00(u8 *, s32);
void func_00153920(s32, u8 *, s32);

void func_0012D940(unk_func_0012D940_1 *arg0) {
    u8 sp20[0x60];
    func_00154B00(sp20, arg0->unk_1C->unk_24);
    func_00153920(arg0->unk_20, sp20, arg0->unk_24);
}
