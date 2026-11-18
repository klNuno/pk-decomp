#include "common.h"

typedef struct {
    u32 unk_00;
    void *unk_04;
} unk_func_001306C0_0;

typedef struct {
    u8 pad_00[0xC];
    s16 *unk_0C;
    u8 pad_10[0x12];
    s16 unk_22;
} unk_func_001306C0_1;

typedef struct {
    u8 pad_00[6];
    s16 unk_06;
    u8 pad_08[4];
    unk_func_001306C0_1 **unk_0C;
} unk_func_001306C0_2;

typedef struct unk_func_001306C0_3 {
    u32 unk_00;
    void *unk_04;
    u8 pad_08[0xC];
    struct unk_func_001306C0_3 *unk_14;
} unk_func_001306C0_3;

typedef struct {
    u8 pad_00[0x24];
    void *unk_24;
} unk_func_001306C0_4;

typedef struct {
    u8 pad_00[8];
    unk_func_001306C0_3 *unk_08;
} unk_func_001306C0_5;

unk_func_001306C0_4 *func_0015CA10(void *);
unk_func_001306C0_2 *func_00133AB0(void *);
void *func_0015CA30(void *);
void func_00155F50(void *, f32 *, f32 *, f32 *);
void func_00155EC0(void *, f32 *);
unk_func_001306C0_5 *func_001BE4C0(unk_func_001306C0_4 *);
void func_00196000(unk_func_001306C0_1 *, s16, u8);
s16 func_00196080(unk_func_001306C0_1 *, s16);
void func_00196100(unk_func_001306C0_1 *, s16, s16, s16 *, s16 *, s16 *);
void func_001940A0(unk_func_001306C0_1 *, f32 *, s16);
void *memcpy(void *, const void *, u32);

void func_001306C0(unk_func_001306C0_0 *arg0)
{
    u8 sp70[0x60];
    f32 spD8[3];
    f32 spE8[3];
    f32 spF8[3];
    f32 sp108[3];
    s16 sp11A;
    s16 sp11C;
    s16 sp11E;
    unk_func_001306C0_4 *temp;
    unk_func_001306C0_3 *it;
    unk_func_001306C0_1 *p;
    void *q;
    s16 i;
    s16 j;
    s16 n;

    temp = func_0015CA10(arg0->unk_04);
    if (temp == 0) {
        return;
    }
    memcpy(sp70, temp->unk_24, sizeof(sp70));
    func_00155F50(sp70, spD8, sp108, spE8);
    func_00155EC0(sp70, spF8);
    for (it = func_001BE4C0(temp)->unk_08, i = 0; it != 0; it = it->unk_14, i++) {
        if (it->unk_00 & 0x20) {
            q = func_0015CA30(it->unk_04);
            if (func_00133AB0(q)->unk_06 != 0) {
                return;
            }
            p = *func_00133AB0(q)->unk_0C;
            for (i = 0; i < p->unk_22; i++) {
                switch (p->unk_0C[i]) {
                case 1:
                    func_00196000(p, i, 0);
                    n = func_00196080(p, i);
                    for (j = 0; j < n; j++) {
                        func_00196100(p, i, j, &sp11A, &sp11C, &sp11E);
                        func_001940A0(p, spD8, sp11A);
                        spE8[0] = spF8[0] - spD8[0];
                        spE8[1] = spF8[1] - spD8[1];
                        spE8[2] = spF8[2] - spD8[2];
                        if (sp108[0] * spE8[0] + sp108[1] * spE8[1] + sp108[2] * spE8[2] > 0.0f) {
                            func_00196000(p, i, 1);
                            break;
                        }
                    }
                }
            }
        }
    }
}
