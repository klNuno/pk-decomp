#include "common.h"

typedef struct unk_func_0012E150_0 {
    u8 pad_00[0x30];
    s32 unk_30;
} unk_func_0012E150_0;

void func_001D27E0();

void func_0012E150(unk_func_0012E150_0 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    if ((arg0->unk_30 & 0x20) == 0x20) {
        arg0->unk_30 |= 0x40000;
        func_001D27E0(arg1, arg2, arg3, arg4);
    }
}
