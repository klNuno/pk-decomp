#include "common.h"

typedef struct unk_func_001DF380_1 {
    f32 unk_00;
    s32 unk_04;
    s16 unk_08;
} unk_func_001DF380_1;

typedef struct unk_func_001DF380_2 {
    unk_func_001DF380_1 *unk_00;
    s16 unk_04;
} unk_func_001DF380_2;

typedef struct unk_func_001DF380_3 {
    u8 pad_00[0x8];
    u8 *unk_08;
} unk_func_001DF380_3;

typedef struct unk_func_001DF380_0 {
    u8 pad_00[0x14];
    f32 unk_14;
    f32 unk_18;
    f32 unk_1C;
    f32 unk_20;
    u8 pad_24[0x4];
    f32 unk_28;
    f32 unk_2C;
    f32 unk_30;
    f32 unk_34;
    f32 unk_38;
    f32 unk_3C;
    s32 unk_40;
    s32 unk_44;
    u8 pad_48[0x18];
    unk_func_001DF380_1 *unk_60;
    u8 pad_64[0x8];
    unk_func_001DF380_3 *unk_6C;
    u8 pad_70[0x70];
    u8 unk_E0[0x60];
    u8 unk_140[0x120];
    f32 unk_260;
    unk_func_001DF380_2 *unk_264;
    unk_func_001DF380_2 *unk_268;
    u8 pad_26C[0x4];
    unk_func_001DF380_1 *unk_270;
    u8 pad_274[0xC];
    u8 *unk_280;
} unk_func_001DF380_0;

void func_001559E0(void *, void *, void *);
void func_001DF500(unk_func_001DF380_0 *);
void func_001E0C50(unk_func_001DF380_0 *);

void func_001DF380(unk_func_001DF380_0 *arg0) {
    s16 i;
    s16 j;

    for (i = 0; i < arg0->unk_264->unk_04; i++) {
        arg0->unk_60 = &arg0->unk_264->unk_00[i];
        arg0->unk_280 = arg0->unk_6C->unk_08 + arg0->unk_60->unk_08 * 12;
        arg0->unk_20 = arg0->unk_60->unk_00 / arg0->unk_260;
        func_001559E0(&arg0->unk_14, arg0->unk_E0, arg0->unk_280);
        func_001559E0(&arg0->unk_28, arg0->unk_140, arg0->unk_280);
        arg0->unk_34 = arg0->unk_28 - arg0->unk_14;
        arg0->unk_38 = arg0->unk_2C - arg0->unk_18;
        arg0->unk_3C = arg0->unk_30 - arg0->unk_1C;
        func_001E0C50(arg0);
        for (j = 0; j < arg0->unk_268->unk_04; j++) {
            arg0->unk_270 = &arg0->unk_268->unk_00[j];
            arg0->unk_40 = arg0->unk_60->unk_04;
            arg0->unk_44 = arg0->unk_270->unk_04;
            func_001DF500(arg0);
        }
    }
}
