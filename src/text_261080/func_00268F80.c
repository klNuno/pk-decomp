#include "common.h"

typedef struct unk_func_00268F80_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_00268F80_0;

typedef struct unk_func_00268F80_1 {
    u8 pad_00[0xC];
    unk_func_00268F80_0 unk_0C[4];
    u8 pad_3C[0x28];
    f32 unk_64;
    f32 unk_68;
    u8 pad_6C[4];
    f32 unk_70;
} unk_func_00268F80_1;

typedef struct unk_func_00268F80_2 {
    u32 unk_00;
    u8 pad_04[0x34];
    f32 unk_38;
    f32 unk_3C;
    f32 unk_40;
    u8 pad_44[0x2C];
    s32 unk_70;
    u32 unk_74;
} unk_func_00268F80_2;

f32 func_00114D70(f32);
f32 func_00115110(f32);
void func_0011B418();
unk_func_00268F80_1 *func_00267EB0();
extern char D_0034EB50[];
extern f32 D_00360240;

void func_00268F80(unk_func_00268F80_2 *arg0) {
    unk_func_00268F80_0 v[4];
    u32 i;
    unk_func_00268F80_1 *n;
    s32 alive;
    u32 j;
    f32 s;
    f32 c;
    f32 ny;

    n = func_00267EB0(arg0->unk_70);
    alive = 0;
    if (n == NULL) {
        func_0011B418(D_0034EB50);
        arg0->unk_00 |= 1;
        return;
    }
    for (i = 0; i < arg0->unk_74; n++, i++) {
        n->unk_64 -= n->unk_68 * D_00360240;
        s = func_00114D70(n->unk_70 * D_00360240);
        c = func_00115110(n->unk_70 * D_00360240);
        if (n->unk_64 > 0.0f) {
            alive = 1;
            for (j = 0; j < 4; j++) {
                v[j].unk_00 = n->unk_0C[j].unk_00 - arg0->unk_38;
                v[j].unk_04 = n->unk_0C[j].unk_04 - arg0->unk_3C;
                v[j].unk_08 = n->unk_0C[j].unk_08 - arg0->unk_40;
                ny = c * -v[j].unk_00 + s * v[j].unk_04;
                v[j].unk_00 = s * v[j].unk_00 + c * v[j].unk_04;
                v[j].unk_04 = ny;
            }
            n->unk_0C[0].unk_00 = arg0->unk_38 + v[0].unk_00;
            n->unk_0C[0].unk_04 = arg0->unk_3C + v[0].unk_04;
            n->unk_0C[0].unk_08 = arg0->unk_40 + v[0].unk_08;
            n->unk_0C[1].unk_00 = arg0->unk_38 + v[1].unk_00;
            n->unk_0C[1].unk_04 = arg0->unk_3C + v[1].unk_04;
            n->unk_0C[1].unk_08 = arg0->unk_40 + v[1].unk_08;
            n->unk_0C[2].unk_00 = arg0->unk_38 + v[2].unk_00;
            n->unk_0C[2].unk_04 = arg0->unk_3C + v[2].unk_04;
            n->unk_0C[2].unk_08 = arg0->unk_40 + v[2].unk_08;
            n->unk_0C[3].unk_00 = arg0->unk_38 + v[3].unk_00;
            n->unk_0C[3].unk_04 = arg0->unk_3C + v[3].unk_04;
            n->unk_0C[3].unk_08 = arg0->unk_40 + v[3].unk_08;
        }
    }
    if (!alive) {
        arg0->unk_00 |= 1;
    }
}
