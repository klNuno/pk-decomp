/* profile: opt_300 */
#include "common.h"

typedef struct unk_func_002B5210_0 {
    void *unk_00;
    void *unk_04;
    void *unk_08;
    u8 pad_0C[0x10];
} unk_func_002B5210_0;

typedef struct unk_func_002B5210_1 {
    u8 pad_00[0x3A8];
    unk_func_002B5210_0 unk_3A8[1];
} unk_func_002B5210_1;

typedef struct unk_func_002B5210_2 {
    u8 pad_00[0x14];
    s32 unk_14;
    s32 unk_18;
    s32 unk_1C;
    s32 unk_20;
} unk_func_002B5210_2;

void memset(void *, s32, s32);
extern void *(*D_0035F644)(s32);
extern unk_func_002B5210_1 D_007B2370;
extern s32 D_007B26F4[];
extern s32 D_007B26FC[];
extern u8 D_007B7B98[];
extern u8 D_007B7B9A[];
extern u8 D_007B7B9C[];
extern s32 D_007B8480[];

static inline unk_func_002B5210_2 *get(s32 arg0) {
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

void func_002B5210(s32 arg0, s32 arg1, s32 arg2) {
    unk_func_002B5210_2 *p;

    p = get(arg0);
    if (p != NULL) {
        switch (arg1) {
        case 0x2800:
            p->unk_18 = arg2;
            break;
        case 0x2801:
            p->unk_14 = arg2;
            break;
        case 0x2802:
            p->unk_1C = arg2;
            break;
        case 0x2803:
            p->unk_20 = arg2;
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
}
