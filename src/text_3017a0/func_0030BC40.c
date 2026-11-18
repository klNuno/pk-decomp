/* profile: opt_300 */
#include "common.h"

void func_0010C720(s32);
void func_0010CC80(s32);
s32 func_0010CF40(u32, u32, void *, s32 *);
s32 func_0010D1B8();
void func_002D2BA0(u8 *, u8 *, u32);
extern s32 D_00360838;
extern u32 D_00360844;
extern s8 D_00360848;
extern u32 D_0036084C;
extern s8 D_00360850;
extern u8 D_007CBF00[];

typedef struct unk_func_0030BC40_0 {
    u32 unk_00;
    u32 unk_04;
} unk_func_0030BC40_0;

u32 func_0030BC40(unk_func_0030BC40_0 *arg0, u32 arg1, u8 *arg2, u32 arg3) {
    u32 size;
    u32 base;
    u32 nsec;
    u32 left;
    u32 n;
    u32 off;
    u32 k;
    u32 sec;

    if (!D_00360848) {
        D_00360844 = -1;
        D_00360848 = 1;
    }
    if (!D_00360850) {
        D_0036084C = -1;
        D_00360850 = 1;
    }
    size = arg0->unk_04;
    base = arg0->unk_00;
    nsec = ((size - 1) >> 11) + 1;
    if (size < arg1 + arg3) {
        if (size < arg1) {
            arg3 = 0;
        } else {
            arg3 = size - arg1;
        }
    }
    if (arg3 == 0) {
        return 0;
    }
    sec = base + (arg1 >> 11);
    left = arg3;
    if (D_00360844 != -1) {
        if (D_00360844 <= sec) {
            if (sec < D_00360844 + D_0036084C) {
                off = arg1 + ((base - D_00360844) << 11);
                k = (D_0036084C << 11) - off;
                if (arg3 < k) {
                    k = arg3;
                }
                func_002D2BA0(arg2, D_007CBF00 + off, k);
                left -= k;
                arg1 += k;
                arg2 += k;
            }
        }
    }
    sec = base + (arg1 >> 11);
    while (left != 0) {
        n = nsec - (sec - base);
        if (n > 8) {
            n = 8;
        }
        func_0010CC80(0);
        do {
            do {
                func_0010CC80(0);
            } while (!func_0010CF40(sec, n, D_007CBF00, &D_00360838));
            func_0010C720(0);
        } while (func_0010D1B8());
        D_00360844 = sec;
        off = arg1 & 0x7FF;
        D_0036084C = n;
        sec += n;
        n = (n << 11) - off;
        if (left < n) {
            n = left;
        }
        func_002D2BA0(arg2, D_007CBF00 + off, n);
        left -= n;
        arg1 += n;
        arg2 += n;
    }
    return arg3;
}
