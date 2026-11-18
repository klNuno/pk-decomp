/* profile: opt_300 */
#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    s32 unk_1C;
} unk_func_002A6010_0;

typedef struct {
    u16 unk_00;
    u8 unk_02;
    u8 unk_03;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
} unk_func_002A6010_1;

typedef struct {
    u8 pad_00[0x1C];
    u32 *unk_1C;
    s32 unk_20;
} unk_func_002A6010_2;

void func_00286470(s32, s32, s32);
void func_00297710(void);
void func_00297760(s32);
void func_00297C20(void);
void func_002BFD60();
s32 func_002CC5D0(void);
void *memcpy(void *, const void *, u32);
extern u8 D_007B09D0[];
extern s32 D_007B2370[];
extern s32 D_007B2414[];
extern s32 D_007B2444[];
extern s32 D_007B244C[];
extern unk_func_002A6010_2 *D_007B8048[];
extern u8 D_007B85F0[];
extern unk_func_002A6010_1 *D_007B8EF4[];

void func_002A6010(unk_func_002A6010_0 *arg0) {
    unk_func_002A6010_1 *pkt;

    if (arg0->unk_1C == 0) {
        func_00286470(arg0->unk_10, arg0->unk_14, arg0->unk_18);
        return;
    }
    if (D_007B2414[0] == -1) {
        return;
    }
    if (D_007B2370[0] & 0x4000) {
        if (*(s64 *)D_007B09D0 != 0) {
            func_002BFD60();
        }
    } else {
        if (D_007B2444[0] & 3) {
            memcpy(D_007B85F0, arg0, 0x10);
        }
        func_00297760(arg0->unk_10);
        func_00297710();
    }
    if (func_002CC5D0() == 0) {
        func_00297C20();
    }
    pkt = D_007B8EF4[0];
    D_007B8EF4[0] = pkt + 1;
    pkt->unk_00 = 0;
    if (arg0->unk_18 != 0) {
        pkt->unk_03 = 0x50;
        pkt->unk_04 = arg0->unk_1C;
    } else {
        pkt->unk_03 = 0x10;
        pkt->unk_04 = 0;
    }
    pkt->unk_0C = 0;
    pkt->unk_08 = 0;
    if ((D_007B244C[0] & 0x01000800) == 0x01000800) {
        unk_func_002A6010_2 *q = D_007B8048[0];
        q->unk_1C[q->unk_20++] = (u32)pkt;
        q->unk_1C[q->unk_20] = 0x81000000;
        if (arg0->unk_18 == 0) {
            q->unk_1C[q->unk_20] |= 0x02000000;
        }
        q->unk_20++;
    }
}
