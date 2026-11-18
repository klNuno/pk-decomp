/* profile: opt_300 */
#include "common.h"

typedef struct {
    s32 unk_00;
    u8 pad_04[4];
    s32 unk_08;
    s32 unk_0C;
} unk_func_002BCAB0_0;

typedef struct {
    u8 pad_00[0x24];
    unk_func_002BCAB0_0 *unk_24[7];
} unk_func_002BCAB0_1;

typedef struct {
    u8 pad_00;
    u8 unk_01;
    u8 pad_02[0xA];
    s32 unk_0C;
    unk_func_002BCAB0_1 *unk_10;
    unk_func_002BCAB0_1 *unk_14;
    unk_func_002BCAB0_1 *unk_18;
} unk_func_002BCAB0_2;

typedef struct {
    u8 pad_00[2];
    s16 unk_02;
} unk_func_002BCAB0_3;

typedef struct {
    u8 pad_00[0x398];
    unk_func_002BCAB0_2 unk_398[1];
    u8 pad_3B4[0x3BA4 - 0x3B4];
    unk_func_002BCAB0_3 unk_3BA4[1];
} unk_func_002BCAB0_4;

void memset(void *, s32, s32);
void func_002B5DC0(unk_func_002BCAB0_0 *, void *, s32, s32, s32, s32, s32, s32, s32);
s32 func_002B4230(s32, s32);
void func_002B44E0(s64);
extern void *(*D_0035F644)(s32);
extern unk_func_002BCAB0_4 D_007B2370;
extern s32 D_007B26F4[];
extern s32 D_007B26FC[];
extern s32 D_007B2704[];
extern u8 D_007B7B98[];
extern u8 D_007B7B9A[];
extern u8 D_007B7B9C[];
extern s32 D_007B8480[];

static inline unk_func_002BCAB0_1 *func_002BCAB0_1(s32 arg0) {
    unk_func_002BCAB0_1 **p;
    switch (arg0) {
    case 0xDE0: p = &D_007B2370.unk_398[D_007B26F4[D_007B8480[0]]].unk_10; break;
    case 0xDE1: p = &D_007B2370.unk_398[D_007B26FC[D_007B8480[0]]].unk_14; break;
    case 0x8513: p = &D_007B2370.unk_398[D_007B26FC[0]].unk_18; break;
    default: return NULL;
    }
    if (*p == NULL) {
        *p = D_0035F644(0x50);
        memset(*p, 0, 0x50);
    }
    return *p;
}

static inline s32 func_002BCAB0_3(s32 arg0) {
    switch (arg0) {
    case 0xDE0: return D_007B26F4[D_007B8480[0]];
    case 0xDE1: return D_007B26FC[D_007B8480[0]];
    case 0x8513:
    case 0x8515:
    case 0x8516:
    case 0x8517:
    case 0x8518:
    case 0x8519:
    case 0x851A: return D_007B2704[0];
    default: return 0;
    }
}

void func_002BCAB0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, void *arg6) {
    s32 temp = 0;
    unk_func_002BCAB0_0 *p;
    unk_func_002BCAB0_2 *q;
    unk_func_002BCAB0_1 *temp_a0 = func_002BCAB0_1(arg0);

    if (arg1 >= 7) {
        p = NULL;
    } else if (temp_a0 == NULL) {
        p = NULL;
    } else {
        unk_func_002BCAB0_0 **temp_s1;
        u32 temp_v1 = arg1 * 4;
        temp_v1 += (u32)temp_a0;
        temp_s1 = (unk_func_002BCAB0_0 **)(temp_v1 + 0x24);
        if (*temp_s1 == NULL) {
            *temp_s1 = D_0035F644(0x2C);
            memset(*temp_s1, 0, 0x2C);
            (*temp_s1)->unk_00 = arg0;
        }
        p = *temp_s1;
    }
    if (p != NULL && arg2 >= 0 && arg3 > 0 && !(arg2 + arg3 > p->unk_08) && p->unk_0C > 0) {
        if (p->unk_00 == 0x8513) {
            temp += arg0 - 0x8515;
        }
        func_002B5DC0(p, arg6, arg2, temp, arg3, 1, 0, arg4, arg5);
        q = &D_007B2370.unk_398[func_002BCAB0_3(arg0)];
        if (q->unk_01 != 0) {
            s32 temp_a0 = q->unk_0C;
            s64 temp_s1 = ((s64)((u64)((unk_func_002BCAB0_4 *)((u8 *)&D_007B2370 + 4 * temp_a0))->unk_3BA4[0].unk_02 << 48)) >> 53;
            if (func_002B4230(temp_a0, -1) != 0) {
                func_002B44E0(temp_s1);
            }
        }
        q->unk_01 = 0;
        switch (arg0) {
        case 0xDE0: D_007B7B98[D_007B8480[0]] = 1; break;
        case 0xDE1: D_007B7B9A[D_007B8480[0]] = 1; break;
        case 0x8513:
        case 0x8515:
        case 0x8516:
        case 0x8517:
        case 0x8518:
        case 0x8519:
        case 0x851A: D_007B7B9C[0] = 1; break;
        }
    }
}
