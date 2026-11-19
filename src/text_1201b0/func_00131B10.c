#include "common.h"

typedef struct {
    u8 pad_00[0x170];
    s32 unk_170;
    u8 pad_174[0x10];
    s8 unk_184;
    s8 unk_185;
    u8 unk_186;
} unk_func_00131B10_0;

typedef struct {
    u8 pad_00[4];
    unk_func_00131B10_0 *unk_04;
} unk_func_00131B10_1;

void func_0012F540();
void func_0012F480();
void func_0012F4A0();

static inline s32 func_00131B10_h(s8 *a, volatile s8 *b, s32 k) {
    s8 temp = *b;
    return temp == k && *a != temp;
}

s32 func_00131B10(unk_func_00131B10_1 *arg0) {
    s32 ret;
    unk_func_00131B10_0 *p;

    p = arg0->unk_04;
    if (p->unk_186 == 0) {
        return 0;
    }
    ret = p->unk_170;
    if (func_00131B10_h(&p->unk_184, &p->unk_185, 1)) {
        func_0012F540(arg0);
    } else if (func_00131B10_h(&p->unk_184, &p->unk_185, 0)) {
        func_0012F480(arg0);
        func_0012F4A0(arg0);
    }
    p->unk_185 = -1;
    return ret;
}
