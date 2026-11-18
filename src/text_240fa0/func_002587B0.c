#include "common.h"

typedef struct unk_func_002587B0_1 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_002587B0_1;

typedef struct unk_func_002587B0_0 {
    unk_func_002587B0_1 unk_00[100];
    f32 unk_4B0[100];
    u32 unk_640;
    u8 pad_644[0x8];
} unk_func_002587B0_0;

extern f32 D_00360240;
extern unk_func_002587B0_0 D_00618AE0[];

void func_002587B0(void) {
    u32 i;
    u32 j;
    u32 k;
    unk_func_002587B0_0 *p;

    for (i = 0; i < 50; i++) {
        p = &D_00618AE0[i];
        if (p->unk_640 != 0) {
            j = 0;
            while (j < p->unk_640) {
                p->unk_4B0[j] -= D_00360240;
                if (p->unk_4B0[j] > 0.0f) {
                    j++;
                } else {
                    for (k = j; k < p->unk_640 - 1; k++) {
                        p->unk_4B0[k] = p->unk_4B0[k + 1];
                        p->unk_00[k].unk_00 = p->unk_00[k + 1].unk_00;
                        p->unk_00[k].unk_04 = p->unk_00[k + 1].unk_04;
                        p->unk_00[k].unk_08 = p->unk_00[k + 1].unk_08;
                    }
                    p->unk_640--;
                }
            }
        }
    }
}
