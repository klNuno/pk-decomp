#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
    s32 unk_10;
    s32 unk_14;
} unk_func_0030D590_0;

typedef struct {
    s32 unk_00;
    void *unk_04;
    void *unk_08;
    s32 unk_0C;
    void *unk_10;
    s32 unk_14;
    s32 unk_18;
    s32 unk_1C;
    s32 unk_20;
    s32 unk_24;
    s32 unk_28;
    s32 unk_2C;
} unk_func_0030D590_1;

s32 func_0031A320(unk_func_0030D590_0 *);
s32 func_0031A120(unk_func_0030D590_1 *);
s32 func_0031A140(s32, s32);
void func_002D2B90();
void func_0030CB00();
extern s32 D_0035F7BC;
extern s32 D_00360874;
extern s32 D_00367370;
extern u8 D_007DE190[];
extern u8 D_007DF190[];

s32 func_0030D590(s32 arg0) {
    unk_func_0030D590_0 sp20;
    unk_func_0030D590_1 sp40;
    s32 temp_s0;

    sp20.unk_04 = 1;
    sp20.unk_08 = 0;
    D_0035F7BC = func_0031A320(&sp20);
    sp40.unk_04 = func_0030CB00;
    sp40.unk_14 = arg0;
    sp40.unk_08 = D_007DF190;
    sp40.unk_0C = 0x1000;
    sp40.unk_10 = &D_00367370;
    D_00360874 = func_0031A120(&sp40);
    temp_s0 = func_0031A140(D_00360874, 0) >= 0;
    func_002D2B90(D_007DE190, 0, 0x1000);
    return temp_s0;
}
