#include "common.h"

typedef struct unk_func_001349D0_3 {
    u8 pad_00[0xD4];
    s32 unk_D4;
} unk_func_001349D0_3;

typedef struct unk_func_001349D0_2 {
    unk_func_001349D0_3 *unk_00;
    s32 unk_04;
} unk_func_001349D0_2;

typedef struct unk_func_001349D0_4 {
    u8 pad_00[0x14];
    struct unk_func_001349D0_4 *unk_14;
} unk_func_001349D0_4;

typedef struct unk_func_001349D0_1 {
    s32 unk_00;
    unk_func_001349D0_2 *unk_04;
    unk_func_001349D0_4 *unk_08;
} unk_func_001349D0_1;

typedef struct unk_func_001349D0_0 {
    u8 unk_00;
    u8 pad_01[3];
    unk_func_001349D0_1 *unk_04;
    u8 pad_08[0x1C];
    u16 unk_24;
    u8 pad_26[0x7A];
    s32 unk_A0;
    s32 unk_A4;
} unk_func_001349D0_0;

extern s32 D_0035F3A8;
extern unk_func_001349D0_0 D_00365030[];

s32 func_001348D0(unk_func_001349D0_4 *, s32, s32);
void func_0019CEC0(s32, u16);
void func_00133D10(s32);
void memset(void *, s32, s32);

void func_001349D0(void) {
    s16 i;
    unk_func_001349D0_0 *e;
    unk_func_001349D0_4 *n;
    unk_func_001349D0_2 *c;
    unk_func_001349D0_1 *p;

    for (i = 0; i <= D_0035F3A8; i++) {
        e = &D_00365030[i];
        if (e->unk_00 != 0) {
            s32 a = e->unk_A4;
            s32 b = e->unk_A0;

            p = e->unk_04;
            if (p->unk_04 == (unk_func_001349D0_2 *)a) {
                p->unk_00 = b != 0 ? 8 : 1;
                p->unk_04 = (unk_func_001349D0_2 *)b;
            } else {
                for (n = p->unk_08; n != NULL; n = n->unk_14) {
                    if (func_001348D0(n, a, b)) {
                        break;
                    }
                }
            }
            c = e->unk_04->unk_04;
            if (c->unk_04 != 0) {
                func_0019CEC0(c->unk_00->unk_D4, e->unk_24);
            }
            func_00133D10(e->unk_A4);
            if (e->unk_00 != 0) {
                memset(e, 0, 0xA8);
                e->unk_00 = 0;
            }
        }
    }
    D_0035F3A8 = -1;
}
