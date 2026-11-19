/* profile: o0_301_p */
#include "common.h"

typedef struct {
    f32 unk_00, unk_04, unk_08;
} unk_func_001F62F0_0;

typedef struct {
    u8 pad_00[0x130];
    unk_func_001F62F0_0 unk_130;
} unk_func_001F62F0_1;

typedef struct {
    u8 pad_00[0x75];
    u8 unk_75;
} unk_func_001F62F0_2;

typedef struct {
    u8 pad_00[0x18];
    f32 unk_18;
    u8 pad_1C[0x1C];
    f32 unk_38;
    u8 pad_3C[8];
    f32 unk_44;
    u8 pad_48[8];
    f32 unk_50, unk_54, unk_58;
    u8 pad_5C[0xC];
    s32 unk_68;
    u8 pad_6C[4];
    u16 unk_70, unk_72;
} unk_func_001F62F0_3;

typedef struct {
    unk_func_001F62F0_1 *unk_00;
    u8 pad_04[4];
    unk_func_001F62F0_2 *unk_08;
    unk_func_001F62F0_3 *unk_0C;
    u8 pad_10[0xC];
    s32 unk_1C;
    unk_func_001F62F0_0 unk_20, unk_2C;
    u8 pad_38[0x18];
    unk_func_001F62F0_0 unk_50;
    u8 pad_5C[0x44];
    unk_func_001F62F0_0 unk_A0;
    u8 pad_AC[0x18];
    f32 unk_C4, unk_C8, unk_CC;
} unk_func_001F62F0_4;

typedef struct {
    u8 pad_00[8];
    s32 unk_08;
} unk_func_001F62F0_5;

unk_func_001F62F0_5 *HIE_fn_hGetSuperObjectObject(s32);
u8 *func_001B8500(s32);
f32 func_00151360(f32);
f32 func_001E60E0(f32);
void func_001FDAE0(unk_func_001F62F0_4 *, unk_func_001F62F0_0 *);
s32 func_001FDBF0(s32, f32 *);
f32 func_001FE030(unk_func_001F62F0_0 *, unk_func_001F62F0_0 *, unk_func_001F62F0_0 *);

extern f32 D_005AD8EC[], D_005AD8F0[], D_005AD8F4[], D_005AD8F8[], D_005AD8FC[];
extern f32 D_005AD900[], D_005AD904[], D_005AD908[], D_005AD90C[];

#define UNK_001F62F0_SUB(out, a, b) do { \
    (out).unk_00 = (a).unk_00 - (b).unk_00; \
    (out).unk_04 = (a).unk_04 - (b).unk_04; \
    (out).unk_08 = (a).unk_08 - (b).unk_08; \
} while (0)
#define UNK_001F62F0_LEN(v) \
    func_001E60E0(func_00151360((v).unk_08) + \
        (func_00151360((v).unk_00) + func_00151360((v).unk_04)))
#define UNK_001F62F0_NONZERO(v) \
    (0.0f != (v).unk_00 || 0.0f != (v).unk_04 || 0.0f != (v).unk_08)
#define UNK_001F62F0_NORM(v, temp) { \
    (temp) = UNK_001F62F0_LEN(v); \
    if (0.0f != (temp)) { \
        (temp) = 1.0f / (temp); \
        (v).unk_00 = (temp) * (v).unk_00; \
        (v).unk_04 = (temp) * (v).unk_04; \
        (v).unk_08 = (temp) * (v).unk_08; \
    } else { \
        (v) = (v); \
    } \
}
#define UNK_001F62F0_WORD(i) \
    ((s32 *)(func_001B8500(HIE_fn_hGetSuperObjectObject(arg0->unk_1C)->unk_08) + 0x10))[i]

void func_001F62F0(unk_func_001F62F0_4 *arg0) {
    unk_func_001F62F0_0 sp28, sp38, sp48;
    f32 sp54, sp58, sp5C, sp60, sp64, sp68, sp6C;

    if (arg0->unk_0C->unk_72 & 0x80) {
        arg0->unk_C4 = arg0->unk_0C->unk_38;
        arg0->unk_C8 = arg0->unk_0C->unk_44;
        arg0->unk_CC = arg0->unk_0C->unk_50;
        return;
    }
    if ((arg0->unk_0C->unk_72 & 0x2000) || arg0->unk_0C->unk_68 == 0) {
        arg0->unk_C4 = arg0->unk_0C->unk_38;
        arg0->unk_C8 = arg0->unk_0C->unk_44;
    } else {
        sp54 = 0.0f;
        if (!(arg0->unk_0C->unk_70 & 1)) {
            UNK_001F62F0_SUB(sp28, arg0->unk_2C, arg0->unk_20);
            sp54 = UNK_001F62F0_LEN(sp28);
            sp54 *= D_005AD8EC[0];
            if (!(sp54 <= D_005AD8F0[0])) {
                sp54 = D_005AD8F0[0];
            }
            func_001FDAE0(arg0, &sp28);
            sp60 = UNK_001F62F0_LEN(sp28);
            if (sp54 < sp60 * D_005AD8F4[0]) {
                sp54 = sp60 * D_005AD8F4[0];
            }
        }
        arg0->unk_C4 = sp54;
        if (!(arg0->unk_0C->unk_70 & 4)) {
            sp54 = 0.0f;
            UNK_001F62F0_SUB(sp28, arg0->unk_50, arg0->unk_20);
            if (UNK_001F62F0_NONZERO(sp28)) {
                if (UNK_001F62F0_NONZERO(sp28)) {
                    UNK_001F62F0_NORM(sp28, sp64);
                }
                UNK_001F62F0_SUB(sp38, arg0->unk_50, arg0->unk_2C);
                if (UNK_001F62F0_NONZERO(sp38)) {
                    UNK_001F62F0_NORM(sp38, sp68);
                }
                sp54 = func_001FE030(&sp28, &sp38, NULL);
            }
            sp54 *= D_005AD8F8[0];
            if (!(sp54 <= D_005AD8FC[0])) {
                sp54 = D_005AD8FC[0];
            }
            func_001FDBF0(arg0->unk_0C->unk_68, &sp58);
            if (sp54 < sp58 * D_005AD900[0]) {
                sp54 = sp58;
            }
            sp58 = arg0->unk_0C->unk_18;
            UNK_001F62F0_SUB(sp28, arg0->unk_50, arg0->unk_20);
            sp58 -= UNK_001F62F0_LEN(sp28);
            if (!(sp58 <= 1.0f)) {
                sp54 /= sp58;
            } else if (sp58 < -1.0f) {
                if (!(sp58 <= 0.0f)) {
                    sp6C = sp58;
                } else {
                    sp6C = -sp58;
                }
                sp54 *= sp6C;
            }
        }
        arg0->unk_C8 = sp54;
    }
    if ((arg0->unk_08->unk_75 & 0x1000) || arg0->unk_0C->unk_68 == 0) {
        arg0->unk_CC = arg0->unk_0C->unk_50;
        return;
    }
    sp54 = 0.0f;
    sp48.unk_08 = sp48.unk_04 = sp48.unk_00 = 0.0f;
    if (!(arg0->unk_0C->unk_70 & 0x10)) {
        ((s32 *)&sp28)[0] = UNK_001F62F0_WORD(0);
        ((s32 *)&sp28)[1] = UNK_001F62F0_WORD(1);
        ((s32 *)&sp28)[2] = UNK_001F62F0_WORD(2);
        UNK_001F62F0_SUB(sp28, arg0->unk_A0, sp28);
        sp54 = UNK_001F62F0_LEN(sp28);
        ((s32 *)&sp48)[0] = ((s32 *)&sp28)[0];
        ((s32 *)&sp48)[1] = ((s32 *)&sp28)[1];
        ((s32 *)&sp48)[2] = ((s32 *)&sp28)[2];
    }
    sp54 *= D_005AD904[0];
    if (!(sp54 <= D_005AD908[0])) {
        sp54 = D_005AD908[0];
    }
    func_001FDAE0(arg0, &sp28);
    if (sp54 < D_005AD90C[0] * UNK_001F62F0_LEN(sp28)) {
        sp54 = D_005AD90C[0] * UNK_001F62F0_LEN(sp28);
    }
    arg0->unk_CC = sp54;
    if (UNK_001F62F0_NONZERO(sp48) && UNK_001F62F0_NONZERO(arg0->unk_00->unk_130)) {
        sp5C = sp48.unk_08 * arg0->unk_00->unk_130.unk_08 +
            (sp48.unk_00 * arg0->unk_00->unk_130.unk_00 + sp48.unk_04 * arg0->unk_00->unk_130.unk_04);
        if (sp5C < -0.9f) {
            arg0->unk_0C->unk_58 = 40.0f;
            arg0->unk_0C->unk_54 = 40.0f;
        }
    }
}
