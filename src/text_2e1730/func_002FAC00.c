#include "common.h"

typedef struct {
    void *unk_00;
    u8 pad_04[0xC];
    s32 unk_10;
    u8 unk_14;
    u8 unk_15;
    u8 pad_16[2];
    s32 unk_18;
    s32 unk_1C;
    s32 unk_20;
    s32 unk_24;
} unk_func_002FAC00_0;

void func_002F3F00();
void func_002D0DA0();
extern u8 D_0035EA10[];

unk_func_002FAC00_0 *func_002FAC00(unk_func_002FAC00_0 *volatile arg0) {
    s32 temp;
    s32 temp2;

    func_002F3F00(arg0);
    arg0->unk_00 = D_0035EA10;
    arg0->unk_10 = 0;
    arg0->unk_14 = 1;
    arg0->unk_15 = 0;
    arg0->unk_18 = 0;
    arg0->unk_1C = 0;
    func_002D0DA0(&arg0->unk_20, &temp);
    func_002D0DA0(&arg0->unk_24, &temp2);
    return arg0;
}
