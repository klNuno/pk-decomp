#include "common.h"

typedef struct {
    void *unk_00;
    u8 pad_04[4];
    s32 unk_08;
    s32 unk_0C;
    u8 pad_10[0x20];
    void (*unk_30)(s32);
    s32 unk_34;
} unk_func_0030DF30_0;

void func_002D2BB0(void *);
void func_003054A0(void *, s32);
void func_0030D0F0(s32, s32, s32, s32, s32, s32, s32);
s32 *func_0030D3F0(s32);
s32 func_0030D400();
extern u8 D_0035F140[];

unk_func_0030DF30_0 *func_0030DF30(unk_func_0030DF30_0 *arg0, s16 arg1) {
    s32 temp;
    s32 *temp2;

    if (arg0 != NULL) {
        arg0->unk_00 = D_0035F140;
        if (arg0->unk_30 != NULL) {
            arg0->unk_30(arg0->unk_34);
            arg0->unk_30 = NULL;
            arg0->unk_34 = 0;
        }
        if (arg0->unk_08 != 0) {
            temp = func_0030D400();
            temp2 = func_0030D3F0(temp);
            *temp2 = arg0->unk_0C;
            func_0030D0F0(0x31, temp, 4, 0, 0, 0, arg0->unk_0C);
            arg0->unk_08 = 0;
        }
        func_003054A0(arg0, 0);
        if (arg1 > 0) {
            func_002D2BB0(arg0);
        }
    }
    return arg0;
}
