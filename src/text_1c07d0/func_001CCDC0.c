/* profile: o0_301_p */
#include "common.h"

typedef struct unk_func_001CCDC0_0 {
    union {
        struct {
            u16 unk_00 : 15;
            u16 pad_01 : 1;
        } unk_00;
        struct {
            u8 pad_00;
            u8 pad_01 : 7;
            u8 unk_01 : 1;
        } unk_01;
    } unk_00;
    u8 unk_02;
    u8 unk_03;
    u8 unk_04;
    u8 unk_05;
} unk_func_001CCDC0_0;

typedef struct unk_func_001CCDC0_1 {
    u8 pad_00[0x50];
    u16 unk_50;
    u8 pad_52[0xA];
    u16 unk_5C;
} unk_func_001CCDC0_1;

typedef struct unk_func_001CCDC0_2 {
    unk_func_001CCDC0_0 *unk_00;
    void *unk_04;
    void *unk_08;
    s32 unk_0C;
    u32 *unk_10;
    s32 unk_14;
    void *unk_18;
    unk_func_001CCDC0_1 *unk_1C;
    u16 unk_20;
    u8 unk_22;
} unk_func_001CCDC0_2;

typedef struct unk_func_001CCDC0_3 {
    u16 unk_00;
    u8 pad_02[2];
    u16 unk_04;
} unk_func_001CCDC0_3;

typedef struct unk_func_001CCDC0_4 {
    u8 pad_00[0xE];
    u16 unk_0E;
    u8 pad_10[0x24];
    u16 unk_34;
    u16 unk_36;
} unk_func_001CCDC0_4;

typedef struct unk_func_001CCDC0_5 {
    u8 pad_00[2];
    u8 unk_02;
    u8 pad_03[3];
    u16 unk_06;
    u8 pad_08[8];
} unk_func_001CCDC0_5;

typedef struct unk_func_001CCDC0_6 {
    u16 unk_00;
    u16 unk_02;
    u16 unk_04;
    u16 unk_06;
    u16 unk_08;
    u16 unk_0A;
    u16 unk_0C;
} unk_func_001CCDC0_6;

typedef struct unk_func_001CCDC0_7 {
    u8 unk_00;
    u8 unk_01;
    u16 unk_02;
    u8 unk_04;
    u8 unk_05;
} unk_func_001CCDC0_7;

typedef struct unk_func_001CCDC0_8 {
    u8 pad_00[8];
} unk_func_001CCDC0_8;

typedef struct unk_func_001CCDC0_9 {
    u8 pad_00[12];
} unk_func_001CCDC0_9;

void HMU_fn_vFree(void **, s32);
void *HMU_fn_p_vMalloc(s32, s32);
unk_func_001CCDC0_3 *func_001CF340(u16);
unk_func_001CCDC0_4 *func_001CAAA0(u16, s32);
void func_001CAC50(f32 *, unk_func_001CCDC0_8 *);
void func_001CAD10(void *, f32 *);
extern unk_func_001CCDC0_8 *D_00360034;
extern u16 *D_00360048;
extern unk_func_001CCDC0_5 *D_0036004C;
extern unk_func_001CCDC0_6 *D_00360050;
extern unk_func_001CCDC0_7 *D_00360054;
extern u32 *D_00360058;
extern unk_func_001CCDC0_8 *D_0036005C;
extern unk_func_001CCDC0_9 *D_00360060;

void func_001CCDC0(void *arg0, unk_func_001CCDC0_2 *arg1, unk_func_001CCDC0_1 *arg2, u16 arg3) {
    f32 spA0[7];
    unk_func_001CCDC0_0 *volatile spBC;
    unk_func_001CCDC0_0 *p;
    u16 *q;
    unk_func_001CCDC0_5 *r;
    unk_func_001CCDC0_6 *t;
    u16 i;
    unk_func_001CCDC0_4 *u;
    unk_func_001CCDC0_3 *v;
    u16 unk_0;
    u16 unk_1;

    unk_1 = arg2->unk_5C;
    if (arg3 < arg2->unk_50 && (arg1->unk_1C != arg2 || arg1->unk_20 != arg3)) {
        arg1->unk_1C = arg2;
        arg1->unk_20 = arg3;
        arg1->unk_22 = 0;
        v = func_001CF340(unk_1);
        u = func_001CAAA0(v->unk_00, v->unk_04);
        r = &D_0036004C[u->unk_36];
        t = &D_00360050[u->unk_34 + v->unk_04];
        unk_0 = t->unk_0C;
        if (t->unk_00 == 0xFFFF) {
            if (arg1->unk_04 != NULL) {
                HMU_fn_vFree(&arg1->unk_04, 1);
            }
            arg1->unk_04 = NULL;
        } else {
            if (arg1->unk_04 == NULL) {
                arg1->unk_04 = HMU_fn_p_vMalloc(0x24, 1);
            }
            func_001CAC50(spA0, &D_0036005C[t->unk_00]);
            func_001CAD10(arg1->unk_04, spA0);
        }
        if (t->unk_02 == 0xFFFF) {
            arg1->unk_08 = NULL;
        } else {
            arg1->unk_08 = &D_00360060[t->unk_02];
        }
        if (t->unk_04) {
            arg1->unk_10 = &D_00360058[t->unk_06];
        } else {
            arg1->unk_10 = NULL;
        }
        arg1->unk_0C = t->unk_04;
        arg1->unk_14 = t->unk_08;
        if (t->unk_08) {
            arg1->unk_18 = &D_00360034[t->unk_0A];
        } else {
            arg1->unk_18 = NULL;
        }
        i = 0;
        spBC = p = arg1->unk_00;
        for (; i < u->unk_0E; r++, p++, i++) {
            q = &D_00360048[r->unk_06 + unk_0];
            if (*q != 0xFFFF) {
                p->unk_00.unk_00.unk_00 = D_00360054[*q].unk_02;
                p->unk_02 = r->unk_02;
                p->unk_00.unk_01.unk_01 = 1;
                p->unk_03 = (u8)((s8)D_00360054[*q].unk_00 & 0xFF);
                p->unk_04 = D_00360054[*q].unk_04;
                p->unk_05 = 0;
            } else {
                p->unk_00.unk_00.unk_00 = 0xFFFF;
                p->unk_02 = r->unk_02;
                p->unk_00.unk_01.unk_01 = 1;
                p->unk_03 = 2;
                p->unk_04 = 0;
                p->unk_05 = 0xFF;
            }
        }
    }
}
