/* profile: opt_300 */
#include "common.h"

typedef struct unk_func_002AFD40_0 {
    s32 unk_00;
    s32 unk_04;
    u8 pad_08[4];
    struct unk_func_002AFD40_0 *unk_0C;
    s32 unk_10;
    u8 pad_14[4];
    s32 unk_18;
    u8 pad_1C[4];
    s32 unk_20;
} unk_func_002AFD40_0;

typedef struct unk_func_002AFD40_1 {
    u8 pad_00[0x14];
    s32 unk_14;
} unk_func_002AFD40_1;

typedef struct unk_func_002AFD40_2 {
    __int128 unk_00;
} unk_func_002AFD40_2;

void *memcpy(void *, const void *, u32);
void func_002999E0(s32);
void func_00298C60(s32);
extern void (*D_0035F64C)(unk_func_002AFD40_0 *);
extern unk_func_002AFD40_0 *D_0036049C;
extern unk_func_002AFD40_1 *D_007B25B0[];
extern s32 D_007B2370[];
extern f32 D_007B2374[];
extern s32 D_007B2378[];
extern u16 D_007B237C[];
extern f32 D_007B2380[];
extern s32 D_007B2384[];
extern s32 D_007B238C[];
extern s32 D_007B2390[];
extern u8 D_007B2394[];
extern unk_func_002AFD40_2 D_007B2460[];
extern s32 D_007B2474[];
extern f32 D_007B2478[];
extern s32 D_007B2490[];
extern s32 D_007B2494[];
extern s32 D_007B2498[];
extern s32 D_007B249C[];
extern unk_func_002AFD40_2 D_007B24A0[];
extern u8 D_007B24BC[];
extern s32 D_007B24E0[];
extern s32 D_007B24E4[];
extern s32 D_007B24E8[];
extern u8 D_007B24F0[];
extern s8 D_007B7B8C[];
extern s8 D_007B7B8E[];
extern u8 D_007B7BB0[];
extern u8 D_007B7F30[];
extern u8 D_007B7F31[];
extern unk_func_002AFD40_2 D_007B7F40[];
extern u8 D_007B7F54[];
extern u8 D_007B7F60[];
extern s32 D_007B8000[];
extern s32 D_007B8004[];
extern s32 D_007B8008[];
extern s32 D_007B800C[];
extern unk_func_002AFD40_2 D_007B8010[];
extern f32 D_007B8020[];
extern f32 D_007B8024[];
extern f32 D_007B8028[];
extern f32 D_007B802C[];
extern s32 D_007B8044[];
extern u8 D_007B8330[];
extern u8 D_007B8331[];
extern s32 D_007B8334[];
extern s32 D_007B8338[];
extern f32 D_007B833C[];
extern f32 D_007B8340[];
extern f32 D_007B8344[];
extern f32 D_007B8348[];
extern f32 D_007B834C[];
extern f32 D_007B8350[];
extern f32 D_007B8354[];
extern f32 D_007B8358[];
extern f32 D_007B835C[];
extern f32 D_007B8360[];
extern f32 D_007B8364[];
extern f32 D_007B8368[];
extern s32 D_007B836C[];
extern s32 D_007B8370[];
extern unk_func_002AFD40_2 D_007B8380[];
extern unk_func_002AFD40_2 D_007B8390[];
extern unk_func_002AFD40_2 D_007B83A0[];
extern unk_func_002AFD40_2 D_007B83B0[];
extern unk_func_002AFD40_2 D_007B83C0[];
extern unk_func_002AFD40_2 D_007B83D0[];
extern s32 D_007B83E0[];
extern f32 D_007B83F0[];
extern f32 D_007B83F4[];
extern unk_func_002AFD40_2 D_007B8400[];
extern f32 D_007B8410[];
extern f32 D_007B8414[];
extern unk_func_002AFD40_2 D_007B8420[];
extern unk_func_002AFD40_2 D_007B8430[];
extern unk_func_002AFD40_2 D_007B8450[];
extern unk_func_002AFD40_2 D_007B8460[];
extern unk_func_002AFD40_2 D_007B8470[];
extern s32 D_007B8480[];
extern s32 D_007B8484[];
extern u8 D_007B84F8[];
extern f32 D_007B850C[];
extern unk_func_002AFD40_2 D_007B8510[];
extern unk_func_002AFD40_2 D_007B8520[];
extern unk_func_002AFD40_2 D_007B8530[];
extern unk_func_002AFD40_2 D_007B8540[];
extern s32 D_007B8550[];
extern u8 D_007B8554[];

void func_002AFD40(void) {
    unk_func_002AFD40_0 *temp;
    s32 temp_v1;
    s32 temp_v1_2;

    while ((temp = D_0036049C) != NULL) {
        switch (temp->unk_00) {
        case 0x200:
            break;
        case 0x4000:
            if (temp->unk_20 & 0x400) {
                func_002999E0(0xBC0);
            } else {
                func_00298C60(0xBC0);
            }
            if (temp->unk_20 & 0x100) {
                func_002999E0(0xBE2);
            } else {
                func_00298C60(0xBE2);
            }
            if (temp->unk_20 & 0x200) {
                func_002999E0(0xBD0);
            } else {
                func_00298C60(0xBE2);
            }
            if (temp->unk_20 & 0x1000) {
                D_007B2370[0] |= 0x1000;
            } else {
                D_007B2370[0] &= ~0x1000;
            }
            D_007B2474[0] = *(s32 *)((u8 *)temp + 0x24);
            D_007B2494[0] = *(s32 *)((u8 *)temp + 0x30);
            D_007B2490[0] = *(s32 *)((u8 *)temp + 0x2C);
            D_007B2498[0] = *(s32 *)((u8 *)temp + 0x34);
            D_007B24E0[0] = *(s32 *)((u8 *)temp + 0x3C);
            D_007B2478[0] = *(f32 *)((u8 *)temp + 0x28);
            D_007B24A0[0] = *(unk_func_002AFD40_2 *)((u8 *)temp + 0x10);
            break;
        case 0x1:
            D_007B8420[0] = *(unk_func_002AFD40_2 *)((u8 *)temp + 0x10);
            D_007B8430[0] = *(unk_func_002AFD40_2 *)((u8 *)temp + 0x20);
            D_007B8450[0] = *(unk_func_002AFD40_2 *)((u8 *)temp + 0x40);
            D_007B8460[0] = *(unk_func_002AFD40_2 *)((u8 *)temp + 0x50);
            D_007B8470[0] = *(unk_func_002AFD40_2 *)((u8 *)temp + 0x60);
            D_007B8530[0] = *(unk_func_002AFD40_2 *)((u8 *)temp + 0x70);
            D_007B8540[0] = *(unk_func_002AFD40_2 *)((u8 *)temp + 0x80);
            D_007B8484[0] = *(s32 *)((u8 *)temp + 0x90);
            D_007B8480[0] = *(s32 *)((u8 *)temp + 0x98);
            D_007B8550[0] = *(s32 *)((u8 *)temp + 0x94);
            D_007B8480[0] = *(s32 *)((u8 *)temp + 0x98);
            D_007B84F8[0] = *(u8 *)((u8 *)temp + 0x9C);
            D_007B850C[0] = *(f32 *)((u8 *)temp + 0xB0);
            D_007B850C[0] = *(f32 *)((u8 *)temp + 0xB0);
            D_007B8510[0] = *(unk_func_002AFD40_2 *)((u8 *)temp + 0xB4);
            D_007B8520[0] = *(unk_func_002AFD40_2 *)((u8 *)temp + 0xC4);
            D_007B8554[0] = *(u8 *)((u8 *)temp + 0xD4);
            break;
        case 0x100:
            if (temp->unk_10 & 0x800) {
                func_002999E0(0xB71);
            } else {
                func_00298C60(0xB71);
            }
            D_007B24BC[0] = *(u8 *)((u8 *)temp + 0x14);
            break;
        case 0x2000:
            temp_v1 = temp->unk_10;
            if (temp_v1 != D_007B2370[0]) {
                if (temp_v1 & 0x20) {
                    func_002999E0(0xC11);
                } else {
                    func_00298C60(0xC11);
                }
                if (temp->unk_10 & 0x80) {
                    func_002999E0(0xB60);
                } else {
                    func_00298C60(0xB60);
                }
                if (temp->unk_10 & 0x100) {
                    func_002999E0(0xBE2);
                } else {
                    func_00298C60(0xBE2);
                }
                if (temp->unk_10 & 0x200) {
                    func_002999E0(0xBD0);
                } else {
                    func_00298C60(0xBD0);
                }
                if (temp->unk_10 & 0x400) {
                    func_002999E0(0xBC0);
                } else {
                    func_00298C60(0xBC0);
                }
                if (temp->unk_10 & 0x800) {
                    func_002999E0(0xB71);
                } else {
                    func_00298C60(0xB71);
                }
                D_007B2370[0] = temp->unk_10;
            }
            D_007B24E4[0] = *(s32 *)((u8 *)temp + 0x14);
            D_007B7B8E[0] = 1;
            temp_v1_2 = temp->unk_18;
            if (temp_v1_2 != D_007B24E8[0]) {
                if (temp_v1_2 & 2) {
                    func_002999E0(0xDE1);
                } else {
                    func_00298C60(0xDE1);
                }
                D_007B24E8[0] = temp->unk_18;
            }
            D_007B25B0[0]->unk_14 = *(s32 *)((u8 *)temp + 0x1C);
            break;
        case 0x10000:
            D_007B25B0[0]->unk_14 = temp->unk_10;
            break;
        case 0x80:
            if (temp->unk_20 & 0x80) {
                func_002999E0(0xB60);
            } else {
                func_00298C60(0xB60);
            }
            D_007B800C[0] = *(s32 *)((u8 *)temp + 0x24);
            D_007B8020[0] = *(f32 *)((u8 *)temp + 0x28);
            D_007B802C[0] = *(f32 *)((u8 *)temp + 0x34);
            D_007B8028[0] = *(f32 *)((u8 *)temp + 0x30);
            D_007B8024[0] = *(f32 *)((u8 *)temp + 0x2C);
            D_007B8010[0] = *(unk_func_002AFD40_2 *)((u8 *)temp + 0x10);
            break;
        case 0x8000:
            break;
        case 0x40:
            D_007B24E4[0] = *(s32 *)((u8 *)temp + 0x440);
            D_007B7F54[0] = *(u8 *)((u8 *)temp + 0x44C);
            D_007B7F31[0] = *(u8 *)((u8 *)temp + 0x445);
            D_007B7F30[0] = *(u8 *)((u8 *)temp + 0x444);
            D_007B7F30[0] = *(u8 *)((u8 *)temp + 0x448);
            D_007B8000[0] = *(s32 *)((u8 *)temp + 0x450);
            D_007B8004[0] = *(s32 *)((u8 *)temp + 0x454);
            D_007B8008[0] = *(s32 *)((u8 *)temp + 0x458);
            memcpy(D_007B7BB0, (u8 *)temp + 0x20, 0x380);
            memcpy(D_007B7F60, (u8 *)temp + 0x3A0, 0xA0);
            D_007B7F40[0] = *(unk_func_002AFD40_2 *)((u8 *)temp + 0x10);
            D_007B7B8E[0] = 1;
            break;
        case 0x4:
            if (temp->unk_10 & 2) {
                D_007B2370[0] |= 2;
            } else {
                D_007B2370[0] &= ~2;
            }
            if (temp->unk_10 & 4) {
                D_007B2370[0] |= 4;
            } else {
                D_007B2370[0] &= ~4;
            }
            D_007B2380[0] = *(f32 *)((u8 *)temp + 0x1C);
            D_007B2378[0] = *(s32 *)((u8 *)temp + 0x14);
            D_007B237C[0] = *(u16 *)((u8 *)temp + 0x18);
            break;
        case 0x20000:
            D_007B8044[0] = temp->unk_10;
            break;
        case 0x20:
            D_007B249C[0] = temp->unk_10;
            D_007B8330[0] = *(u8 *)((u8 *)temp + 0x14);
            D_007B8331[0] = *(u8 *)((u8 *)temp + 0x15);
            D_007B8334[0] = temp->unk_18;
            D_007B8338[0] = *(s32 *)((u8 *)temp + 0x1C);
            D_007B833C[0] = *(f32 *)((u8 *)temp + 0x20);
            D_007B8340[0] = *(f32 *)((u8 *)temp + 0x24);
            D_007B8344[0] = *(f32 *)((u8 *)temp + 0x28);
            D_007B8348[0] = *(f32 *)((u8 *)temp + 0x2C);
            D_007B834C[0] = *(f32 *)((u8 *)temp + 0x30);
            D_007B8350[0] = *(f32 *)((u8 *)temp + 0x34);
            D_007B8354[0] = *(f32 *)((u8 *)temp + 0x38);
            D_007B8358[0] = *(f32 *)((u8 *)temp + 0x3C);
            D_007B835C[0] = *(f32 *)((u8 *)temp + 0x40);
            D_007B8360[0] = *(f32 *)((u8 *)temp + 0x44);
            D_007B8364[0] = *(f32 *)((u8 *)temp + 0x48);
            D_007B8368[0] = *(f32 *)((u8 *)temp + 0x4C);
            break;
        case 0x2:
            if (temp->unk_10 & 1) {
                D_007B2370[0] |= 1;
            } else {
                D_007B2370[0] &= ~1;
            }
            D_007B2374[0] = *(f32 *)((u8 *)temp + 0x14);
            break;
        case 0x8:
            if (temp->unk_10 & 0x2000) {
                D_007B2370[0] |= 0x2000;
            } else {
                D_007B2370[0] &= ~0x2000;
            }
            if (temp->unk_10 & 8) {
                D_007B2370[0] |= 8;
            } else {
                D_007B2370[0] &= ~8;
            }
            if (temp->unk_10 & 0x10) {
                D_007B2370[0] |= 0x10;
            } else {
                D_007B2370[0] &= ~0x10;
            }
            D_007B2384[0] = *(s32 *)((u8 *)temp + 0x14);
            D_007B2384[0] = temp->unk_18;
            D_007B238C[0] = *(s32 *)((u8 *)temp + 0x1C);
            D_007B2390[0] = temp->unk_20;
            break;
        case 0x10:
            memcpy(D_007B2394, (u8 *)temp + 0x10, 0x80);
            break;
        case 0x80000:
            if (temp->unk_20 & 0x20) {
                func_002999E0(0xC11);
            } else {
                func_00298C60(0xC11);
            }
            D_007B2460[0] = *(unk_func_002AFD40_2 *)((u8 *)temp + 0x10);
            break;
        case 0x400:
            break;
        case 0x40000:
            D_007B25B0[0]->unk_14 = *(s32 *)((u8 *)temp + 0xD0);
            D_007B25B0[0] = *(unk_func_002AFD40_1 * *)((u8 *)temp + 0xD4);
            memcpy(D_007B24F0, (u8 *)temp + 0x10, 0xC0);
            break;
        case 0x1000:
            if (*(s32 *)((u8 *)temp + 0x70) & 0x100) {
                D_007B24E4[0] |= 0x100;
            } else {
                D_007B24E4[0] &= ~0x100;
            }
            D_007B8380[0] = *(unk_func_002AFD40_2 *)((u8 *)temp + 0x10);
            D_007B8390[0] = *(unk_func_002AFD40_2 *)((u8 *)temp + 0x20);
            D_007B83A0[0] = *(unk_func_002AFD40_2 *)((u8 *)temp + 0x30);
            D_007B83B0[0] = *(unk_func_002AFD40_2 *)((u8 *)temp + 0x40);
            D_007B83C0[0] = *(unk_func_002AFD40_2 *)((u8 *)temp + 0x50);
            D_007B83D0[0] = *(unk_func_002AFD40_2 *)((u8 *)temp + 0x60);
            D_007B836C[0] = *(s32 *)((u8 *)temp + 0x74);
            D_007B83E0[0] = *(s32 *)((u8 *)temp + 0x78);
            D_007B8370[0] = *(s32 *)((u8 *)temp + 0x7C);
            break;
        case 0x800:
            D_007B8410[0] = *(f32 *)((u8 *)temp + 0x28);
            D_007B8414[0] = *(f32 *)((u8 *)temp + 0x2C);
            D_007B83F0[0] = *(f32 *)((u8 *)temp + 0x20);
            D_007B83F4[0] = *(f32 *)((u8 *)temp + 0x24);
            D_007B8400[0] = *(unk_func_002AFD40_2 *)((u8 *)temp + 0x10);
            D_007B7B8C[0] = 1;
            break;
        default:
            continue;
        }

        if (D_0036049C->unk_04 != 0) {
            temp = D_0036049C->unk_0C;
            D_0035F64C(D_0036049C);
            D_0036049C = temp;
            break;
        }
        temp = D_0036049C->unk_0C;
        D_0035F64C(D_0036049C);
        D_0036049C = temp;
    }
}
