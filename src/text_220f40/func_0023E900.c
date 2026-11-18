/* profile: o0_p */
#include "common.h"

typedef struct unk_func_0023E900_0 {
    s32 unk_00;
    u16 unk_04;
    u8 pad_06[1];
    u8 unk_07;
} unk_func_0023E900_0;

unk_func_0023E900_0 *func_0023E900(unk_func_0023E900_0 *arg0) {
    unk_func_0023E900_0 *p;
    s32 depth;

    depth = 0;
    p = arg0;
    if (arg0->unk_04) {
        return arg0 + arg0->unk_04;
    }
    while (p->unk_07 != 8) {
        if (p->unk_07 == 4) {
            if (p->unk_00 == 0x59) {
                depth++;
            } else if (p->unk_00 == 0x5A) {
                depth--;
                if (depth <= 0) {
                    p++;
                    break;
                }
            }
        }
        p++;
    }
    arg0->unk_04 = p - arg0;
    return p;
}
