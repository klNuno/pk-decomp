#include "common.h"

typedef struct {
    u8 pad_00[0x14];
    s32 unk_14;
    u8 pad_18[4];
} unk_func_00319E40_0;

typedef struct {
    u8 pad_00[0x20];
    s32 unk_20;
    u8 pad_24[4];
} unk_func_00319E40_1;

typedef struct {
    u8 pad_00[0x8];
    u32 unk_08;
    u8 pad_0C[4];
    u32 unk_10;
    u8 pad_14[0xC];
    unk_func_00319E40_0 *unk_20;
    u8 pad_24[4];
    unk_func_00319E40_1 *unk_28;
} unk_func_00319E40_2;

typedef struct {
    u8 pad_00[0x34];
    unk_func_00319E40_2 *unk_34;
    s32 unk_38;
} unk_func_00319E40_3;

void func_00319CF0(unk_func_00319E40_3 *);

void func_00319E40(unk_func_00319E40_3 *arg0) {
    unk_func_00319E40_2 *temp_a1;
    u32 i;
    u32 j;

    if (arg0->unk_38 != 0) {
        func_00319CF0(arg0);
    }
    if (arg0->unk_38 == 0) {
        temp_a1 = arg0->unk_34;
        for (i = 0; i < temp_a1->unk_10; i++) {
            temp_a1->unk_28[i].unk_20 = 1;
        }
        for (j = 0; j < temp_a1->unk_08; j++) {
            temp_a1->unk_20[j].unk_14 = 1;
        }
    }
}
