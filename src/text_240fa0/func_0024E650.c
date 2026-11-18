/* profile: o0_301_p */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_0024E650_0;

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
} unk_func_0024E650_1;

typedef struct {
    u8 pad_00[0x104];
    s32 unk_104;
    u8 pad_108[0x14];
    unk_func_0024E650_0 *unk_11C;
    u8 pad_120[0x128];
    f32 unk_248;
    f32 unk_24C;
    u8 pad_250[0xC8];
    unk_func_0024E650_1 *unk_318;
} unk_func_0024E650_2;

typedef struct {
    u8 pad_00[4];
    u8 *unk_04;
    u8 *unk_08;
    u8 *unk_0C;
} unk_func_0024E650_3;

extern s32 D_00360180;
extern unk_func_0024E650_3 *D_003601D8;
extern unk_func_0024E650_0 D_006053D0;
extern f32 D_006053D4[];
extern f32 D_006053D8[];

f32 func_00151360(f32);
f32 func_001E60E0(f32);
void func_001FD710(unk_func_0024E650_3 *, u8 *, u8 *, u8 *, s32, s32, s32);
void func_00257450(unk_func_0024E650_0 *, s32);
void func_00257510(unk_func_0024E650_0 *, s32);
void func_00258210(s32, unk_func_0024E650_0 *, unk_func_0024E650_0 *, s32);

#define UNK_0024E650_0() do { \
    sp58.unk_00 = D_006053D0.unk_00 - sp68.unk_00; \
    sp58.unk_04 = *D_006053D4 - sp68.unk_04; \
    sp58.unk_08 = *D_006053D8 - sp68.unk_08; \
    sp58.unk_00 -= sp48.unk_00; \
    sp58.unk_04 -= sp48.unk_04; \
    sp58.unk_08 -= sp48.unk_08; \
    sp8C = func_001E60E0(func_00151360(sp58.unk_08) + \
                         (func_00151360(sp58.unk_00) + func_00151360(sp58.unk_04))); \
    if (sp8C < sp84) { \
        sp84 = sp8C; \
        ((s32 *)&sp38)[0] = ((s32 *)&D_006053D0)[0]; \
        ((s32 *)&sp38)[1] = ((s32 *)&D_006053D0)[1]; \
        ((s32 *)&sp38)[2] = ((s32 *)&D_006053D0)[2]; \
    } \
} while (0)

void func_0024E650(unk_func_0024E650_2 *arg0) {
    unk_func_0024E650_0 sp28;
    unk_func_0024E650_0 sp38;
    unk_func_0024E650_0 sp48;
    unk_func_0024E650_0 sp58;
    unk_func_0024E650_0 sp68;
    unk_func_0024E650_0 sp78;
    f32 sp84;
    f32 sp88;
    f32 sp8C;

    sp88 = 0.0f;
    sp84 = arg0->unk_248;
    func_00257450(&sp28, arg0->unk_104);
    sp28.unk_00 = sp84 * sp28.unk_00;
    sp28.unk_04 = sp84 * sp28.unk_04;
    sp28.unk_08 = sp84 * sp28.unk_08;
    sp48.unk_00 = arg0->unk_11C->unk_00;
    sp48.unk_04 = arg0->unk_11C->unk_04;
    sp48.unk_08 = 1.5f + arg0->unk_11C->unk_08;
    sp38.unk_00 = 0.0f;
    sp38.unk_04 = 0.0f;
    sp38.unk_08 = 0.0f;
    func_00257510(&sp68, arg0->unk_104);
    sp68.unk_00 = 0.7f * sp68.unk_00;
    sp68.unk_04 = 0.7f * sp68.unk_04;
    sp68.unk_08 = 0.7f * sp68.unk_08;
    sp78.unk_00 = sp68.unk_00 - sp28.unk_00;
    sp78.unk_04 = sp68.unk_04 - sp28.unk_04;
    sp78.unk_08 = sp68.unk_08 - sp28.unk_08;
    func_00258210(arg0->unk_104, &sp48, &sp78, 0);
    if (0.0f != D_006053D0.unk_00 || 0.0f != *D_006053D4 || 0.0f != *D_006053D8) {
        if (arg0->unk_318 != NULL) {
            if (D_00360180 != arg0->unk_318->unk_04) {
                UNK_0024E650_0();
            }
        } else {
            UNK_0024E650_0();
        }
    }

    sp68.unk_00 = -sp68.unk_00;
    sp68.unk_04 = -sp68.unk_04;
    sp68.unk_08 = -sp68.unk_08;
    sp78.unk_00 = sp68.unk_00 - sp28.unk_00;
    sp78.unk_04 = sp68.unk_04 - sp28.unk_04;
    sp78.unk_08 = sp68.unk_08 - sp28.unk_08;
    func_00258210(arg0->unk_104, &sp48, &sp78, 0);
    if (0.0f != D_006053D0.unk_00 || 0.0f != *D_006053D4 || 0.0f != *D_006053D8) {
        if (arg0->unk_318 != NULL) {
            if (D_00360180 != arg0->unk_318->unk_04) {
                UNK_0024E650_0();
            }
        } else {
            UNK_0024E650_0();
        }
    }

    if (0.0f != sp38.unk_00 || 0.0f != sp38.unk_04 || 0.0f != sp38.unk_08) {
        sp84 -= 0.6f;
        if (sp84 < 3.0f) {
            sp84 = 3.0f;
        }
        sp38.unk_00 -= sp68.unk_00;
        sp38.unk_04 -= sp68.unk_04;
        sp38.unk_08 -= sp68.unk_08;
        sp88 = arg0->unk_24C = sp84;
        if (arg0->unk_24C < 2.0f) {
            func_001FD710(D_003601D8, D_003601D8->unk_04 + 0x70, D_003601D8->unk_08 + 0x70,
                          D_003601D8->unk_0C + 0x70, 1, 1, 4);
            func_001FD710(D_003601D8, D_003601D8->unk_04 + 0x70, D_003601D8->unk_08 + 0x70,
                          D_003601D8->unk_0C + 0x70, 1, 1, 0x20);
        }
    }
}
