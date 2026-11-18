#include "common.h"

typedef struct unk_func_00258BC0_0 {
    u8 pad_00[0x24];
    u8 unk_24[0x18];
    s32 unk_3C;
    u32 unk_40;
    u32 unk_44;
    f32 unk_48;
    u32 unk_4C;
} unk_func_00258BC0_0;

void func_00167A70(f32);
void func_0017A800(s32, unk_func_00258BC0_0 *, u8 *, s32);
void *memcpy(void *, const void *, u32);
extern u32 D_00360288;
extern u32 D_0036028C;
extern unk_func_00258BC0_0 D_0062C5C0[];

void func_00258BC0(s32 arg0) {
    unk_func_00258BC0_0 *p;
    u32 i;
    u32 j;

    D_0036028C++;
    for (i = 0; i < D_00360288; i++) {
        p = &D_0062C5C0[i];
        if (p->unk_44 & 2) {
            p->unk_48 = 255.0f - 255.0f * (f32)(D_0036028C - p->unk_4C - 1) / (f32)p->unk_40;
        }
        func_00167A70(p->unk_48);
        func_0017A800(arg0, p, p->unk_24, p->unk_3C);
        if (D_0036028C - p->unk_4C >= p->unk_40) {
            p->unk_44 |= 0x80000000;
        }
    }
    for (i = 0; i < D_00360288;) {
        if (D_0062C5C0[i].unk_44 & 0x80000000) {
            for (j = i + 1; j < D_00360288; j++) {
                memcpy(&D_0062C5C0[j - 1], &D_0062C5C0[j], 0x50);
            }
            D_00360288--;
        } else {
            i++;
        }
    }
}
