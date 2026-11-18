#include "common.h"

typedef struct unk_func_0012DAE0_0 {
    u8 pad_00[0x1C];
    struct unk_func_0012DAE0_0 *unk_1C;
    s32 unk_20;
    s32 unk_24;
} unk_func_0012DAE0_0;

void func_0012DBB0(unk_func_0012DAE0_0 *);
void func_00153920(s32, s32, s32);
extern s32 D_0035F8A4;
extern s32 D_00364BD0[];

void func_0012DAE0(unk_func_0012DAE0_0 *arg0) {
    unk_func_0012DAE0_0 *a;
    unk_func_0012DAE0_0 *b;
    unk_func_0012DAE0_0 *c;

    D_0035F8A4 = D_00364BD0[0];
    a = arg0->unk_1C;
    if (a != NULL) {
        b = a->unk_1C;
        if (b != NULL) {
            c = b->unk_1C;
            if (c != NULL) {
                func_0012DBB0(c);
                func_00153920(c->unk_24, D_0035F8A4, c->unk_20);
                D_0035F8A4 = c->unk_24;
            }
            func_00153920(b->unk_24, D_0035F8A4, b->unk_20);
            D_0035F8A4 = b->unk_24;
        }
        func_00153920(a->unk_24, D_0035F8A4, a->unk_20);
        D_0035F8A4 = a->unk_24;
    }
    func_00153920(arg0->unk_24, D_0035F8A4, arg0->unk_20);
}
