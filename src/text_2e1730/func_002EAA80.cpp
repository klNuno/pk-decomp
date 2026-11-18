/* profile: opt_300 */
#include "common.h"

struct unk_func_002EAA80_0 {
    s32 unk_00;
    unk_func_002EAA80_0() {}
    unk_func_002EAA80_0(s32 x) : unk_00(x) {}
    bool operator==(const unk_func_002EAA80_0 &o) const { return unk_00 == o.unk_00; }
};

extern "C" {
void func_002EAAF0(...);
s32 func_002EA810(...);
void func_002EAF50(u8 *, unk_func_002EAA80_0);

s32 func_002EAA80(u8 *arg0, s32 *arg1) {
    unk_func_002EAA80_0 sp28;
    unk_func_002EAA80_0 sp2C;

    func_002EAAF0(&sp2C, arg0, arg1);
    sp28 = sp2C;
    if (sp28 == unk_func_002EAA80_0(func_002EA810(arg0 + 4))) {
        return 0;
    }
    func_002EAF50(arg0, sp28);
    return 1;
}
}
