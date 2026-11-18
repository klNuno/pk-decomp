#include "common.h"

typedef struct {
    f32 m[4][4];
} __attribute__((aligned(16))) unk_Q_0;

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} __attribute__((aligned(16))) unk_Q_1;

typedef struct {
    s16 unk_00;
    u8 unk_02;
    u8 unk_03;
    u8 pad_04[4];
    s32 unk_08;
    s32 unk_0C;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    s32 unk_1C;
    unk_Q_0 unk_20;
    s32 unk_60;
    s32 unk_64;
    s32 unk_68;
    s32 unk_6C;
    unk_Q_0 unk_70;
    unk_Q_0 unk_B0;
} unk_Q_2;

typedef struct {
    u8 pad_00[0x6090];
    f32 unk_6090;
    f32 unk_6094;
    f32 unk_6098;
    f32 unk_609C;
    f32 unk_60A0;
    f32 unk_60A4;
    u8 pad_60A8[0x62B0 - 0x60A8];
    unk_Q_0 unk_62B0;
    u8 pad_62F0[0x6740 - 0x62F0];
    unk_Q_0 unk_6740;
    u8 pad_6780[0x6B84 - 0x6780];
    unk_Q_2 *unk_6B84;
} unk_Q_3;

void func_00101B10();
void func_00101C18();
void func_00297C20();
extern s32 D_0035F640;
extern u8 D_007B7B8C[];
extern s32 D_007B8EEC[];
extern s32 D_007B8EF4[];

void func_002CC120(unk_Q_3 *arg0) {
    unk_Q_1 pos;
    unk_Q_1 scale;
    unk_Q_2 *p;

    p = arg0->unk_6B84;
    D_007B7B8C[0] = 0;
    if ((u32)(D_0035F640 - (D_007B8EF4[0] - D_007B8EEC[0]) / 16 - 1) < 15) {
        func_00297C20();
    }
    arg0->unk_6B84 = (unk_Q_2 *)((u8 *)arg0->unk_6B84 + 0xF0);
    p->unk_70 = arg0->unk_6740;
    p->unk_B0 = arg0->unk_62B0;
    func_00101C18(&p->unk_20);
    p->unk_20.m[0][0] = scale.unk_00 = 0.5f * arg0->unk_6098;
    p->unk_20.m[1][1] = scale.unk_04 = 0.5f * arg0->unk_609C;
    p->unk_20.m[2][2] = scale.unk_08 = 0.5f * (arg0->unk_60A4 - arg0->unk_60A0);
    scale.unk_0C = 0.0f;
    pos.unk_00 = arg0->unk_6090;
    pos.unk_04 = arg0->unk_6094;
    pos.unk_08 = arg0->unk_60A0;
    pos.unk_0C = 1.0f;
    func_00101B10(p->unk_20.m[3], &scale, &pos);
    p->unk_00 = 0xE;
    p->unk_03 = 0x10;
    p->unk_02 = 0;
    p->unk_08 = 0x13000000;
    p->unk_0C = 0x01000404;
    p->unk_14 = 0;
    p->unk_10 = 0;
    p->unk_18 = 0x01000404;
    p->unk_1C = 0x6C040008;
    p->unk_64 = 0;
    p->unk_60 = 0;
    p->unk_68 = 0x01000404;
    p->unk_6C = 0x6C080034;
}
