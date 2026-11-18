/* profile: opt_300 */
#include "common.h"

struct unk_func_002FD7B0_0 {
    s32 unk_00;
    unk_func_002FD7B0_0() {}
    unk_func_002FD7B0_0(s32 x) : unk_00(x) {}
    bool operator==(const unk_func_002FD7B0_0 &o) const { return unk_00 == o.unk_00; }
};

extern "C" {
void func_002FD830(...);
s32 func_002FD820(...);
void func_002FDE50(u8 *, unk_func_002FD7B0_0);

s32 func_002FD7B0(u8 *arg0, s32 *arg1) {
    unk_func_002FD7B0_0 sp28;
    unk_func_002FD7B0_0 sp2C;

    func_002FD830(&sp2C, arg0, arg1);
    sp28 = sp2C;
    if (sp28 == unk_func_002FD7B0_0(func_002FD820(arg0 + 4))) {
        return 0;
    }
    func_002FDE50(arg0, sp28);
    return 1;
}
}
