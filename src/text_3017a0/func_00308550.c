#include "common.h"

typedef struct unk_func_00308550_0 {
    void (*unk_00)(struct unk_func_00308550_0 *, s32);
    s32 unk_04;
    u8 pad_08[0xC];
    u8 unk_14;
    u8 unk_15;
    u8 pad_16[0x2];
    struct unk_func_00308550_0 *unk_18;
} unk_func_00308550_0;

void func_002D2BB0(unk_func_00308550_0 *);
void func_00308B80(s32);
void func_00308BE0(s32);
void func_0031A360(s32);
extern s32 D_003607D8;
extern s32 D_003607DC;
extern unk_func_00308550_0 *D_003607E0;

void func_00308550(void) {
    unk_func_00308550_0 **pp;
    unk_func_00308550_0 *p;

    for (;;) {
        func_0031A360(D_003607DC);
        func_00308BE0(D_003607D8);
        pp = &D_003607E0;
        func_00308B80(D_003607D8);
        while ((p = *pp) != NULL) {
            if (p->unk_14 == 1) {
                func_00308BE0(D_003607D8);
                *pp = p->unk_18;
                func_00308B80(D_003607D8);
                func_002D2BB0(p);
            } else {
                if (p->unk_15 == 1) {
                    p->unk_00(p, p->unk_04);
                }
                pp = &(*pp)->unk_18;
            }
        }
    }
}
