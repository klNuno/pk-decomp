#include "common.h"

typedef struct unk_func_0030AC80_0 {
    struct unk_func_0030AC80_0 *unk_00;
    u8 pad_04[0xC];
    s32 unk_10;
} unk_func_0030AC80_0;

void func_00308B80(s32);
void func_00308BE0(s32);
s32 func_0031A320(void *);
void func_0031A330(s32);
void func_0031A360(s32);
extern s32 D_003607FC;
extern unk_func_0030AC80_0 *D_00360800;
extern u8 D_007CA6B0[];
extern s32 D_007CA6B4[];
extern s32 D_007CA6B8[];

s32 func_0030AC80(unk_func_0030AC80_0 *arg0, s32 arg1) {
    s32 h = 0;
    unk_func_0030AC80_0 *p;

    func_00308BE0(D_003607FC);
    for (p = D_00360800; p != NULL; p = p->unk_00) {
        if (arg0 == p) {
            break;
        }
    }
    if (p != NULL && arg1 == 1) {
        D_007CA6B4[0] = 1;
        D_007CA6B8[0] = 0;
        h = func_0031A320(D_007CA6B0);
        p->unk_10 = h;
    }
    func_00308B80(D_003607FC);
    if (h != 0) {
        func_0031A360(h);
        func_0031A330(h);
        p = NULL;
    }
    return p == NULL ? 1 : 0;
}
