#include "common.h"

typedef struct unk_func_00270780_0 {
    s32 unk_00;
    u8 pad_04[0x6C];
    s32 unk_70;
    u8 pad_74[0x5C];
} unk_func_00270780_0;

void AGO2_MEM_FreeFromHandle(s32);
void *memcpy(void *, void *, u32);
extern u32 D_003602C0;
extern unk_func_00270780_0 D_0075BA40[];

void func_00270780(void) {
    u32 i;
    s32 removed;
    unk_func_00270780_0 *src;
    unk_func_00270780_0 *dst;
    u32 n;

    dst = D_0075BA40;
    removed = 0;
    n = D_003602C0;
    for (i = 0, src = dst; i < n; i++, src++) {
        if (src->unk_00 & 1) {
            if (src->unk_70 != 0) {
                AGO2_MEM_FreeFromHandle(src->unk_70);
            }
            removed++;
        } else {
            if (src != dst) {
                memcpy(dst, src, 0xD0);
            }
            dst++;
        }
    }
    D_003602C0 -= removed;
}
