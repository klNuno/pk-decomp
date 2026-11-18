#include "common.h"

typedef struct {
    void *unk_00;
    s32 unk_04;
} unk_func_002F8830_0;

typedef struct {
    unk_func_002F8830_0 *unk_00;
    void *unk_04;
    u8 pad_08[0x10];
    u8 unk_18[1];
} unk_func_002F8830_1;

void func_002D2BB0(unk_func_002F8830_1 *);
void func_0030C380(void *, s32);
extern u8 D_0035E9A0[];
extern u8 D_0035E9B4[];
extern u8 D_0035F050[];
extern u8 D_0035F06C[];

unk_func_002F8830_1 *func_002F8830(unk_func_002F8830_1 *arg0, s32 arg1) {
    if (arg0 != NULL) {
        arg0->unk_04 = D_0035F050;
        arg0->unk_00->unk_00 = D_0035F06C;
        arg0->unk_00->unk_04 = (u8 *)arg0->unk_18 - (u8 *)arg0->unk_00;
        if (arg0 != NULL) {
            arg0->unk_04 = D_0035E9A0;
            arg0->unk_00->unk_00 = D_0035E9B4;
            arg0->unk_00->unk_04 = (u8 *)&arg0->pad_08 - (u8 *)arg0->unk_00;
        }
        if (arg1 != 0) {
            func_0030C380(arg0->unk_18, 0);
        }
        if ((s16)arg1 > 0) {
            func_002D2BB0(arg0);
        }
    }
    return arg0;
}
