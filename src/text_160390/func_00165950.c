#include "common.h"

typedef struct unk_func_00165950_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_00165950_0;

typedef struct unk_func_00165950_1 {
    s32 unk_00;
    u8 pad_04[4];
    s32 unk_08;
    u8 pad_0C[0x24];
    u8 unk_30[0x30];
    unk_func_00165950_0 unk_60;
    u8 pad_6C[0x24];
    unk_func_00165950_0 unk_90;
    s32 unk_9C;
    u8 pad_A0[0x1C];
    s32 unk_BC;
    u8 pad_C0[4];
    u8 unk_C4;
    u8 unk_C5;
    u8 unk_C6;
    u8 pad_C7[0x59];
    s32 unk_120;
    u8 pad_124[0xC];
} unk_func_00165950_1;

extern s32 D_0035FABC;
extern unk_func_00165950_1 D_00369DB0;
extern unk_func_00165950_1 D_00369EE0;
extern unk_func_00165950_1 *D_0036A050[];

void func_00155C70();

void func_00165950(s32 arg0, unk_func_00165950_0 *arg1, unk_func_00165950_0 *arg2, unk_func_00165950_0 *arg3) {
    unk_func_00165950_1 *a = &D_00369EE0;
    unk_func_00165950_1 *b;

    a->unk_08 = 4;
    func_00155C70(a->unk_30);
    a->unk_00 = 1;
    a->unk_90.unk_00 = arg1->unk_00;
    a->unk_90.unk_04 = arg1->unk_04;
    a->unk_90.unk_08 = arg1->unk_08;
    a->unk_C5 = 2;
    a->unk_9C = 0;
    a->unk_BC = 0;
    a->unk_C4 = 1;
    a->unk_C6 = 0;
    a->unk_120 = 0;
    if (D_0035FABC == 0x32) {
        return;
    }
    D_0036A050[D_0035FABC++] = a;
    b = &D_00369DB0;
    b->unk_08 = 1;
    func_00155C70(b->unk_30);
    b->unk_60.unk_00 = arg2->unk_00;
    b->unk_60.unk_04 = arg2->unk_04;
    b->unk_60.unk_08 = arg2->unk_08;
    b->unk_00 = 1;
    b->unk_90.unk_00 = arg3->unk_00;
    b->unk_90.unk_04 = arg3->unk_04;
    b->unk_90.unk_08 = arg3->unk_08;
    b->unk_C4 = 1;
    b->unk_C5 = 2;
    b->unk_9C = 0;
    b->unk_BC = 0;
    b->unk_C6 = 0;
    b->unk_120 = 0;
    if (D_0035FABC != 0x32) {
        D_0036A050[D_0035FABC++] = b;
    }
}
