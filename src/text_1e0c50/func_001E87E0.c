/* profile: o0_301 */
#include "common.h"

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
    s32 unk_08;
} unk_func_001E87E0_1;

typedef struct {
    void *unk_00;
    u8 pad_04[0xC];
    s32 unk_10;
    s32 unk_14;
} unk_func_001E87E0_0;

void memset(void *, s32, s32);
s32 func_001E86C0(u8 **, u8);

unk_func_001E87E0_0 *func_001E87E0(u8 **arg0, unk_func_001E87E0_1 **arg1, u8 arg2) {
    unk_func_001E87E0_0 *p;

    p = NULL;
    if ((*arg1)->unk_04 != 0) {
        p = (unk_func_001E87E0_0 *)*arg0;
        memset(*arg0, 0, 0x18);
        *arg0 = *arg0 + 0x18;
        p->unk_00 = arg1;
        p->unk_14 = (*arg1)->unk_08;
        p->unk_10 = func_001E86C0(arg0, arg2);
    }
    return p;
}
