/* profile: o0_301_p */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_00248B20_0;

typedef struct {
    unk_func_00248B20_0 unk_00;
    unk_func_00248B20_0 unk_0C;
    unk_func_00248B20_0 unk_18;
    u8 pad_24[0x10];
} unk_func_00248B20_1;

typedef struct {
    u8 pad_00[0x34];
    unk_func_00248B20_1 unk_34[];
} unk_func_00248B20_2;

f32 func_00151360(f32);
f32 func_001E60E0(f32);
void func_00246690(unk_func_00248B20_2 *, unk_func_00248B20_0 *, unk_func_00248B20_0 *, s32);

extern f32 D_006053D0[];
extern f32 D_006053D4[];
extern f32 D_006053D8[];

#define SUB(dest, a, b) {                     \
    (dest)->unk_00 = (a)->unk_00 - (b)->unk_00; \
    (dest)->unk_04 = (a)->unk_04 - (b)->unk_04; \
    (dest)->unk_08 = (a)->unk_08 - (b)->unk_08; \
}

#define ADD(dest, a, b) {                     \
    (dest)->unk_00 = (a)->unk_00 + (b)->unk_00; \
    (dest)->unk_04 = (a)->unk_04 + (b)->unk_04; \
    (dest)->unk_08 = (a)->unk_08 + (b)->unk_08; \
}

#define SCALE(dest, scale, a) {             \
    (dest)->unk_00 = (scale) * (a)->unk_00; \
    (dest)->unk_04 = (scale) * (a)->unk_04; \
    (dest)->unk_08 = (scale) * (a)->unk_08; \
}

#define COPY(dest, src) {                    \
    ((s32 *)(dest))[0] = ((s32 *)(src))[0];  \
    ((s32 *)(dest))[1] = ((s32 *)(src))[1];  \
    ((s32 *)(dest))[2] = ((s32 *)(src))[2];  \
}

#define NORMALIZE(a, length) {                                            \
    (length) = func_001E60E0(func_00151360((a).unk_08) +                    \
        (func_00151360((a).unk_00) + func_00151360((a).unk_04)));           \
    if (0.0f != (length)) {                                               \
        (length) = 1.0f / (length);                                       \
        SCALE(&(a), (length), &(a));                                      \
    } else {                                                             \
        (a) = (a);                                                       \
    }                                                                    \
}

#define DOT(a, b) ((a)->unk_08 * (b)->unk_08 + \
    ((a)->unk_00 * (b)->unk_00 + (a)->unk_04 * (b)->unk_04))

#define IS_ZERO() (0.0f == D_006053D0[0] && \
    0.0f == D_006053D4[0] && 0.0f == D_006053D8[0])

void func_00248B20(unk_func_00248B20_2 *arg0, u16 arg1) {
    unk_func_00248B20_0 sp80;
    unk_func_00248B20_0 sp90;
    unk_func_00248B20_0 spA0;
    unk_func_00248B20_0 spB0;
    unk_func_00248B20_0 spC0;
    f32 spCC;
    f32 spD0;
    f32 spD4;
    f32 spD8;
    f32 spDC;
    unk_func_00248B20_0 *temp0;
    unk_func_00248B20_0 *temp1;
    unk_func_00248B20_0 *temp2;
    unk_func_00248B20_0 *temp3;
    s32 temp4;
    unk_func_00248B20_0 *temp5;

    temp4 = 0;
    temp3 = &arg0->unk_34[(u16)arg1].unk_00;
    temp0 = &arg0->unk_34[(u16)arg1 + 1].unk_00;
    temp2 = &arg0->unk_34[(u16)arg1 + 2].unk_00;
    temp1 = &arg0->unk_34[(u16)arg1 + 1].unk_0C;
    temp5 = &arg0->unk_34[(u16)arg1 + 1].unk_18;
    if (0.0f != temp1->unk_00 || 0.0f != temp1->unk_04 || 0.0f != temp1->unk_08) {
        SUB(&sp90, temp3, temp0);
        NORMALIZE(sp90, spD8);
        spCC = DOT(&sp90, temp1);
        SUB(&sp90, temp2, temp0);
        NORMALIZE(sp90, spDC);
        spD0 = DOT(&sp90, temp1);
        spD4 = spCC + spD0;
        if (spD4 > 0.125f) {
            SCALE(&sp80, 0.5f, temp1);
            ADD(&spA0, temp0, &sp80);
            temp4 = 1;
        } else if (spD4 < -0.125f) {
            SCALE(&sp80, 0.5f, temp1);
            SUB(&spA0, temp0, &sp80);
            temp4 = 1;
        }
        if (temp4) {
            SUB(&sp90, &spA0, temp0);
            func_00246690(arg0, temp0, &sp90, 0);
            if (IS_ZERO()) {
                COPY(temp0, &spA0);
            }
        }
    }
    SUB(&sp90, temp3, temp2);
    func_00246690(arg0, temp2, &sp90, 0);
    if (IS_ZERO()) {
        SUB(&sp90, temp3, temp0);
        ADD(&sp90, &sp90, temp2);
        SUB(&sp90, &sp90, temp0);
        SCALE(&sp90, 0.3333f, &sp90);
        ADD(&spA0, temp0, &sp90);
        COPY(&sp90, temp5);
        ADD(&spB0, temp0, &sp90);
        SUB(&spC0, temp0, &sp90);
        SUB(&sp90, &spC0, &spB0);
        func_00246690(arg0, &spB0, &sp90, 0);
        if (IS_ZERO()) {
            COPY(temp0, &spA0);
            temp4 = 1;
        }
    }
}
