#include "common.h"

typedef struct unk_func_002F5DA0_0 {
    s32 unk_00;
    void *unk_04;
    u8 pad_08[4];
    void *unk_0C;
} unk_func_002F5DA0_0;

void func_002D1D50(unk_func_002F5DA0_0 *, void *);

void func_002F5DA0(unk_func_002F5DA0_0 *arg0) {
    if (arg0->unk_04 != 0) {
        func_002D1D50(arg0, arg0->unk_04);
        arg0->unk_00 = 0;
        arg0->unk_04 = 0;
        arg0->unk_0C = &arg0->unk_04;
    }
}
