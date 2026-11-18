#include "common.h"

typedef struct {
    s32 unk_00;
    u8 pad_04[8];
    u8 *unk_0C;
} unk_func_002D3B30_0;

typedef struct {
    unk_func_002D3B30_0 *unk_00;
} unk_func_002D3B30_1;

void func_002CDD10();
void *memcpy();

unk_func_002D3B30_1 *func_002D3B30(unk_func_002D3B30_1 *arg0, void *arg1, s32 arg2) {
    s32 len;

    if (arg2 != 0) {
        len = arg0->unk_00->unk_00;
        func_002CDD10(arg0, len + arg2, 1);
        memcpy(arg0->unk_00->unk_0C + len, arg1, arg2);
    }
    return arg0;
}
