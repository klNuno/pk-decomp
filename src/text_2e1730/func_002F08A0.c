#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    u8 pad_08[6];
    u8 unk_0E;
    u8 pad_0F[0x11];
    s32 unk_20;
    s32 unk_24;
} unk_func_002F08A0_0;

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
    s32 unk_14;
    u8 pad_18[8];
    s32 unk_20;
} unk_func_002F08A0_1;

void func_002F0940(unk_func_002F08A0_0 *, s32, s32, s32);
void func_002F0BF0(unk_func_002F08A0_0 *);
extern s32 D_0036066C;

void func_002F08A0(unk_func_002F08A0_0 *arg0, s32 arg1, unk_func_002F08A0_1 *arg2) {
    arg0->unk_24 = 0;
    arg0->unk_00 = arg1;
    arg0->unk_20 = arg2->unk_20;
    arg0->unk_04 = D_0036066C;
    D_0036066C++;
    arg0->unk_0E = 0;
    func_002F0940(arg0, arg2->unk_10, arg2->unk_14, 1);
    func_002F0BF0(arg0);
}
