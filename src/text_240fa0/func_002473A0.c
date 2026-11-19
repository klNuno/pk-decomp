/* profile: o0_301 */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_002473A0_0;

typedef struct {
    unk_func_002473A0_0 unk_00;
    u8 pad_0C[0x18];
    unk_func_002473A0_0 unk_24;
    u8 pad_30[4];
} unk_func_002473A0_1;

typedef struct {
    u8 pad_00[0xC];
    s32 unk_0C;
    s32 unk_10;
    u8 pad_14[9];
    u8 unk_1D;
    u8 pad_1E[6];
    s32 unk_24;
    u8 pad_28[4];
    f32 unk_2C;
    u8 pad_30[4];
    unk_func_002473A0_1 unk_34[];
} unk_func_002473A0_2;

extern s32 D_00360184;
extern unk_func_002473A0_0 D_006053C0;
extern f32 D_006053D0[], D_006053D4[], D_006053D8[];
extern u32 D_00617310[];
extern unk_func_002473A0_0 D_00617320;

f32 func_00151360(f32);
f32 func_001E60E0(f32);
void func_00246630(unk_func_002473A0_2 *, s32, s32);
s32 func_00246690(unk_func_002473A0_2 *, unk_func_002473A0_0 *, unk_func_002473A0_0 *, s32);
void func_00246A50(unk_func_002473A0_2 *, unk_func_002473A0_0 *,
                   unk_func_002473A0_0 *, unk_func_002473A0_0 *, s32);
void func_0025CD20(s32, f32 *, f32 *, void *, f32);

#define COPY(dest, src) { \
    ((u32 *)(dest))[0] = ((u32 *)(src))[0]; \
    ((u32 *)(dest))[1] = ((u32 *)(src))[1]; \
    ((u32 *)(dest))[2] = ((u32 *)(src))[2]; \
}

#define SUB(dest, a, b) { \
    (dest).unk_00 = (a)->unk_00 - (b)->unk_00; \
    (dest).unk_04 = (a)->unk_04 - (b)->unk_04; \
    (dest).unk_08 = (a)->unk_08 - (b)->unk_08; \
}

#define ADD(dest, a, b) { \
    (dest).unk_00 = (a)->unk_00 + (b)->unk_00; \
    (dest).unk_04 = (a)->unk_04 + (b)->unk_04; \
    (dest).unk_08 = (a)->unk_08 + (b)->unk_08; \
}

#define SCALE(dest, scale, a) { \
    (dest).unk_00 = (scale) * (a)->unk_00; \
    (dest).unk_04 = (scale) * (a)->unk_04; \
    (dest).unk_08 = (scale) * (a)->unk_08; \
}

#define CROSS(dest, a, b) { \
    (dest).unk_00 = (a).unk_04 * (b).unk_08 - (a).unk_08 * (b).unk_04; \
    (dest).unk_04 = (a).unk_08 * (b).unk_00 - (a).unk_00 * (b).unk_08; \
    (dest).unk_08 = (a).unk_00 * (b).unk_04 - (a).unk_04 * (b).unk_00; \
}

#define LENGTH(a) func_001E60E0(func_00151360((a).unk_08) + \
    (func_00151360((a).unk_00) + func_00151360((a).unk_04)))

#define IS_ZERO() (0.0f == D_006053D0[0] && 0.0f == D_006053D4[0] && 0.0f == D_006053D8[0])
#define POINT(i) (&arg0->unk_34[(i)].unk_00)
#define OTHER(i) (&arg0->unk_34[(i)].unk_24)

void func_002473A0(unk_func_002473A0_2 *arg0, u16 arg1) {
    unk_func_002473A0_0 sp38;
    unk_func_002473A0_0 sp48;
    unk_func_002473A0_0 sp58;
    unk_func_002473A0_0 sp68;
    unk_func_002473A0_0 sp78;
    unk_func_002473A0_0 sp88;
    unk_func_002473A0_0 sp98;
    unk_func_002473A0_0 spA8;
    unk_func_002473A0_0 spB8;
    f32 spC8;
    f32 spCC;
    unk_func_002473A0_0 *temp;

    temp = POINT((u16)arg1);
    SUB(sp38, POINT((u16)arg1 + 1), temp);
    func_00246690(arg0, (void *)temp, &sp38, 2);
    if (!IS_ZERO() && D_00360184 != arg0->unk_10 && D_00360184 != arg0->unk_0C) {
        if (arg0->unk_24 != 0) {
            func_0025CD20(0x2D, D_006053D0, D_006053D0, (void *)D_00617310[(u8)arg0->unk_1D], 4.0f);
            func_00246630(arg0, 3, 1);
            return;
        }
        COPY(&sp48, D_006053D0);
        COPY(&sp68, &D_006053C0);
        temp = POINT((u16)arg1 + 1);
        SUB(sp38, POINT((u16)arg1), temp);
        func_00246690(arg0, (void *)temp, &sp38, 2);
        if (IS_ZERO()) {
            SCALE(sp68, arg0->unk_2C, &sp68);
            ADD(sp48, &sp48, &sp68);
            func_00246A50(arg0, &sp48, &sp68, &D_00617320, (u16)arg1 + 1);
            return;
        }
        COPY(&sp58, D_006053D0);
        COPY(&sp78, &D_006053C0);
        if (&spA8 == &sp68 || &spA8 == &sp78) {
            CROSS(spB8, sp68, sp78);
            COPY(&spA8, &spB8);
        } else {
            CROSS(spA8, sp68, sp78);
        }
        if (0.0f != spA8.unk_00 || 0.0f != spA8.unk_04 || 0.0f != spA8.unk_08) {
            spC8 = LENGTH(spA8);
            if (0.0f != spC8) {
                spC8 = 1.0f / spC8;
                SCALE(spA8, spC8, &spA8);
            } else {
                spA8 = spA8;
            }
        }
        ADD(sp88, &sp48, &sp58);
        SCALE(sp88, 0.5f, &sp88);
        ADD(sp98, &sp68, &sp78);
        SCALE(sp98, 0.5f, &sp98);
        if (0.0f == sp98.unk_00 && 0.0f == sp98.unk_04 && 0.0f == sp98.unk_08) {
            SUB(spA8, OTHER((u16)arg1 + 1), POINT((u16)arg1));
            spA8.unk_00 += OTHER((u16)arg1)->unk_00;
            spA8.unk_04 += OTHER((u16)arg1)->unk_04;
            spA8.unk_08 += OTHER((u16)arg1)->unk_08;
            spA8.unk_00 -= POINT((u16)arg1)->unk_00;
            spA8.unk_04 -= POINT((u16)arg1)->unk_04;
            spA8.unk_08 -= POINT((u16)arg1)->unk_08;
            ADD(sp88, &sp88, &spA8);
            SCALE(sp38, -2.0f, &spA8);
            (void)(s32)func_00246690(arg0, &sp88, &sp38, (u32)2);
            if (!IS_ZERO()) {
                COPY(&sp88, D_006053D0);
                COPY(&sp98, &D_006053C0);
            } else {
                sp38.unk_00 = -sp38.unk_00;
                sp38.unk_04 = -sp38.unk_04;
                sp38.unk_08 = -sp38.unk_08;
                spCC = LENGTH(sp38);
                if (0.0f != spCC) {
                    spCC = 1.0f / spCC;
                    SCALE(sp98, spCC, &sp38);
                } else {
                    sp98 = sp38;
                }
            }
            COPY(POINT((u16)arg1), OTHER((u16)arg1));
            COPY(POINT((u16)arg1 + 1), OTHER((u16)arg1 + 1));
            spA8.unk_08 = spA8.unk_04 = spA8.unk_00 = 0.0f;
        }
        SCALE(sp98, arg0->unk_2C, &sp98);
        ADD(sp88, &sp88, &sp98);
        func_00246A50(arg0, &sp88, &sp98, &spA8, (u16)arg1 + 1);
    }
}
