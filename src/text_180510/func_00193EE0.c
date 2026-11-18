#include "common.h"

typedef struct unk_func_00193EE0_0 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} unk_func_00193EE0_0;

typedef struct unk_func_00193EE0_1 {
    u8 pad_00[8];
    unk_func_00193EE0_0 *unk_08;
    u8 pad_0C[8];
    unk_func_00193EE0_0 *unk_14;
} unk_func_00193EE0_1;

typedef struct unk_func_00193EE0_2 {
    u8 pad_00[0xC];
    s16 *unk_0C;
    unk_func_00193EE0_1 **unk_10;
} unk_func_00193EE0_2;

void func_00193EE0(unk_func_00193EE0_2 *arg0, s16 arg1, s16 arg2, unk_func_00193EE0_0 *arg3) {
    arg3->unk_00 = 0;
    arg3->unk_04 = 0;
    arg3->unk_08 = 0;
    switch (arg0->unk_0C[arg1]) {
    case 1: {
        unk_func_00193EE0_1 *p = arg0->unk_10[arg1];
        arg3->unk_00 = ((unk_func_00193EE0_0 *)((u8 *)p->unk_14 + arg2 * 12))->unk_00;
        arg3->unk_04 = ((unk_func_00193EE0_0 *)((u8 *)p->unk_14 + arg2 * 12))->unk_04;
        arg3->unk_08 = ((unk_func_00193EE0_0 *)((u8 *)p->unk_14 + arg2 * 12))->unk_08;
        break;
    }
    case 2: {
        unk_func_00193EE0_1 *p = arg0->unk_10[arg1];
        arg3->unk_00 = ((unk_func_00193EE0_0 *)((u8 *)p->unk_08 + arg2 * 12))->unk_00;
        arg3->unk_04 = ((unk_func_00193EE0_0 *)((u8 *)p->unk_08 + arg2 * 12))->unk_04;
        arg3->unk_08 = ((unk_func_00193EE0_0 *)((u8 *)p->unk_08 + arg2 * 12))->unk_08;
        break;
    }
    }
}
