#include "common.h"

typedef struct unk_func_00269D20_0 {
    u8 pad_00[0xC];
    u8 unk_0C[0xC];
    u8 unk_18[0xC];
    u8 unk_24[0xC];
    u8 unk_30[0x24];
    f32 unk_54;
    f32 unk_58;
    f32 unk_5C;
    f32 unk_60;
    f32 unk_64;
    u8 pad_68[4];
    s32 unk_6C;
    u8 pad_70[4];
} unk_func_00269D20_0;

typedef struct unk_func_00269D20_1 {
    s32 unk_00;
    u8 pad_04[8];
    s32 unk_0C;
    u8 pad_10[0x60];
    s32 unk_70;
    u32 unk_74;
} unk_func_00269D20_1;

unk_func_00269D20_0 *func_00267EB0(s32);
void func_0011B418(char *);
void func_00167A70(f32);
void func_00190990(s32, void *, void *, void *, void *, f32, f32, s32, f32, f32);
extern char D_0034EB50[];
extern s32 D_003602C8;

void func_00269D20(unk_func_00269D20_1 *arg0) {
    u32 i;
    unk_func_00269D20_0 *p;

    p = func_00267EB0(arg0->unk_70);
    if (p == 0) {
        func_0011B418(D_0034EB50);
        arg0->unk_00 |= 1;
    } else {
        for (i = 0; i < arg0->unk_74; i++) {
            if (!(p->unk_64 <= 0.0f)) {
                func_00167A70(255.0f * p->unk_64);
                func_00190990(D_003602C8, p->unk_0C, p->unk_18, p->unk_24, p->unk_30, p->unk_54, p->unk_58, arg0->unk_0C, p->unk_5C, p->unk_60);
                p->unk_6C = 1;
            }
            p++;
        }
    }
}
