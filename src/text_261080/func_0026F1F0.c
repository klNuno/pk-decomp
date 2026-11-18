#include "common.h"

typedef struct unk_func_0026F1F0_0 {
    u8 pad_00[0xC];
    s32 unk_0C;
    u8 pad_10[0x50];
    f32 unk_60;
    f32 unk_64;
    u8 pad_68[0x8];
    s32 unk_70;
    s32 unk_74;
} unk_func_0026F1F0_0;

void func_0011B418(char *, ...);
void func_00171F50(s32, s32, s32, s32, f32, f32);
s32 func_00267EB0(s32);
extern char D_0034EB50[];
extern s32 D_003602C8;

void func_0026F1F0(unk_func_0026F1F0_0 *arg0) {
    s32 temp_v0;

    if (arg0->unk_70 != 0) {
        temp_v0 = func_00267EB0(arg0->unk_70);
        if (temp_v0 == 0) {
            func_0011B418(D_0034EB50, temp_v0);
            return;
        }
        if (arg0->unk_74 != 0) {
            func_00171F50(D_003602C8, temp_v0, arg0->unk_74, arg0->unk_0C, arg0->unk_60, arg0->unk_64);
        }
    }
}
