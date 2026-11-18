#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_001DE660_0;

typedef struct {
    f32 unk_00;
    s32 unk_04;
    s16 unk_08;
    u8 pad_0A[0x2];
} unk_func_001DE660_1;

typedef struct {
    unk_func_001DE660_1 *unk_00;
    s16 unk_04;
} unk_func_001DE660_2;

typedef struct {
    s16 unk_00;
    s16 unk_02;
    s32 unk_04;
} unk_func_001DE660_3;

typedef struct {
    unk_func_001DE660_3 *unk_00;
    s16 unk_04;
} unk_func_001DE660_4;

typedef struct {
    u8 pad_00[0x8];
    unk_func_001DE660_0 *unk_08;
} unk_func_001DE660_5;

typedef struct {
    u8 pad_00[0x14];
    f32 unk_14;
    f32 unk_18;
    f32 unk_1C;
    f32 unk_20;
    s32 unk_24;
    f32 unk_28;
    f32 unk_2C;
    f32 unk_30;
    f32 unk_34;
    f32 unk_38;
    f32 unk_3C;
    s32 unk_40;
    s32 unk_44;
    u8 pad_48[0x8];
    unk_func_001DE660_5 *unk_50;
    u8 pad_54[0xC];
    unk_func_001DE660_1 *unk_60;
    u8 pad_64[0x8];
    unk_func_001DE660_5 *unk_6C;
    s32 unk_70;
    s32 unk_74;
    u8 pad_78[0x1E8];
    f32 unk_260;
    unk_func_001DE660_2 *unk_264;
    u8 pad_268[0x18];
    unk_func_001DE660_0 *unk_280;
    u8 pad_284[0x494];
    unk_func_001DE660_4 *unk_718;
    unk_func_001DE660_3 *unk_71C;
    unk_func_001DE660_0 *unk_720;
    unk_func_001DE660_0 *unk_724;
} unk_func_001DE660_6;

unk_func_001DE660_0 *func_00155EE0(s32);
void func_001E0C50(unk_func_001DE660_6 *);
void func_001DDEB0(unk_func_001DE660_6 *);

void func_001DE660(unk_func_001DE660_6 *arg0) {
    s16 i;
    s16 j;
    unk_func_001DE660_0 *base;
    f32 x0;
    f32 y0;
    f32 z0;
    f32 x1;
    f32 y1;
    f32 z1;

    for (i = 0; i < arg0->unk_264->unk_04; i++) {
        arg0->unk_60 = &arg0->unk_264->unk_00[i];
        arg0->unk_280 = &arg0->unk_6C->unk_08[arg0->unk_60->unk_08];
        arg0->unk_20 = arg0->unk_60->unk_00 / arg0->unk_260;
        base = func_00155EE0(arg0->unk_24);
        x0 = func_00155EE0(arg0->unk_70)->unk_00 - base->unk_00;
        y0 = func_00155EE0(arg0->unk_70)->unk_04 - base->unk_04;
        z0 = func_00155EE0(arg0->unk_70)->unk_08 - base->unk_08;
        x1 = func_00155EE0(arg0->unk_74)->unk_00 - base->unk_00;
        y1 = func_00155EE0(arg0->unk_74)->unk_04 - base->unk_04;
        z1 = func_00155EE0(arg0->unk_74)->unk_08 - base->unk_08;
        arg0->unk_14 = x0 + arg0->unk_280->unk_00;
        arg0->unk_18 = y0 + arg0->unk_280->unk_04;
        arg0->unk_1C = z0 + arg0->unk_280->unk_08;
        arg0->unk_28 = x1 + arg0->unk_280->unk_00;
        arg0->unk_2C = y1 + arg0->unk_280->unk_04;
        arg0->unk_30 = z1 + arg0->unk_280->unk_08;
        arg0->unk_34 = arg0->unk_28 - arg0->unk_14;
        arg0->unk_38 = arg0->unk_2C - arg0->unk_18;
        arg0->unk_3C = arg0->unk_30 - arg0->unk_1C;
        func_001E0C50(arg0);
        for (j = 0; j < arg0->unk_718->unk_04; j++) {
            arg0->unk_71C = &arg0->unk_718->unk_00[j];
            arg0->unk_720 = &arg0->unk_50->unk_08[arg0->unk_71C->unk_00];
            arg0->unk_724 = &arg0->unk_50->unk_08[arg0->unk_71C->unk_02];
            arg0->unk_40 = arg0->unk_60->unk_04;
            arg0->unk_44 = arg0->unk_71C->unk_04;
            func_001DDEB0(arg0);
        }
    }
}
