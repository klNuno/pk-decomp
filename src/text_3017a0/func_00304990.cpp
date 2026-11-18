/* profile: opt_300 */
#include "common.h"

typedef void (*unk_func_00304990_fn)(void *, s16);

class unk_func_00304990_0 {
public:
    void *unk_00;
    u32 unk_04;
    u32 unk_08;
    unk_func_00304990_fn unk_0C;
    u32 unk_10;

    unk_func_00304990_0(void *arg0, u32 arg1, u32 arg2, unk_func_00304990_fn arg3) {
        unk_00 = arg0;
        unk_04 = arg1;
        unk_08 = arg2;
        unk_0C = arg3;
        unk_10 = unk_08;
    }

    ~unk_func_00304990_0() {
        char *p;

        if (unk_10 < unk_08 && unk_0C) {
            for (p = (char *)unk_00 + unk_04 * unk_10; unk_10 > 0; unk_10--) {
                p -= unk_04;
                unk_0C(p, -1);
            }
        }
    }
};

extern "C" {
void *func_00304990(void *arg0, unk_func_00304990_fn arg1, unk_func_00304990_fn arg2, u32 arg3, u32 arg4) {
    char *ptr;

    if ((ptr = (char *)arg0) != 0) {
        u32 *p = (u32 *)ptr;

        p[0] = arg3;
        p[1] = arg4;
        ptr += 0x10;
        if (arg1) {
            unk_func_00304990_0 pad(ptr, arg3, arg4, arg2);
            char *q;

            for (pad.unk_10 = 0, q = ptr; pad.unk_10 < arg4; pad.unk_10++, q += arg3) {
                arg1(q, 1);
            }
        }
    }
    return ptr;
}
}
