#include "common.h"

f32 *func_00155EE0(u8 *);

void func_00147820(u8 *arg0) {
    f32 *a;
    f32 *b;

    b = (f32 *)(arg0 + 0x6C);
    a = func_00155EE0(arg0 + 0xE0);
    a[0] = a[0] + b[0];
    a[1] = a[1] + b[1];
    a[2] = a[2] + b[2];
}
