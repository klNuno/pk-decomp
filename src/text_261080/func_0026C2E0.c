#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    u8 pad_08[0x30];
    f32 unk_38;
    f32 unk_3C;
    f32 unk_40;
    f32 unk_44;
    f32 unk_48;
    f32 unk_4C;
    f32 unk_50;
    f32 unk_54;
    f32 unk_58;
    u8 pad_5C[4];
    f32 unk_60;
    f32 unk_64;
    u8 pad_68[0x58];
    f32 unk_C0;
    u8 pad_C4[0xC];
} unk_func_0026C2E0_0;

s32 func_00127318(f32);
extern u32 D_003602C0;
extern unk_func_0026C2E0_0 D_0075BA40[];

s32 func_0026C2E0(void *arg0, unk_func_0026C2E0_0 *arg1, f32 arg2) {
    s32 found;
    u32 i;
    unk_func_0026C2E0_0 *e;

    i = 0;
    found = 0;
    while (i < D_003602C0 && found == 0) {
        if (arg1->unk_04 == D_0075BA40[i].unk_04 && func_00127318(arg2) == func_00127318(D_0075BA40[i].unk_C0)) {
            found = 1;
        } else {
            i++;
        }
    }
    if (found != 0) {
        e = &D_0075BA40[i];
        e->unk_38 = arg1->unk_38;
        e->unk_3C = arg1->unk_3C;
        e->unk_40 = arg1->unk_40;
        e->unk_44 = arg1->unk_44;
        e->unk_48 = arg1->unk_48;
        e->unk_4C = arg1->unk_4C;
        e->unk_50 = arg1->unk_50;
        e->unk_54 = arg1->unk_54;
        arg1 = e;
        e->unk_00 = 0;
    }
    arg1->unk_C0 = arg2;
    arg1->unk_60 = 1.0f;
    arg1->unk_64 = 1.0f;
    arg1->unk_58 = 255.0f;
    if (found != 0) {
        return 0;
    }
    return 1;
}
