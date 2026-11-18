#include "common.h"

typedef struct unk_func_00306A00_0 {
    void *unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
    f32 unk_10;
    f32 unk_14;
    u8 unk_18;
    u8 pad_19[0x3];
    s32 unk_1C;
} unk_func_00306A00_0;

extern u8 D_0035E9E0[];
extern u8 D_0035E910[];
extern u8 D_0035E950[];
extern u8 D_0035EE90[];
extern u8 D_0035EEE0[];

void func_00305800();
s32 func_0030D400();
s32 *func_0030D3F0(s32);
s32 func_0030D0F0(s32, s32, s32, s32, s32, s32, s32);
void func_003057D0();

unk_func_00306A00_0 *func_00306A00(unk_func_00306A00_0 *volatile arg0, s32 arg1) {
    s32 temp;
    unk_func_00306A00_0 *p;

    p = arg0;
    p->unk_00 = D_0035E9E0;
    p->unk_00 = D_0035E910;
    p->unk_00 = D_0035E950;
    p->unk_00 = D_0035EE90;
    arg0->unk_00 = D_0035EEE0;
    arg0->unk_04 = -1;
    arg0->unk_08 = 0;
    arg0->unk_0C = arg1;
    arg0->unk_10 = 1.0f;
    arg0->unk_14 = 0.5f;
    arg0->unk_18 = 0;
    func_00305800();
    temp = func_0030D400();
    *func_0030D3F0(temp) = arg1;
    arg0->unk_08 = func_0030D0F0(0x51, temp, 4, 0, 0, 0, 0);
    arg0->unk_1C = 0;
    func_003057D0();
    return arg0;
}
