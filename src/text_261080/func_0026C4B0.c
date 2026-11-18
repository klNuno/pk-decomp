#include "common.h"

typedef struct {
    u8 pad_00[0x20];
    f32 unk_20;
    u32 unk_24;
    u8 pad_28[0x18];
} unk_func_0026C4B0_0;

typedef struct {
    u32 unk_00;
    u8 pad_04[0x58];
    f32 unk_5C;
    u8 pad_60[0x10];
    s32 unk_70;
    u32 unk_74;
} unk_func_0026C4B0_1;

unk_func_0026C4B0_0 *func_00267EB0();
void func_0011B418();
extern char D_0034EB50[];
extern f32 D_00360240;

void func_0026C4B0(unk_func_0026C4B0_1 *arg0) {
    unk_func_0026C4B0_0 *temp;
    u32 i;
    s32 temp2;
    f32 temp3;

    if (arg0->unk_70 == 0) {
        arg0->unk_74 = 0;
        arg0->unk_00 |= 1;
        return;
    }
    temp = func_00267EB0(arg0->unk_70);
    if (temp == NULL) {
        func_0011B418(D_0034EB50);
        return;
    }
    temp3 = D_00360240 * arg0->unk_5C;
    temp2 = 0;
    for (i = 0; i < arg0->unk_74; temp++, i++) {
        if (!(temp->unk_24 & 1)) {
            temp->unk_20 -= temp3;
            if (temp->unk_20 < 0.0f) {
                temp->unk_20 = 0.0f;
                temp->unk_24 |= 1;
            } else {
                temp2 = 1;
            }
        }
    }
    if (temp2 == 0) {
        arg0->unk_00 |= 1;
    }
}
