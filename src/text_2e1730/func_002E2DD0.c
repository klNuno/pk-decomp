#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
} unk_func_002E2DD0_0;

void func_002DCB20(unk_func_002E2DD0_0 *, s32 *);
void func_002DB430(unk_func_002E2DD0_0 *, u8 *);

void func_002E2DD0(unk_func_002E2DD0_0 *arg0) {
    s32 sp38;
    u8 sp3F;
    s32 temp;

    temp = arg0->unk_10;
    arg0->unk_10 = temp + 4;
    func_002DCB20(arg0, &sp38);
    func_002DB430(arg0, &sp3F);
    if (sp3F == 0) {
        arg0->unk_10 = temp + sp38;
    }
}
