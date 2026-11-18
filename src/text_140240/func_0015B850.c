#include "common.h"

typedef struct {
    s16 unk_00;
    u8 pad_02[0xA];
    s16 unk_0C;
    u8 pad_0E[0xA];
    s16 unk_18;
} unk_func_0015B850_0;

typedef struct {
    u8 pad_00[0xC];
    unk_func_0015B850_0 *unk_0C;
    u8 pad_10[4];
    s32 unk_14;
    u8 pad_18[0xC];
} unk_func_0015B850_1;

extern u32 D_00368C18[];
extern unk_func_0015B850_1 *D_00368C1C[];

unk_func_0015B850_1 *func_0015B850(s16 arg0, s16 arg1, s16 arg2) {
    unk_func_0015B850_1 *ret = 0;
    u32 i;

    for (i = 0; i < D_00368C18[0]; i++) {
        unk_func_0015B850_1 *p = &D_00368C1C[0][i];

        if (p->unk_14 != 0 && arg0 == -0xFEA && p->unk_0C->unk_00 == -0xFEA && p->unk_0C->unk_0C == arg1 &&
            p->unk_0C->unk_18 == arg2) {
            ret = p;
        }
    }
    return ret;
}
