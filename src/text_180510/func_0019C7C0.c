/* profile: o0_301_p */
#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    u8 pad_08[0x9];
    u8 unk_11;
    u8 pad_12[0x2];
} unk_func_0019C7C0_0;

s32 *HIE_fn_hGetSuperObjectObject();
unk_func_0019C7C0_0 *func_0019C730();
u32 func_0019C710();
void func_0019C750(s32, u8);

void func_0019C7C0(s32 arg0, u16 arg1, u8 arg2) {
    unk_func_0019C7C0_0 *e;
    u32 i;
    s32 r2;
    s32 q;
    unk_func_0019C7C0_0 *t;
    unk_func_0019C7C0_0 *arr;
    u32 n;
    s32 base;
    s32 r1;
    unk_func_0019C7C0_0 *start;

    base = *HIE_fn_hGetSuperObjectObject(arg0);
    arr = func_0019C730(base);
    if (arr == NULL) {
        return;
    }
    n = func_0019C710(base);
    if (arg1 != 0xFFFF) {
        e = &arr[arg1];
        e->unk_11 = arg2;
        if (e->unk_04 != 0) {
            r1 = e->unk_04;
        } else {
            r1 = e->unk_00;
        }
        q = r1;
        func_0019C750(q, arg2);
    } else {
        for (i = 0, e = arr, start = arr; i < n; i++, t = e, (void)t, e = t + 1) {
            e = &arr[i];
            (void)i;
            e->unk_11 = arg2;
            if (e->unk_04 != 0) {
                r2 = e->unk_04;
            } else {
                r2 = e->unk_00;
            }
            q = r2;
            (void)r2;
            (void)q;
            func_0019C750(q, arg2);
        }
    }
}
