#include "common.h"

typedef struct unk_func_0030AF80_1 {
    s32 unk_00;
    s32 unk_04;
} unk_func_0030AF80_1;

typedef struct unk_func_0030AF80_0 {
    struct unk_func_0030AF80_0 *unk_00;
    struct unk_func_0030AF80_0 *unk_04;
    s32 unk_08;
    s32 unk_0C;
    s32 unk_10;
    s32 unk_14;
    u32 unk_18;
    u8 pad_1C[4];
    s32 unk_20;
    void (*unk_24)(unk_func_0030AF80_1 *);
    s32 unk_28;
} unk_func_0030AF80_0;

extern s32 D_003607FC;
extern unk_func_0030AF80_0 *D_00360800;
extern s32 D_00360804;
void func_0031A360(s32);
void func_00308BE0(s32);
void func_00308B80(s32);
s32 func_0030B400(s32, s32, s32, u32);
void func_0031A340(s32);
void func_002D2BB0(unk_func_0030AF80_0 *);

void func_0030AF80(void) {
    s32 busy;
    unk_func_0030AF80_0 *p;
    s32 n;
    unk_func_0030AF80_1 sp38;

    while (1) {
        func_0031A360(D_00360804);
        func_00308BE0(D_003607FC);
        while ((p = D_00360800) != 0) {
            busy = 0;
            func_00308B80(D_003607FC);
            if (p->unk_18 <= 0x4000) {
                p->unk_20 += func_0030B400(p->unk_08, p->unk_0C, p->unk_14, p->unk_18);
            } else {
                n = func_0030B400(p->unk_08, p->unk_0C, p->unk_14, 0x4000);
                p->unk_20 += n;
                if (n == 0x4000) {
                    busy = 1;
                    p->unk_0C += 0x4000;
                    p->unk_14 += 0x4000;
                    p->unk_18 -= 0x4000;
                }
            }
            if (busy == 0 && p->unk_24 != 0) {
                sp38.unk_00 = p->unk_28;
                sp38.unk_04 = p->unk_20;
                p->unk_24(&sp38);
            }
            func_00308BE0(D_003607FC);
            if (busy == 0 && p->unk_10 != 0) {
                func_0031A340(p->unk_10);
            }
            if (busy == 0) {
                if (p == D_00360800) {
                    D_00360800 = D_00360800->unk_00;
                }
                if (p->unk_00 != 0) {
                    p->unk_00->unk_04 = p->unk_04;
                }
                if (p->unk_04 != 0) {
                    p->unk_04->unk_00 = p->unk_00;
                }
                p->unk_04 = 0;
                p->unk_00 = 0;
            }
            if (busy == 0) {
                func_002D2BB0(p);
            }
        }
        func_00308B80(D_003607FC);
    }
}
