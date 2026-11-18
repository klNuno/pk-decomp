#include "common.h"

typedef struct unk_func_002D75C0_0 {
    u8 pad_00[0x10];
    s32 unk_10;
} unk_func_002D75C0_0;

unk_func_002D75C0_0 *func_002CF7D0(void *);
unk_func_002D75C0_0 **func_002CF810(void *);
void func_002CFEF0(unk_func_002D75C0_0 **);
void func_002D7CE0(unk_func_002D75C0_0 **, void *, s32 *);
u8 func_002D82E0(s32, s32, s32);

u8 func_002D75C0(void *arg0, s32 arg1, s32 arg2) {
    u8 r;
    unk_func_002D75C0_0 *it2;
    unk_func_002D75C0_0 *e;
    unk_func_002D75C0_0 *it;

    r = 0;
    if (arg2 != -2) {
        func_002D7CE0(&it, arg0, &arg2);
        if (it != func_002CF7D0(arg0)) {
            r = func_002D82E0(it->unk_10, arg1, -2);
        }
    } else {
        for (it2 = *func_002CF810(arg0); e = func_002CF7D0(arg0), it2 != e; func_002CFEF0(&it2)) {
            r = func_002D82E0(it2->unk_10, arg1, -2);
            if (!r) {
                break;
            }
        }
    }
    return r;
}
