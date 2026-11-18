/* profile: opt_300 */
#include "common.h"

typedef struct unk_func_0012B470_0 {
    s32 unk_00;
    u8 pad_04[0x4];
    struct unk_func_0012B470_0 *unk_08;
    u8 pad_0C[0x8];
    struct unk_func_0012B470_0 *unk_14;
} unk_func_0012B470_0;

s32 func_0012B470(unk_func_0012B470_0 *arg0);

inline s32 unk_inline_0(unk_func_0012B470_0 *arg0) {
    unk_func_0012B470_0 *p;

    if (arg0->unk_00 & 0x250) {
        return 1;
    }
    for (p = arg0->unk_08; p != NULL; p = p->unk_14) {
        if (func_0012B470(p)) {
            return 1;
        }
    }
    return 0;
}

s32 func_0012B470(unk_func_0012B470_0 *arg0) {
    unk_func_0012B470_0 *p;

    if (arg0->unk_00 & 0x250) {
        return 1;
    }
    for (p = arg0->unk_08; p != NULL; p = p->unk_14) {
        if (unk_inline_0(p)) {
            return 1;
        }
    }
    return 0;
}
