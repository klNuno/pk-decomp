#include "common.h"

typedef struct unk_func_0029B950_2 {
    void (*unk_00)();
    u32 unk_04;
} unk_func_0029B950_2;

typedef struct unk_func_0029B950_1 {
    struct unk_func_0029B950_1 *unk_00;
    u32 unk_04;
} unk_func_0029B950_1;

typedef struct unk_func_0029B950_0 {
    u8 pad_00[4];
    unk_func_0029B950_1 *unk_04;
} unk_func_0029B950_0;

extern u8 D_007B8EC1[];

void func_0029B950(unk_func_0029B950_0 *arg0) {
    unk_func_0029B950_1 *blk;
    unk_func_0029B950_2 *p;
    u32 n;
    s32 size;

    blk = arg0->unk_04;
    D_007B8EC1[0] = 1;
    while (blk != NULL) {
        p = (unk_func_0029B950_2 *)(blk + 1);
        for (n = 0; blk != NULL && n < blk->unk_04; n += size) {
            if (p->unk_04 != 0) {
                p->unk_00(p + 1);
            } else {
                p->unk_00();
            }
            size = p->unk_04 + 8;
            p = (unk_func_0029B950_2 *)((u8 *)p + size);
        }
        blk = blk->unk_00;
    }
    D_007B8EC1[0] = 0;
}
