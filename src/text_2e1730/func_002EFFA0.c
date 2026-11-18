/* profile: opt_300 */
#include "common.h"

typedef struct unk_func_002EFFA0_0 {
    u8 pad_00[0x18];
    struct unk_func_002EFFA0_0 *unk_18;
} unk_func_002EFFA0_0;

typedef struct unk_func_002EFFA0_1 {
    s32 unk_00;
    s32 unk_04;
} unk_func_002EFFA0_1;

void func_002EF9A0(unk_func_002EFFA0_0 *, s32, unk_func_002EFFA0_1 *);

void func_002EFFA0(void *arg0, s32 arg1, s32 arg2) {
    unk_func_002EFFA0_0 *p;
    unk_func_002EFFA0_1 sp28;

    sp28.unk_00 = arg1;
    sp28.unk_04 = arg2;

    p = *(unk_func_002EFFA0_0 **)((u8 *)arg0 + 0xD4);
    while (p != NULL) {
        func_002EF9A0(p, 5, (unk_func_002EFFA0_1 *)&sp28.unk_00);
        p = p->unk_18;
    }
}
