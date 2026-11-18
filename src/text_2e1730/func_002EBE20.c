#include "common.h"

typedef struct {
    u8 unk_00;
} unk_func_002EBE20_0;

typedef struct {
    void *unk_00;
    s32 unk_04;
    u8 unk_08[0x10];
    f32 unk_18;
    f32 unk_1C;
    u8 unk_20;
} unk_func_002EBE20_1;

void func_002EBEB0(s32 *, s32);
void func_002EC220(void *, unk_func_002EBE20_0 *, s32 *);
extern u8 D_0035E4E0[];
extern u8 D_0035E6B0[];

unk_func_002EBE20_1 *func_002EBE20(unk_func_002EBE20_1 *arg0, s32 arg1, f32 arg2) {
    unk_func_002EBE20_0 sp34;
    s32 sp38;
    unk_func_002EBE20_0 sp3C;

    arg0->unk_00 = D_0035E4E0;
    arg0->unk_00 = D_0035E6B0;
    arg0->unk_04 = arg1;
    sp3C = sp34;
    func_002EC220(arg0->unk_08, &sp3C, &sp38);
    func_002EBEB0(&sp38, -1);
    arg0->unk_18 = arg2;
    arg0->unk_1C = arg2;
    arg0->unk_20 = 0;
    return arg0;
}
