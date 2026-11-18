#include "common.h"

typedef struct unk_func_001DCF90_0 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} unk_func_001DCF90_0;

typedef struct unk_func_001DCF90_1 {
    u8 pad_00[0x8];
    unk_func_001DCF90_0 *unk_08;
} unk_func_001DCF90_1;

typedef struct unk_func_001DCF90_2 {
    u8 pad_00[0xC];
    s16 *unk_0C;
    unk_func_001DCF90_1 **unk_10;
} unk_func_001DCF90_2;

void func_001DCF90(unk_func_001DCF90_2 *arg0, s16 arg1, s16 arg2, unk_func_001DCF90_0 *arg3) {
    unk_func_001DCF90_1 *temp;

    arg3->unk_00 = 0;
    arg3->unk_04 = 0;
    arg3->unk_08 = 0;
    switch (arg0->unk_0C[arg1]) {
    case 1:
        temp = arg0->unk_10[arg1];
        arg3->unk_00 = temp->unk_08[arg2].unk_00;
        arg3->unk_04 = ((s32 *)&temp->unk_08[arg2])[1];
        arg3->unk_08 = ((s32 *)&temp->unk_08[arg2])[2];
        break;
    }
}
