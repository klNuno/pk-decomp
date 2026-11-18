/* profile: opt_300 */
#include "common.h"

typedef struct unk_002B4740_0 {
    void *unk_00;
    void *unk_04;
    void *unk_08;
    u8 pad_0C[0x10];
} unk_002B4740_0;

typedef struct unk_002B4740_1 {
    u8 pad_00[0x3A8];
    unk_002B4740_0 unk_3A8[1];
} unk_002B4740_1;

typedef struct unk_002B4740_2 {
    f32 unk_00, unk_04, unk_08, unk_0C;
    u8 pad_10[4];
    s32 unk_14;
    s32 unk_18;
    s32 unk_1C;
    s32 unk_20;
} unk_002B4740_2;

void memset(void *, s32, s32);
extern void *(*D_0035F644)(s32);
extern unk_002B4740_1 D_007B2370;
extern s32 D_007B26F4[];
extern s32 D_007B26FC[];
extern u8 D_007B7B98[];
extern u8 D_007B7B9A[];
extern u8 D_007B7B9C[];
extern s32 D_007B8480[];

static inline unk_002B4740_2 *unk_00(s32 arg0) {
    void **slot;

    switch (arg0) {
    case 0xDE0:
        slot = &D_007B2370.unk_3A8[D_007B26F4[D_007B8480[0]]].unk_00;
        break;
    case 0xDE1:
        slot = &D_007B2370.unk_3A8[D_007B26FC[D_007B8480[0]]].unk_04;
        break;
    case 0x8513:
        slot = &D_007B2370.unk_3A8[D_007B26FC[0]].unk_08;
        break;
    default:
        return NULL;
    }
    if (*slot == NULL) {
        *slot = D_0035F644(0x50);
        memset(*slot, 0, 0x50);
    }
    return *slot;
}

void func_002B4740(s32 arg0, s32 arg1, s32 *arg2) {
    unk_002B4740_2 *temp;
    s32 temp2;

    switch (arg1) {
    case 0x2800:
    case 0x2801:
    case 0x2802:
    case 0x2803:
        temp2 = arg2[0];
        temp = unk_00(arg0);
        if (temp != NULL) {
            switch (arg1) {
            case 0x2800:
                temp->unk_18 = temp2;
                break;
            case 0x2801:
                temp->unk_14 = temp2;
                break;
            case 0x2802:
                temp->unk_1C = temp2;
                break;
            case 0x2803:
                temp->unk_20 = temp2;
                break;
            }
            switch (arg0) {
            case 0xDE0:
                D_007B7B98[D_007B8480[0]] = 1;
                break;
            case 0xDE1:
                D_007B7B9A[D_007B8480[0]] = 1;
                break;
            case 0x8513:
            case 0x8515:
            case 0x8516:
            case 0x8517:
            case 0x8518:
            case 0x8519:
            case 0x851A:
                D_007B7B9C[0] = 1;
                break;
            }
        }
        break;
    case 0x1004:
        temp = unk_00(arg0);
        if (temp == NULL) {
            return;
        }
        temp->unk_00 = (f32)arg2[0] / 2147483648.0f;
        temp->unk_04 = (f32)arg2[1] / 2147483648.0f;
        temp->unk_08 = (f32)arg2[2] / 2147483648.0f;
        temp->unk_0C = (f32)arg2[3] / 2147483648.0f;
        break;
    }
    switch (arg0) {
    case 0xDE0:
        D_007B7B98[D_007B8480[0]] = 1;
        break;
    case 0xDE1:
        D_007B7B9A[D_007B8480[0]] = 1;
        break;
    case 0x8513:
    case 0x8515:
    case 0x8516:
    case 0x8517:
    case 0x8518:
    case 0x8519:
    case 0x851A:
        D_007B7B9C[0] = 1;
        break;
    }
}
