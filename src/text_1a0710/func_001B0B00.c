/* profile: o0 */
#include "common.h"

typedef struct {
    s32 *unk_00;
    s32 unk_04;
} unk_func_001B0B00_0;

unk_func_001B0B00_0 *func_001B6AB0(u8, s32);

s32 func_001B0B00(u8 arg0, u16 arg1, s32 arg2) {
    unk_func_001B0B00_0 *p;
    s32 *q;
    s32 i;

    p = func_001B6AB0(arg0, arg2);
    if (arg1 >= p->unk_04) {
        return 0;
    }
    q = &p->unk_00[arg1];
    i = 0;
    return *q;
}
