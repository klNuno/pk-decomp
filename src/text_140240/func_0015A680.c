#include "common.h"

typedef struct {
    u8 pad_00[4];
    s16 unk_04;
    u8 pad_06[2];
} unk_func_0015A680_0;

typedef struct {
    u16 unk_00;
    u8 pad_02[0xA];
} unk_func_0015A680_1;

typedef struct {
    u8 unk_00;
    u8 unk_01[2][0x100];
    u8 pad_201;
    s16 unk_202;
} unk_func_0015A680_2;

typedef struct {
    u8 pad_00[8];
    unk_func_0015A680_2 *unk_08;
} unk_func_0015A680_3;

extern unk_func_0015A680_3 *D_003679BC[];
extern unk_func_0015A680_0 D_0035F3D8[];
extern unk_func_0015A680_1 *D_0035F970;

s32 func_0015A680(void) {
    unk_func_0015A680_1 *f;
    u16 id;
    unk_func_0015A680_0 *e;
    unk_func_0015A680_3 *g;
    unk_func_0015A680_2 *t;

    g = D_003679BC[0];
    for (e = D_0035F3D8; e->unk_04 != -1; e++) {
        t = g->unk_08;
        id = e->unk_04;
        if (t->unk_01[t->unk_202][e->unk_04] != 0 && t->unk_01[1 - t->unk_202][e->unk_04] == 0) {
            for (f = D_0035F970; f->unk_00 != 0xFFFF; f++) {
                if (id == f->unk_00) {
                    return 1;
                }
            }
        }
    }
    return 0;
}
