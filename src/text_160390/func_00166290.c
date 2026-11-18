#include "common.h"

typedef struct unk_func_00166290_0 {
    u8 pad_00[0x7];
    s8 unk_07;
    u8 pad_08[0x4];
    f32 unk_0C;
    f32 unk_10;
    f32 unk_14;
    f32 unk_18;
    f32 unk_1C;
    f32 unk_20;
    u8 pad_24[0x10];
    f32 unk_34;
    f32 unk_38;
    f32 unk_3C;
    f32 unk_40;
    u8 pad_44[0x4];
    f32 unk_48;
    f32 unk_4C;
} unk_func_00166290_0;

typedef struct unk_func_00166290_1 {
    u8 pad_00[0x84];
    u32 unk_84;
    unk_func_00166290_0 unk_88[1];
} unk_func_00166290_1;

f32 func_00114D70(f32);
f32 func_00115110(f32);
extern f32 D_0035FAE4;

void func_00166290(unk_func_00166290_1 *arg0) {
    unk_func_00166290_0 *p;
    u32 i;
    f32 s;
    f32 c;

    p = arg0->unk_88;
    for (i = 0; i < arg0->unk_84; i++, p++) {
        if (p->unk_07 & 8) {
            p->unk_40 += p->unk_3C * D_0035FAE4;
            s = func_00114D70(p->unk_40);
            c = func_00115110(p->unk_40);
            p->unk_0C = s * p->unk_48;
            p->unk_10 = c * p->unk_48;
            p->unk_14 = -c * p->unk_4C;
            p->unk_18 = s * p->unk_4C;
        }
        p->unk_1C += p->unk_34 * D_0035FAE4;
        p->unk_20 += p->unk_38 * D_0035FAE4;
    }
}
