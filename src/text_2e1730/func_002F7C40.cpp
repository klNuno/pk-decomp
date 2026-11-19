/* profile: opt_noprop */
#include "common.h"

struct unk_func_002F7C40_0 {
    s32 unk_00;
    s32 unk_04;
};

struct unk_func_002F7C40_1 {
    u8 pad_00[0x4];
    unk_func_002F7C40_0 unk_04;
};

inline bool operator!=(const unk_func_002F7C40_0 &a, const unk_func_002F7C40_0 &b) {
    return a.unk_00 != b.unk_00 || a.unk_04 != b.unk_04;
}

extern "C" {
extern unk_func_002F7C40_0 D_0035C728[];

bool func_002F7C40(unk_func_002F7C40_1 **arg0, unk_func_002F7C40_1 *arg1) {
    if (arg1 == NULL) {
        return D_0035C728[0] != (*arg0)->unk_04;
    }
    const unk_func_002F7C40_0 &a = arg1->unk_04;
    const unk_func_002F7C40_0 &b = (*arg0)->unk_04;
    const unk_func_002F7C40_0 *p = &a;
    return a.unk_00 != b.unk_00 || p->unk_04 != b.unk_04;
}
}
