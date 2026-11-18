#include "common.h"

typedef struct {
    u8 pad_00[0xC];
    void *unk_0C;
} unk_func_002D3AD0_1;

typedef struct {
    unk_func_002D3AD0_1 *unk_00;
} unk_func_002D3AD0_0;

void func_002CDD10(unk_func_002D3AD0_0 *, s32, s32);
void *memcpy(void *, const void *, u32);

unk_func_002D3AD0_0 *func_002D3AD0(unk_func_002D3AD0_0 *arg0, void *arg1, s32 arg2) {
    func_002CDD10(arg0, arg2, 0);
    memcpy(arg0->unk_00->unk_0C, arg1, arg2);
    return arg0;
}
