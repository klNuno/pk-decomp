/* profile: o0_301 */
#include "common.h"

typedef struct {
    s32 unk_00;
    u8 pad_04[4];
    s32 unk_08[1];
} unk_func_001EA000_0;

typedef u8 (*unk_func_001EA000_1)(s32 *, s32, s32);

unk_func_001EA000_1 func_00208E20(s32);

u8 func_001EA000(unk_func_001EA000_0 *arg0, u8 arg1, s32 arg2) {
    unk_func_001EA000_0 *p;
    u8 ret;
    s32 idx;
    s32 type;
    unk_func_001EA000_1 fn;

    ret = 0;
    p = arg0;
    type = p->unk_00;
    fn = func_00208E20(type);
    if (p->unk_00 == 8) {
        idx = arg1 * 3;
    } else {
        idx = arg1;
    }
    ret = fn(&p->unk_08[idx], 0, arg2);
    return ret;
}
