/* profile: o0_p */
#include "common.h"

typedef struct unk_func_00220C40_0 {
    s32 unk_00;
    u16 unk_04;
    u8 pad_06;
    u8 unk_07;
} unk_func_00220C40_0;

unk_func_00220C40_0 *func_00220C40(unk_func_00220C40_0 *arg0) {
    unk_func_00220C40_0 *p;
    s32 depth;

    depth = 0;
    p = arg0;
    if (arg0->unk_04) {
        return arg0 + arg0->unk_04;
    }
    for (; p->unk_07 != 8; p++) {
        if (p->unk_07 == 0) {
            if (p->unk_00 == 0x22) {
                depth++;
            } else if (p->unk_00 == 0x24) {
                depth--;
                if (depth <= 0) {
                    p++;
                    break;
                }
            }
        }
    }
    arg0->unk_04 = p - arg0;
    return p;
}
