#include "common.h"

typedef struct unk_func_00316940_0 {
    s32 unk_00;
    void *unk_04;
} unk_func_00316940_0;

void *memset(void *, s32, u32);

void func_00316940(unk_func_00316940_0 *arg0) {
    if (arg0->unk_00 != 0 && arg0->unk_04 != 0) {
        memset(arg0->unk_04, 0, arg0->unk_00 * 0xC);
    }
}
