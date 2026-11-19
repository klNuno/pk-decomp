#include "common.h"

typedef struct {
    u8 unk_00_0 : 1;
    u8 unk_00_1 : 2;
    u8 unk_00_3 : 1;
    u8 unk_00_4 : 1;
    u8 unk_00_5 : 1;
    u8 unk_00_6 : 1;
    u8 unk_00_7 : 1;
    u8 pad_01[8];
} unk_func_00298C60_0;

typedef struct {
    u8 unk_00_0 : 4;
    u8 unk_00_4 : 1;
    u8 unk_00_5 : 3;
    u8 unk_01_0 : 6;
    u8 unk_01_6 : 1;
    u8 unk_01_7 : 1;
    u8 pad_02[8];
} unk_func_00298C60_1;

typedef struct {
    u8 unk_00_0 : 1;
    u8 unk_00_1 : 7;
    u8 pad_01;
    u8 unk_02_0 : 1;
    u8 unk_02_1 : 2;
    u8 unk_02_3 : 5;
    u8 pad_03[8];
} unk_func_00298C60_2;

typedef struct {
    u16 unk_00_0 : 11;
    u16 unk_00_11 : 5;
    u16 unk_02_0 : 11;
    u16 unk_02_11 : 5;
    u8 pad_04[8];
} unk_func_00298C60_3;

typedef struct {
    u8 pad_00[0x14];
    u32 unk_14;
} unk_func_00298C60_4;

extern s32 D_007B0778[];
extern s32 D_007B077C[];
extern unk_func_00298C60_0 D_007B08C0;
extern unk_func_00298C60_3 D_007B0910;
extern unk_func_00298C60_3 D_007B0914;
extern unk_func_00298C60_0 D_007B0938;
extern unk_func_00298C60_2 D_007B0948;
extern unk_func_00298C60_1 D_007B09D2;
extern unk_func_00298C60_0 D_007B09D4;
extern s32 D_007B2370[];
extern s32 D_007B24E4[];
extern s32 D_007B24E8[];
extern unk_func_00298C60_4 *D_007B25B0[];
extern s8 D_007B7B8E[];
extern s8 D_007B7B91[];
extern s32 D_007B7B94[];
extern s32 D_007B7BA4[];
extern u8 D_007B8324[];
extern s32 D_007B836C[];
extern s32 D_007B8480[];
extern s32 *D_007B8F54[];
extern s8 *D_007B8F58[];
extern s8 *D_007B8F78[];

void func_00298C60(s32 arg0) {
    switch (arg0) {
    case 0xB50:
        D_007B24E4[0] &= ~0x400;
        break;
    case 0xDE1:
        {
            u32 temp = D_007B8480[0] == 0 ? 0xFFFFFFFDu : 0xFFFFFDFFu;
            D_007B24E8[0] &= temp;
        }
        D_007B08C0.unk_00_4 = D_007B24E8[0] & 0xF ? 1 : 0;
        D_007B09D2.unk_00_4 = 1;
        break;
    case 0xBC0:
        D_007B2370[0] &= ~0x400;
        D_007B0948.unk_00_0 = 0;
        D_007B09D4.unk_00_5 = 1;
        break;
    case 0xD80:
        D_007B7BA4[0] &= 0xEFFFFFFF;
        break;
    case 0xBE2:
        D_007B2370[0] &= ~0x100;
        D_007B08C0.unk_00_6 = 0;
        D_007B09D2.unk_00_4 = 1;
        break;
    case 0xB57:
        D_007B24E4[0] &= ~0x200;
        *D_007B8F54[0] &= ~1;
        break;
    case 0xB44:
        D_007B7B91[0] = 1;
        D_007B2370[0] &= ~0x2000;
        break;
    case 0xB71:
        D_007B2370[0] &= ~0x800;
        D_007B0948.unk_02_0 = 1;
        D_007B09D4.unk_00_5 = 1;
        D_007B0948.unk_02_1 = 1;
        D_007B09D4.unk_00_5 = 1;
        break;
    case 0xBD0:
        D_007B2370[0] &= ~0x200;
        D_007B0938.unk_00_0 = 0;
        D_007B09D4.unk_00_3 = 1;
        break;
    case 0xB60:
        D_007B2370[0] &= ~0x80;
        D_007B08C0.unk_00_5 = 0;
        D_007B09D2.unk_00_4 = 1;
        *D_007B8F58[0] = 0;
        break;
    case 0xBA1:
        D_007B24E4[0] &= ~0x100;
        *D_007B8F78[0] = 0;
        break;
    case 0x4000:
        D_007B24E4[0] &= ~1;
        D_007B7B8E[0] = 1;
        break;
    case 0x4001:
        D_007B24E4[0] &= ~2;
        D_007B7B8E[0] = 1;
        break;
    case 0x4002:
        D_007B24E4[0] &= ~4;
        D_007B7B8E[0] = 1;
        break;
    case 0x4003:
        D_007B24E4[0] &= ~8;
        D_007B7B8E[0] = 1;
        break;
    case 0x4004:
        D_007B24E4[0] &= ~0x10;
        D_007B7B8E[0] = 1;
        break;
    case 0x4005:
        D_007B24E4[0] &= ~0x20;
        D_007B7B8E[0] = 1;
        break;
    case 0x4006:
        D_007B24E4[0] &= ~0x40;
        D_007B7B8E[0] = 1;
        break;
    case 0x4007:
        D_007B24E4[0] &= ~0x80;
        D_007B7B8E[0] = 1;
        break;
    case 0xB20:
        D_007B2370[0] &= ~2;
        break;
    case 0xB24:
        D_007B2370[0] &= ~4;
        break;
    case 0xBF1:
        D_007B2370[0] &= ~0x1000;
        break;
    case 0xD90:
        D_007B7BA4[0] &= ~0x400;
        break;
    case 0xD91:
        D_007B7BA4[0] &= ~0x800;
        break;
    case 0xD92:
        D_007B7BA4[0] &= ~0x1000;
        break;
    case 0xD93:
        D_007B7BA4[0] &= ~0x10;
        break;
    case 0xD94:
        D_007B7BA4[0] &= ~0x20;
        break;
    case 0xD95:
        D_007B7BA4[0] &= ~0x40;
        break;
    case 0xD96:
        D_007B7BA4[0] &= ~0x80;
        break;
    case 0xD97:
        D_007B7BA4[0] &= ~0x100;
        break;
    case 0xD98:
        D_007B7BA4[0] &= ~0x200;
        break;
    case 0xDB0:
        D_007B7BA4[0] &= 0xFFBFFFFF;
        break;
    case 0xDB1:
        D_007B7BA4[0] &= 0xFF7FFFFF;
        break;
    case 0xDB2:
        D_007B7BA4[0] &= 0xFEFFFFFF;
        break;
    case 0xDB3:
        D_007B7BA4[0] &= 0xFFFEFFFF;
        break;
    case 0xDB4:
        D_007B7BA4[0] &= 0xFFFDFFFF;
        break;
    case 0xDB5:
        D_007B7BA4[0] &= 0xFFFBFFFF;
        break;
    case 0xDB6:
        D_007B7BA4[0] &= 0xFFF7FFFF;
        break;
    case 0xDB7:
        D_007B7BA4[0] &= 0xFFEFFFFF;
        break;
    case 0xDB8:
        D_007B7BA4[0] &= 0xFFDFFFFF;
        break;
    case 0xB10:
        D_007B2370[0] &= ~1;
        break;
    case 0xB41:
        D_007B2370[0] &= ~8;
        break;
    case 0xB42:
        D_007B2370[0] &= ~0x10;
        break;
    case 0xC11:
        D_007B2370[0] &= ~0x20;
        D_007B0910.unk_00_0 = 0;
        D_007B09D2.unk_01_6 = 1;
        D_007B0910.unk_02_0 = D_007B0778[0] - 1;
        D_007B0914.unk_00_0 = 0;
        D_007B09D2.unk_01_6 = 1;
        D_007B09D2.unk_01_6 = 1;
        if (D_007B8324[0] == 1) {
            D_007B0914.unk_02_0 = (D_007B077C[0] >> 1) - 1;
            D_007B09D2.unk_01_6 = 1;
        } else {
            D_007B0914.unk_02_0 = D_007B077C[0] - 1;
            D_007B09D2.unk_01_6 = 1;
        }
        break;
    case 0xB90:
        D_007B2370[0] &= ~0x40;
        break;
    case 0xDE0:
        {
            u32 temp = D_007B8480[0] == 0 ? 0xFFFFFFFEu : 0xFFFFFFFEu;
            D_007B24E8[0] &= temp;
        }
        D_007B08C0.unk_00_4 = D_007B24E8[0] & 0xF ? 1 : 0;
        D_007B09D2.unk_00_4 = 1;
        break;
    case 0x8513:
        D_007B24E8[0] &= ~8;
        D_007B08C0.unk_00_4 = D_007B24E8[0] & 0xF ? 1 : 0;
        D_007B09D2.unk_00_4 = 1;
        D_007B7B94[0] = -1;
        break;
    case 0x81FB:
        D_007B24E8[0] &= ~0x10;
        break;
    case 0xC63:
        D_007B25B0[0]->unk_14 &= ~8;
        break;
    case 0xC62:
        D_007B25B0[0]->unk_14 &= ~4;
        break;
    case 0xC60:
        D_007B25B0[0]->unk_14 &= ~1;
        break;
    case 0xC61:
        D_007B25B0[0]->unk_14 &= ~2;
        break;
    case 0xF01:
        D_007B2370[0] &= ~0x4000;
        break;
    case 0xF02:
        D_007B2370[0] &= 0xFFFF7FFF;
        break;
    case 0xF03:
        D_007B2370[0] &= 0xFFFEFFFF;
        break;
    case 0xF04:
        D_007B2370[0] &= 0xFFFDFFFF;
        break;
    case 0x3000:
        D_007B836C[0] &= ~1;
        break;
    case 0x3001:
        D_007B836C[0] &= ~2;
        break;
    case 0x3002:
        D_007B836C[0] &= ~4;
        break;
    case 0x3003:
        D_007B836C[0] &= ~8;
        break;
    case 0x3004:
        D_007B836C[0] &= ~0x10;
        break;
    case 0x3005:
        D_007B836C[0] &= ~0x20;
        break;
    }
}
