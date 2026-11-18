#include "common.h"

typedef struct unk_func_002E2E30_0 {
    u8 pad_00[0x10];
    s32 unk_10;
} unk_func_002E2E30_0;

void func_002DCB20(unk_func_002E2E30_0 *, s32 *);

void func_002E2E30(unk_func_002E2E30_0 *arg0) {
    s32 sp3C;
    s32 temp;

    temp = arg0->unk_10;
    arg0->unk_10 = temp + 4;
    func_002DCB20(arg0, &sp3C);
    arg0->unk_10 = temp + sp3C;
}
