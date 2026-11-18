#include "common.h"

typedef struct {
    u8 pad_00[0xC];
    s32 unk_0C;
    u8 pad_10[4];
    void *unk_14;
} unk_func_0030A7F0_0;

void func_00308BE0(void *);
void func_00308B80(void *);

s32 func_0030A7F0(unk_func_0030A7F0_0 *arg0) {
    s32 temp;

    if (arg0->unk_14 != NULL) {
        func_00308BE0(arg0->unk_14);
    }
    temp = arg0->unk_0C;
    if (arg0->unk_14 != NULL) {
        func_00308B80(arg0->unk_14);
    }
    return temp;
}
