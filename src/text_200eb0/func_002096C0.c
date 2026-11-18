/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_002096C0_0 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
} unk_func_002096C0_0;

s32 func_001979C0(s32);
void func_00150060(s32, unk_func_002096C0_0 *, s32, s32);

s32 func_002096C0(s32 arg0, unk_func_002096C0_0 *arg1) {
    unk_func_002096C0_0 *p;
    s32 temp;
    s32 a;
    s32 b;

    temp = 0;
    p = NULL;
    a = 0;
    b = 0;
    temp = func_001979C0(arg0);
    func_00150060(temp, p, a, b);
    arg1->unk_00 = p->unk_00;
    arg1->unk_04 = p->unk_04;
    arg1->unk_08 = p->unk_08;
    arg1->unk_0C = 0x15;
    return 1;
}
