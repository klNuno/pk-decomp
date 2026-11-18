/* profile: opt_noprop */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_00134F90_0;

typedef struct {
    s16 unk_00;
    u8 pad_02[2];
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} unk_func_00134F90_1;

typedef struct {
    unk_func_00134F90_0 *unk_00;
    u32 unk_04;
    unk_func_00134F90_1 *unk_08;
    u8 pad_0C[0x14];
    s16 unk_20;
    u8 pad_22[6];
    f32 unk_28;
    s32 unk_2C;
    s32 unk_30;
    s32 unk_34;
} unk_func_00134F90_2;

typedef struct {
    u8 pad_00[0xC];
    unk_func_00134F90_2 **unk_0C;
} unk_func_00134F90_3;

typedef struct {
    u8 pad_00[4];
    unk_func_00134F90_3 **unk_04;
    u8 pad_08[0xC];
} unk_func_00134F90_4;

typedef struct {
    u8 pad_00[0x10];
    unk_func_00134F90_4 **unk_10;
} unk_func_00134F90_5;

typedef struct {
    u8 pad_00[4];
    unk_func_00134F90_5 **unk_04;
} unk_func_00134F90_6;

typedef struct {
    u8 pad_00[4];
    unk_func_00134F90_6 *unk_04;
    s16 unk_08;
    s16 unk_0A[14];
    u8 unk_26;
    u8 pad_27[0x51];
    f32 unk_78[11];
    unk_func_00134F90_3 **unk_A4;
} unk_func_00134F90_7;

s32 func_00168770(unk_func_00134F90_3 *);
void func_00176580(unk_func_00134F90_2 *);
void *memcpy(void *, const void *, u32);

void func_00134F90(unk_func_00134F90_7 *arg0)
{
    unk_func_00134F90_3 **q;
    unk_func_00134F90_2 *s;
    unk_func_00134F90_2 *r;
    unk_func_00134F90_3 **p;
    s32 off;
    unk_func_00134F90_7 *a = arg0;
    s16 i;
    s16 j;
    u32 k;
    unk_func_00134F90_2 *t;
    s32 off16;
    s32 off2;
    s32 off4;
    f32 f;

    p = a->unk_A4;
    q = (*(*a->unk_04->unk_04)->unk_10)[a->unk_08].unk_04;
    r = 0;

    for (i = 0, off = 0; i < func_00168770(*q); i++, off += 4) {
        s = *(unk_func_00134F90_2 **)((u8 *)(*q)->unk_0C + off);
        r = *(unk_func_00134F90_2 **)((u8 *)(*p)->unk_0C + off);
        memcpy(r->unk_00, s->unk_00, r->unk_20 * sizeof(*r->unk_00));
        r->unk_28 = s->unk_28;
        r->unk_2C = s->unk_2C;
        r->unk_30 = s->unk_30;
        r->unk_34 = s->unk_34;
        for (j = 0, off2 = 0, off4 = 0; j < a->unk_26; j++, off2 += 2, off4 += 4) {
            t = *(unk_func_00134F90_2 **)(off + (u32)(*(*(*a->unk_04->unk_04)->unk_10)
                [*(s16 *)((u8 *)a + off2 + 0xA)].unk_04)->unk_0C);
            f = *(f32 *)((u8 *)a + off4 + 0x78);
            for (k = 0, off16 = 0; k < t->unk_04; k++, off16 += 0x10) {
                r->unk_00[((unk_func_00134F90_1 *)((u8 *)t->unk_08 + off16))->unk_00].unk_00 =
                    f * ((unk_func_00134F90_1 *)((u8 *)t->unk_08 + off16))->unk_04 +
                    r->unk_00[((unk_func_00134F90_1 *)((u8 *)t->unk_08 + off16))->unk_00].unk_00;
                r->unk_00[((unk_func_00134F90_1 *)((u8 *)t->unk_08 + off16))->unk_00].unk_04 =
                    f * ((unk_func_00134F90_1 *)((u8 *)t->unk_08 + off16))->unk_08 +
                    r->unk_00[((unk_func_00134F90_1 *)((u8 *)t->unk_08 + off16))->unk_00].unk_04;
                r->unk_00[((unk_func_00134F90_1 *)((u8 *)t->unk_08 + off16))->unk_00].unk_08 =
                    f * ((unk_func_00134F90_1 *)((u8 *)t->unk_08 + off16))->unk_0C +
                    r->unk_00[((unk_func_00134F90_1 *)((u8 *)t->unk_08 + off16))->unk_00].unk_08;
            }
        }
    }
    func_00176580(r);
}
