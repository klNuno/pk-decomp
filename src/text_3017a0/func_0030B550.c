#include "common.h"

typedef struct unk_func_0030B550_0 {
    struct unk_func_0030B550_0 *unk_00;
    struct unk_func_0030B550_0 *unk_04;
    u8 pad_08[0x4];
    s32 unk_0C;
    s32 unk_10;
    void *unk_14;
} unk_func_0030B550_0;

void func_002D2BB0(void *);
void func_00307C00(s32);
void func_00308B80(s32);
void func_00308BE0(s32);
extern void (*D_00360820)(s32);
extern s32 D_0036082C;
extern unk_func_0030B550_0 *D_00360830;

void func_0030B550(unk_func_0030B550_0 *arg0) {
    func_00308BE0(D_0036082C);
    if (D_00360830 == arg0) {
        D_00360830 = D_00360830->unk_00;
    }
    if (arg0->unk_00 != NULL) {
        arg0->unk_00->unk_04 = arg0->unk_04;
    }
    if (arg0->unk_04 != NULL) {
        arg0->unk_04->unk_00 = arg0->unk_00;
    }
    arg0->unk_04 = NULL;
    arg0->unk_00 = NULL;
    switch (arg0->unk_10) {
    case 0:
        D_00360820(arg0->unk_0C);
        break;
    case 1:
        func_00307C00(arg0->unk_0C);
        break;
    }
    func_002D2BB0(arg0->unk_14);
    func_002D2BB0(arg0);
    func_00308B80(D_0036082C);
}
