#include "common.h"

typedef struct unk_func_0026C5B0_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    u8 pad_0C[4];
    f32 unk_10;
    f32 unk_14;
    f32 unk_18;
    u8 pad_1C[8];
    s32 unk_24;
    u8 pad_28[0x18];
} unk_func_0026C5B0_0;

typedef struct unk_func_0026C5B0_1 {
    s32 unk_00;
    u8 pad_04[0x6C];
    s32 unk_70;
    u32 unk_74;
} unk_func_0026C5B0_1;

unk_func_0026C5B0_0 *func_00267EB0(s32);
void func_0011B418(char *);
extern char D_0034EB50[];
extern f32 D_00360240;

void func_0026C5B0(unk_func_0026C5B0_1 *arg0) {
    unk_func_0026C5B0_0 *var_a0;
    f32 var_f3;
    f32 temp_f2;
    u32 var_a1;

    if (arg0->unk_70 == 0) {
        arg0->unk_74 = 0;
        arg0->unk_00 |= 1;
        return;
    }
    var_a0 = func_00267EB0(arg0->unk_70);
    if (var_a0 == NULL) {
        func_0011B418(D_0034EB50);
        return;
    }
    var_f3 = D_00360240;
    var_f3 = (var_f3 > 0.033333335f) ? 0.033333335f : var_f3;
    temp_f2 = 9.81f * var_f3;
    for (var_a1 = 0; var_a1 < arg0->unk_74; var_a0++, var_a1++) {
        if (!(var_a0->unk_24 & 1)) {
            var_a0->unk_18 += temp_f2;
            var_a0->unk_00 += var_a0->unk_10 * var_f3;
            var_a0->unk_04 += var_a0->unk_14 * var_f3;
            var_a0->unk_08 += var_a0->unk_18 * var_f3;
        }
    }
}
