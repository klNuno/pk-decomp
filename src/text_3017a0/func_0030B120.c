#include "common.h"

typedef struct unk_func_0030B120_0 {
    struct unk_func_0030B120_0 *unk_00;
    struct unk_func_0030B120_0 *unk_04;
    u8 pad_08[0x14];
    u32 unk_1C;
} unk_func_0030B120_0;

void func_00308B80(s32);
void func_00308BE0(s32);
void func_0031A340(s32);
extern s32 D_003607FC;
extern unk_func_0030B120_0 *D_00360800;
extern s32 D_00360804;

void func_0030B120(unk_func_0030B120_0 *arg0) {
    unk_func_0030B120_0 *n;
    unk_func_0030B120_0 *p;

    func_00308BE0(D_003607FC);
    func_0031A340(D_00360804);
    p = D_00360800;
    if (p == NULL) {
        D_00360800 = arg0;
    } else {
        while (p->unk_00 != NULL && arg0->unk_1C <= p->unk_1C) {
            p = p->unk_00;
        }
        if (arg0->unk_1C > p->unk_1C) {
            arg0->unk_00 = p;
            arg0->unk_04 = p->unk_04;
            if (p->unk_04 != NULL) {
                p->unk_04->unk_00 = arg0;
            }
            p->unk_04 = arg0;
            if (p == D_00360800) {
                D_00360800 = arg0;
            }
        } else {
            arg0->unk_00 = p->unk_00;
            arg0->unk_04 = p;
            if (p->unk_00 != NULL) {
                p->unk_00->unk_04 = arg0;
            }
            p->unk_00 = arg0;
        }
    }
    func_00308B80(D_003607FC);
}
