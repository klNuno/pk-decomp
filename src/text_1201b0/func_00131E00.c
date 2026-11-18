#include "common.h"

typedef struct unk_func_00131E00_0 {
    struct unk_func_00131E00_0 *unk_00;
    struct unk_func_00131E00_0 *unk_04;
    s32 unk_08;
} unk_func_00131E00_0;

typedef struct unk_func_00131E00_1 {
    u8 pad_00[4];
    struct unk_func_00131E00_1 *unk_04;
    struct unk_func_00131E00_1 *unk_08;
    unk_func_00131E00_0 *unk_0C;
} unk_func_00131E00_1;

void func_00131E00(unk_func_00131E00_1 *arg0) {
    if (arg0->unk_04 != NULL) {
        arg0->unk_04->unk_08 = arg0->unk_08;
    }
    if (arg0->unk_08 != NULL) {
        arg0->unk_08->unk_04 = arg0->unk_04;
    }
    if (arg0->unk_0C != NULL) {
        arg0->unk_0C->unk_08--;
        if (arg0->unk_0C->unk_00 == (void *)arg0) {
            arg0->unk_0C->unk_00 = (void *)arg0->unk_04;
        }
        if (arg0->unk_0C->unk_04 == (void *)arg0) {
            arg0->unk_0C->unk_04 = (void *)arg0->unk_08;
        }
    }
    arg0->unk_04 = NULL;
    arg0->unk_08 = NULL;
    arg0->unk_0C = NULL;
}
