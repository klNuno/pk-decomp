#include "common.h"

typedef struct unk_func_002FAC80_0 {
    void *unk_00;
    u8 pad_04[0xC];
    s32 unk_10;
    u8 unk_14;
    u8 unk_15;
    u8 pad_16[0x2];
    s32 unk_18;
    s32 unk_1C;
    s32 unk_20;
    s32 unk_24;
    u8 pad_28[0x8];
} unk_func_002FAC80_0;

void func_002D0DA0(void *, void *);
unk_func_002FAC80_0 *func_002D2BC0(s32);
void func_002F3F00(void *);
extern u8 D_0035EA10[];

unk_func_002FAC80_0 *func_002FAC80(void) {
    unk_func_002FAC80_0 *temp = func_002D2BC0(0x30);

    if (temp != NULL) {
        unk_func_002FAC80_0 *volatile p = temp;
        s32 sp18;
        s32 sp1C;

        func_002F3F00(temp);
        p->unk_00 = D_0035EA10;
        p->unk_10 = 0;
        p->unk_14 = 1;
        p->unk_15 = 0;
        p->unk_18 = 0;
        p->unk_1C = 0;
        func_002D0DA0(&p->unk_20, &sp18);
        func_002D0DA0(&p->unk_24, &sp1C);
        temp = p;
    }
    return temp;
}
