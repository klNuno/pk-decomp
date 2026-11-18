#include "common.h"

typedef struct unk_func_0026FA50_0 {
    s32 unk_00;
    u8 pad_04[0x8];
    s32 unk_0C;
    u8 pad_10[0x28];
    u8 unk_38[0x10];
    u8 unk_48[0x18];
    f32 unk_60;
} unk_func_0026FA50_0;

extern s32 D_003602C8;
void func_001714C0(s32, void *, void *, s32, f32);

void func_0026FA50(unk_func_0026FA50_0 *arg0) {
    func_001714C0(D_003602C8, arg0->unk_38, arg0->unk_48, arg0->unk_0C, arg0->unk_60);
    arg0->unk_00 |= 1;
}
