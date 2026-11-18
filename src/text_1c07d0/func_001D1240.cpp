/* profile: o0_301 */
#include "common.h"

typedef struct {
    u8 pad_00[0xC];
    s32 unk_0C;
} unk_func_001D1240_0;

extern "C" {
u8 *func_001387B0(unk_func_001D1240_0 *);
void func_0014F6B0(void *, s32, s32, s32);
}

extern "C" void func_001D1240(unk_func_001D1240_0 *arg0, s32, s32 arg2, s32 arg3, s32 arg4) {
    s32 a;
    s32 b;
    void *p0;
    void *p1;
    void *p2;
    void *p3;

    if (arg0->unk_0C & 0x80) {
        a = 1;
    } else {
        a = 0;
    }
    if (a == 0) {
        p0 = (u8 *)arg0 + 0xE0;
        func_0014F6B0(p0, arg2, arg3, arg4);
        p1 = (u8 *)arg0 + 0x80;
        func_0014F6B0(p1, arg2, arg3, arg4);
        if (arg0->unk_0C & 4) {
            b = 1;
        } else {
            b = 0;
        }
        if (b != 0) {
            p2 = func_001387B0(arg0) + 0xB0;
            func_0014F6B0(p2, arg2, arg3, arg4);
            p3 = func_001387B0(arg0) + 0x110;
            func_0014F6B0(p3, arg2, arg3, arg4);
        }
    }
}
