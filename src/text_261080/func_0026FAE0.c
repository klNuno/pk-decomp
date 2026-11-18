#include "common.h"

typedef struct {
    u8 pad_00[0x20];
    f32 unk_20;
    u32 unk_24;
    u8 pad_28[0x18];
} unk_func_0026FAE0_1;

typedef struct {
    u32 unk_00;
    u8 pad_04[0x58];
    f32 unk_5C;
    u8 pad_60[0x10];
    s32 unk_70;
    u32 unk_74;
} unk_func_0026FAE0_0;

void func_0011B418();
unk_func_0026FAE0_1 *func_00267EB0();
extern char D_0034EB50[];
extern f32 D_00360240;

void func_0026FAE0(unk_func_0026FAE0_0 *arg0) {
    unk_func_0026FAE0_1 *p;
    u32 i;
    s32 flag;
    f32 step;

    if (arg0->unk_70 == 0) {
        arg0->unk_74 = 0;
        arg0->unk_00 |= 1;
        return;
    }
    p = func_00267EB0(arg0->unk_70);
    if (p == NULL) {
        func_0011B418(D_0034EB50);
        return;
    }
    flag = 0;
    step = D_00360240 * arg0->unk_5C;
    for (i = 0; i < arg0->unk_74; p++, i++) {
        if (!(p->unk_24 & 1)) {
            p->unk_20 -= step;
            if (p->unk_20 < 0.0f) {
                p->unk_20 = 0.0f;
                p->unk_24 |= 1;
            } else {
                flag = 1;
            }
        }
    }
    if (!flag) {
        arg0->unk_00 |= 1;
    }
}
