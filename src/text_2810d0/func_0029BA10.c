#include "common.h"

typedef struct unk_func_0029BA10_0 {
    struct unk_func_0029BA10_0 *unk_00;
    u32 unk_04;
} unk_func_0029BA10_0;

typedef struct {
    void *unk_00;
    s32 unk_04;
} unk_func_0029BA10_1;

typedef struct {
    u8 pad_00[0x4];
    unk_func_0029BA10_0 *unk_04;
} unk_func_0029BA10_2;

void func_002A5E20();
void func_002A6010();
void func_002AAB30();

s32 func_0029BA10(unk_func_0029BA10_2 *arg0) {
    unk_func_0029BA10_0 *blk;
    unk_func_0029BA10_1 *e;
    u32 off;
    u32 size;
    s32 count = 0;

    for (blk = arg0->unk_04; blk != NULL; blk = blk->unk_00) {
        e = (unk_func_0029BA10_1 *)(blk + 1);
        for (off = 0; blk != NULL && off < blk->unk_04; ) {
            if (e->unk_04 != 0) {
                if (e->unk_00 == func_002AAB30 || e->unk_00 == func_002A6010 || e->unk_00 == func_002A5E20) {
                    count++;
                }
            }
            size = e->unk_04 + 8;
            e = (unk_func_0029BA10_1 *)((u8 *)e + size);
            off += size;
        }
    }
    return count;
}
