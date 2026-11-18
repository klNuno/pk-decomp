/* profile: o0_301 */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_001F6E30_0;

typedef struct {
    u8 pad_00[0x1C];
    unk_001F6E30_0 unk_1C;
} unk_001F6E30_1;

typedef struct {
    u8 pad_00[8];
    unk_001F6E30_1 *unk_08;
    u8 pad_0C[0x14];
    unk_001F6E30_0 unk_20;
    unk_001F6E30_0 unk_2C;
    u8 pad_38[0x18];
    unk_001F6E30_0 unk_50;
    u8 pad_5C[0x34];
    s8 unk_90;
    u8 pad_91[0x1B];
    unk_001F6E30_0 unk_AC;
} unk_001F6E30_2;

extern f32 func_00151360(f32);
extern f32 func_001E60E0(f32);
extern void func_00203450(unk_001F6E30_2 *, unk_001F6E30_0 *);
extern s16 D_005AD91C[];

#define UNK_001F6E30_COPY(dst, src)                       \
    do {                                                 \
        ((u32 *)(dst))[0] = ((const u32 *)(src))[0];       \
        ((u32 *)(dst))[1] = ((const u32 *)(src))[1];       \
        ((u32 *)(dst))[2] = ((const u32 *)(src))[2];       \
    } while (0)

#define UNK_001F6E30_DOT(a, b)                            \
    ((a).unk_00 * (b).unk_00 + (a).unk_04 * (b).unk_04 +   \
     (a).unk_08 * (b).unk_08)

void func_001F6E30(unk_001F6E30_2 *arg0) {
    unk_001F6E30_0 sp20;
    unk_001F6E30_0 sp30;
    f32 sp3C;

    if (arg0->unk_90 && !((s64)D_005AD91C[0] & 8)) {
        sp20.unk_00 = arg0->unk_2C.unk_00 - arg0->unk_08->unk_1C.unk_00;
        sp20.unk_04 = arg0->unk_2C.unk_04 - arg0->unk_08->unk_1C.unk_04;
        sp20.unk_08 = arg0->unk_2C.unk_08 - arg0->unk_08->unk_1C.unk_08;
        sp30.unk_00 = arg0->unk_50.unk_00 - arg0->unk_08->unk_1C.unk_00;
        sp30.unk_04 = arg0->unk_50.unk_04 - arg0->unk_08->unk_1C.unk_04;
        sp30.unk_08 = arg0->unk_50.unk_08 - arg0->unk_08->unk_1C.unk_08;

        if ((sp20.unk_00 != 0.0f || sp20.unk_04 != 0.0f || sp20.unk_08 != 0.0f) &&
            (sp30.unk_00 != 0.0f || sp30.unk_04 != 0.0f || sp30.unk_08 != 0.0f)) {
            sp3C = func_001E60E0(func_00151360(sp30.unk_00) +
                                 func_00151360(sp30.unk_04) +
                                 func_00151360(sp30.unk_08));
            if (sp3C != 0.0f) {
                sp3C = 1.0f / sp3C;
                sp30.unk_00 = sp3C * sp30.unk_00;
                sp30.unk_04 = sp3C * sp30.unk_04;
                sp30.unk_08 = sp3C * sp30.unk_08;
            } else {
                sp30 = sp30;
            }
            sp20.unk_00 = sp30.unk_00 * UNK_001F6E30_DOT(sp20, sp30);
            sp20.unk_04 = sp30.unk_04 * UNK_001F6E30_DOT(sp20, sp30);
            sp20.unk_08 = sp30.unk_08 * UNK_001F6E30_DOT(sp20, sp30);
            sp20.unk_00 += arg0->unk_08->unk_1C.unk_00;
            sp20.unk_04 += arg0->unk_08->unk_1C.unk_04;
            sp20.unk_08 += arg0->unk_08->unk_1C.unk_08;
        } else {
            UNK_001F6E30_COPY(&sp20, &arg0->unk_08->unk_1C);
        }
    } else {
        UNK_001F6E30_COPY(&sp20, &arg0->unk_08->unk_1C);
    }
    arg0->unk_AC.unk_00 = sp20.unk_00 - arg0->unk_20.unk_00;
    arg0->unk_AC.unk_04 = sp20.unk_04 - arg0->unk_20.unk_04;
    arg0->unk_AC.unk_08 = sp20.unk_08 - arg0->unk_20.unk_08;
    UNK_001F6E30_COPY(&arg0->unk_2C, &sp20);
    func_00203450(arg0, &sp20);
    UNK_001F6E30_COPY(&arg0->unk_08->unk_1C, &arg0->unk_2C);
}
