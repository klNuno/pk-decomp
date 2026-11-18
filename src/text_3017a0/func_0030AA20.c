#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
} unk_func_0030AA20_0;

typedef struct {
    unk_func_0030AA20_0 *unk_00;
    void *unk_04;
    u8 pad_08[0xC];
    s32 unk_14;
    u8 unk_18[4];
} unk_func_0030AA20_1;

void func_00304B00(void *);
void func_00308C80(s32);
void func_0030C380(void *, s32);
extern u8 D_0035E9A0[];
extern u8 D_0035E9B4[];
extern u8 D_0035F0F0[];
extern u8 D_0035F10C[];

unk_func_0030AA20_1 *func_0030AA20(unk_func_0030AA20_1 *arg0, s32 arg1) {
    if (arg0 != 0) {
        arg0->unk_04 = D_0035F0F0;
        arg0->unk_00->unk_00 = (s32)D_0035F10C;
        arg0->unk_00->unk_04 = (u8 *)arg0 + 0x18 - (u8 *)arg0->unk_00;
        if (&arg0->unk_14 != 0) {
            if (arg0->unk_14 != 0) {
                func_00308C80(arg0->unk_14);
            }
        }
        if (arg0 != 0) {
            arg0->unk_04 = D_0035E9A0;
            arg0->unk_00->unk_00 = (s32)D_0035E9B4;
            arg0->unk_00->unk_04 = (u8 *)arg0 + 0x8 - (u8 *)arg0->unk_00;
        }
        if (arg1 != 0) {
            func_0030C380(arg0->unk_18, 0);
        }
        if ((s16)arg1 > 0) {
            func_00304B00(arg0);
        }
    }
    return arg0;
}
