#include "common.h"

typedef struct unk_func_0018C480_0 {
    u8 pad_00[0x40];
    s32 unk_40;
    s32 unk_44;
    s32 unk_48;
    s32 unk_4C;
    s32 unk_50;
    f32 unk_54;
    u8 pad_58[0x8];
    f32 unk_60[16];
} unk_func_0018C480_0;

typedef struct unk_func_0018C480_1 {
    u8 pad_00[0x100];
    f32 unk_100[16];
} unk_func_0018C480_1;

void func_0016BAB0();
void func_00177350();
void func_00285AC0();
void func_00285AF0();
extern f32 D_0035F490;
extern s32 D_0035FAF0;
extern unk_func_0018C480_1 *D_0035FB04;
extern u32 D_0035FE54;
extern unk_func_0018C480_0 D_00509940[];
extern s32 D_007B2440[];
extern s32 D_007B24E4[];
extern s32 *D_007B8F54[];

void func_0018C480(void) {
    u32 i;
    s32 off;
    unk_func_0018C480_0 *p;
    unk_func_0018C480_1 *q;

    if ((D_007B2440[0] & 0x600) != 0x200) {
        *D_007B8F54[0] |= 0x200;
        *D_007B8F54[0] &= ~0x100;
    }
    D_007B2440[0] = 0x341;
    D_007B24E4[0] &= ~0x400;
    func_0016BAB0();
    for (i = 0, off = 0; i < D_0035FE54; off += 0xA0, i++) {
        p = (unk_func_0018C480_0 *)((u8 *)D_00509940 + off);
        q = D_0035FB04;
        q->unk_100[0] = p->unk_60[0];
        q->unk_100[1] = p->unk_60[1];
        q->unk_100[2] = p->unk_60[2];
        q->unk_100[3] = p->unk_60[3];
        q->unk_100[4] = p->unk_60[4];
        q->unk_100[5] = p->unk_60[5];
        q->unk_100[6] = p->unk_60[6];
        q->unk_100[7] = p->unk_60[7];
        q->unk_100[8] = p->unk_60[8];
        q->unk_100[9] = p->unk_60[9];
        q->unk_100[10] = p->unk_60[10];
        q->unk_100[11] = p->unk_60[11];
        q->unk_100[12] = p->unk_60[12];
        q->unk_100[13] = p->unk_60[13];
        q->unk_100[14] = p->unk_60[14];
        q->unk_100[15] = p->unk_60[15];
        func_00285AC0(0x1700);
        func_00285AF0(p);
        D_0035FAF0 = p->unk_48;
        D_0035F490 = p->unk_54;
        func_00177350(p->unk_40, p->unk_44, p->unk_4C, p->unk_50);
    }
    D_0035FAF0 = 0;
    D_0035FE54 = 0;
    if (D_007B2440[0] & 0x600) {
        *D_007B8F54[0] &= ~0x200;
        *D_007B8F54[0] &= ~0x100;
    }
    D_007B2440[0] = 0;
}
