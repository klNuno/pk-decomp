/* profile: opt_300 */
#include "common.h"

typedef struct unk_func_002EF940_0 {
    u8 pad_00[0x18];
    struct unk_func_002EF940_0 *unk_18;
} unk_func_002EF940_0;

typedef struct {
    s32 unk_00;
    s32 unk_04;
} unk_func_002EF940_1;

void func_002EF9A0(void *, s32, void *);

void func_002EF940(u8 *arg0, u8 **arg1, s32 arg2) {
    unk_func_002EF940_1 temp;
    unk_func_002EF940_0 *p;

    temp.unk_00 = *(s32 *)(*arg1 + 0xC);
    temp.unk_04 = arg2;
    p = *(unk_func_002EF940_0 **)(arg0 + 0xD4);
    while (p != NULL) {
        func_002EF9A0(p, 0x3EB, &temp);
        p = p->unk_18;
    }
}
