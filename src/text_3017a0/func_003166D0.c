#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} unk_func_003166D0_1;

typedef struct {
    u8 pad_00[4];
    void *unk_04;
    unk_func_003166D0_1 unk_08;
} unk_func_003166D0_0;

void func_00318C60();
extern u8 D_0035F1E0[];

unk_func_003166D0_0 *func_003166D0(unk_func_003166D0_0 *arg0, unk_func_003166D0_1 *arg1) {
    func_00318C60(arg0);
    arg0->unk_04 = D_0035F1E0;
    arg0->unk_08.unk_00 = arg1->unk_00;
    arg0->unk_08.unk_04 = arg1->unk_04;
    arg0->unk_08.unk_08 = arg1->unk_08;
    return arg0;
}
