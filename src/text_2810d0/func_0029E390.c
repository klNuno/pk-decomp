#include "common.h"

void *memcpy(void *, const void *, u32);
void func_002C1D90(s32, s64, s64);

void func_0029E390(s32 *arg0) {
    s64 a;
    s64 b;

    memcpy(&a, arg0 + 1, 8);
    memcpy(&b, arg0 + 3, 8);
    func_002C1D90(arg0[0], a, b);
}
