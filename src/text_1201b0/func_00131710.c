#include "common.h"

typedef struct unk_func_00131710_0 {
    u8 pad_00[4];
    struct unk_func_00131710_2 *unk_04;
    u8 pad_08[0x24];
    u32 unk_2C;
} unk_func_00131710_0;

typedef struct {
    u8 pad_00[4];
    unk_func_00131710_0 *unk_04;
} unk_func_00131710_1;

typedef struct unk_func_00131710_2 {
    u8 pad_00[0x20];
    unk_func_00131710_1 *unk_20;
    s16 unk_24;
} unk_func_00131710_2;

void func_0012B150(s32, unk_func_00131710_0 *, s32, s32, s16 *, s32);

void func_00131710(s32 arg0, unk_func_00131710_0 *arg1, s32 arg2, s32 arg3, unk_func_00131710_0 **arg4, s16 *arg5) {
    unk_func_00131710_1 *p;
    s16 n;
    s16 start;
    s16 i;

    *arg5 = 0;
    if (!(arg1->unk_2C & 0x10000000)) {
        func_0012B150(arg0, arg1, arg2, arg3, arg5, 6);
    }
    for (i = 0; i < *arg5; i++) {
        arg4[i] = arg1;
    }
    n = arg1->unk_04->unk_24;
    p = arg1->unk_04->unk_20;
    for (; n > 0; n--) {
        start = *arg5;
        if (!(p->unk_04->unk_2C & 0x10000000)) {
            func_0012B150(arg0, p->unk_04, arg2, arg3, arg5, 6);
        }
        for (i = start; i < *arg5; i++) {
            arg4[i] = p->unk_04;
        }
        p++;
    }
}
