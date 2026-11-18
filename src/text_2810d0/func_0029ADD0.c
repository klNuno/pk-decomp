#include "common.h"

typedef struct unk_func_0029ADD0_1 {
    s32 unk_00;
    s32 unk_04;
} unk_func_0029ADD0_1;

typedef struct unk_func_0029ADD0_0 {
    u8 pad_00[0x4];
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
    s32 unk_10;
    s32 unk_14;
    u32 unk_18;
    unk_func_0029ADD0_1 *unk_1C;
    u32 unk_20;
    u8 pad_24[0xC];
    s32 unk_30;
    u8 pad_34[0x4];
} unk_func_0029ADD0_0;

typedef struct unk_func_0029ADD0_2 {
    s32 unk_00;
    s32 unk_04;
} unk_func_0029ADD0_2;

void func_0011B418(char *);
void func_0029DC80(unk_func_0029ADD0_0 *);
unk_func_0029ADD0_0 **func_0029DEB0(s32, s32);
unk_func_0029ADD0_0 **func_0029DFA0(s32);
void *memcpy(void *, void *, u32);
extern char D_00350FC0[];
extern void *(*D_0035F644)(u32);

void func_0029ADD0(unk_func_0029ADD0_2 *arg0) {
    unk_func_0029ADD0_0 *src;
    unk_func_0029ADD0_0 **slot;
    unk_func_0029ADD0_1 *p;
    s32 size;
    s32 size2;
    s32 diff;
    unk_func_0029ADD0_0 *dst;
    u32 i;

    src = *func_0029DFA0(arg0->unk_04);
    slot = func_0029DFA0(arg0->unk_00);
    if (slot == NULL && (slot = func_0029DEB0(arg0->unk_00, 1)) == NULL) {
        func_0011B418(D_00350FC0);
        arg0->unk_00 = 0;
        return;
    }
    if (*slot != NULL) {
        func_0029DC80(*slot);
    }
    *slot = dst = D_0035F644(0x38);
    memcpy(dst, src, 0x38);
    dst->unk_08 = 0;
    dst->unk_04 = 0;
    dst->unk_10 = 0;
    dst->unk_0C = 0;
    size = dst->unk_18 * 16;
    dst->unk_30 = dst->unk_14 = (s32)D_0035F644(size);
    memcpy((void *)dst->unk_14, (void *)src->unk_14, size);
    diff = dst->unk_14 - src->unk_14;
    size2 = dst->unk_20 * 8;
    dst->unk_1C = D_0035F644(size2);
    memcpy(dst->unk_1C, src->unk_1C, size2);
    p = dst->unk_1C;
    for (i = 0; i < dst->unk_20; i++, p++) {
        p->unk_00 += diff;
    }
}
