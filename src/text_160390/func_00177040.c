#include "common.h"

typedef struct unk_func_00177040_2 {
    u8 pad_00[0x2C];
    s32 unk_2C;
} unk_func_00177040_2;

typedef struct unk_func_00177040_1 {
    u8 pad_00[0xC];
    s16 *unk_0C;
    unk_func_00177040_2 **unk_10;
    u8 pad_14[0xE];
    s16 unk_22;
    u8 pad_24[0x5C];
    s32 unk_80;
    s32 unk_84;
} unk_func_00177040_1;

typedef struct unk_func_00177040_0 {
    u8 pad_00[0x4];
    s16 unk_04;
    u8 pad_06[0x6];
    unk_func_00177040_1 **unk_0C;
} unk_func_00177040_0;

typedef struct unk_func_00177040_3 {
    u8 pad_00[0x4];
    unk_func_00177040_1 *unk_04;
} unk_func_00177040_3;

extern unk_func_00177040_3 *D_0035FB04;

void func_00177040(unk_func_00177040_0 **arg0) {
    unk_func_00177040_0 *a;
    s16 n;
    s16 i;
    unk_func_00177040_1 *b;
    s32 j;
    unk_func_00177040_2 *c;

    if (arg0 == NULL) {
        return;
    }
    a = *arg0;
    if (a == NULL) {
        return;
    }
    n = a->unk_04;
    if (n == 0) {
        n = 1;
    }
    for (i = 0; i < n; i++) {
        b = a->unk_0C[i];
        if (b != NULL) {
            b->unk_84 = 0;
            b->unk_80 = 0;
            D_0035FB04->unk_04 = b;
            for (j = 0; j < b->unk_22; j++) {
                if (b->unk_0C[j] == 1) {
                    c = b->unk_10[j];
                    if (c != NULL) {
                        c->unk_2C = 0;
                    }
                }
            }
        }
    }
}
