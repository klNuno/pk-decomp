/* profile: opt_300 */
#include "common.h"

typedef struct unk_func_002AAB30_0 {
    struct unk_func_002AAB30_0 *unk_00;
    u8 pad_04[4];
    u8 unk_08;
    u8 pad_09[0x27];
    u16 unk_30;
} unk_func_002AAB30_0;

typedef struct {
    u8 pad_00[0x10];
    u8 unk_10;
    u8 pad_11[3];
    s32 unk_14;
    unk_func_002AAB30_0 *unk_18;
} unk_func_002AAB30_1;

typedef struct {
    u16 unk_00;
    u8 unk_02;
    u8 unk_03;
    void *unk_04;
    s32 unk_08;
    s32 unk_0C;
} unk_func_002AAB30_2;

typedef struct {
    u8 pad_00[0x1C];
    u32 *unk_1C;
    s32 unk_20;
} unk_func_002AAB30_3;

void func_00297760(s32);
void func_002AA880(unk_func_002AAB30_0 *);
void func_002B1AE0(unk_func_002AAB30_0 *);
void *memcpy(void *, const void *, u32);
extern s32 D_007B2414[];
extern s32 D_007B2444[];
extern s32 D_007B244C[];
extern s32 D_007B24E8[];
extern unk_func_002AAB30_3 *D_007B8048[];
extern u8 D_007B85F0[];
extern u8 D_007B8EC0[];
extern unk_func_002AAB30_2 *D_007B8EF4[];

void func_002AAB30(unk_func_002AAB30_1 *arg0) {
    unk_func_002AAB30_0 *s0;
    unk_func_002AAB30_0 *p;
    unk_func_002AAB30_2 *pkt;

    s0 = arg0->unk_18;
    if (D_007B2414[0] == -1) {
        return;
    }
    if (D_007B2444[0] & 3) {
        memcpy(D_007B85F0, arg0, 0x10);
    }
    func_00297760(arg0->unk_14);
    if (arg0->unk_10 != 0) {
        if (s0 != NULL && (s0->unk_30 & 0x7FFF) > 0) {
            p = s0;
            if ((D_007B24E8[0] & 8) && p != NULL) {
                do {
                    func_002B1AE0(p);
                    if (p->unk_08 != 0) {
                        break;
                    }
                    p = p->unk_00;
                } while (p != NULL);
            }
            pkt = D_007B8EF4[0];
            D_007B8EF4[0] = pkt + 1;
            pkt->unk_00 = 0;
            pkt->unk_03 = 0x50;
            pkt->unk_04 = (u8 *)s0 + 0x20;
            pkt->unk_0C = 0;
            pkt->unk_08 = 0;
            if ((D_007B244C[0] & 0x01000800) == 0x01000800) {
                unk_func_002AAB30_3 *q = D_007B8048[0];
                q->unk_1C[q->unk_20++] = (u32)pkt;
                q->unk_1C[q->unk_20++] = 0x80000000;
            }
        }
    } else {
        func_002AA880(s0);
    }
    D_007B8EC0[0] = 0;
}
