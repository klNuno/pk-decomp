/* profile: opt_300 */
#include "common.h"

typedef struct unk_Q_0 {
    u8 pad_00[0x8];
    struct unk_Q_0 *unk_08;
    u8 pad_0C[0x8];
    struct unk_Q_0 *unk_14;
    u8 pad_18[0x8];
    s32 unk_20;
    s32 unk_24;
    s32 unk_28;
} unk_Q_0;

void func_0012C450();
void func_0012C4B0();
void func_0012D980();
void func_00153920();
void func_0012D550(unk_Q_0 *arg0);
extern s32 D_0035F858;
extern s32 D_0035F8A8;
extern s32 D_00364BCC[];
extern s32 D_00364BD0[];

static inline u8 func_inl_0(unk_Q_0 *arg0) {
    return arg0->unk_28 == D_0035F8A8 || arg0->unk_28 == -1;
}

static inline void func_inl_1(unk_Q_0 *arg0, s32 *arg1, s32 arg2) {
    if (func_inl_0(arg0)) {
        func_0012C450(arg0->unk_24);
    } else {
        func_00153920(arg0->unk_24, arg1[D_0035F858 + arg2], arg0->unk_20);
        func_0012C450(arg0->unk_24);
        arg0->unk_28 = D_0035F8A8;
    }
}

void func_0012D550(unk_Q_0 *arg0) {
    unk_Q_0 *a;
    unk_Q_0 *b;
    unk_Q_0 *c;

    func_inl_1(arg0, D_00364BCC, 0);
    for (a = arg0->unk_08; a != NULL; a = a->unk_14) {
        func_inl_1(a, D_00364BD0, -1);
        for (b = a->unk_08; b != NULL; b = b->unk_14) {
            func_0012D980(b);
            for (c = b->unk_08; c != NULL; c = c->unk_14) {
                func_0012D550(c);
            }
            func_0012C4B0();
        }
        func_0012C4B0();
    }
    func_0012C4B0();
}
