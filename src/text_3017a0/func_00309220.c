#include "common.h"

typedef struct unk_func_00309220_1 {
    void *unk_00;
    s32 unk_04;
} unk_func_00309220_1;

typedef struct unk_func_00309220_0 {
    unk_func_00309220_1 *unk_00;
    void *unk_04;
} unk_func_00309220_0;

void func_002D2BB0();
void func_0030C380();
extern u8 D_0035E9A0[];
extern u8 D_0035E9B4[];
extern u8 D_0035F020[];
extern u8 D_0035F03C[];

unk_func_00309220_0 *func_00309220(unk_func_00309220_0 *arg0, s32 arg1) {
    if (arg0 != NULL) {
        arg0->unk_04 = D_0035F020;
        arg0->unk_00->unk_00 = D_0035F03C;
        arg0->unk_00->unk_04 = (s32)arg0 + 0xC - (s32)arg0->unk_00;
        if (arg0 != NULL) {
            arg0->unk_04 = D_0035E9A0;
            arg0->unk_00->unk_00 = D_0035E9B4;
            arg0->unk_00->unk_04 = (u8 *)arg0 + 0x8 - (u8 *)arg0->unk_00;
        }
        if (arg1 != 0) {
            func_0030C380((u8 *)arg0 + 0xC, 0);
        }
        if ((s16)arg1 > 0) {
            func_002D2BB0(arg0);
        }
    }
    return arg0;
}
