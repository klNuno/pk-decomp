/* profile: opt_300 */
#include "common.h"

struct unk_func_00303580_0 {
    s32 unk_00;
    unk_func_00303580_0() {}
    unk_func_00303580_0(s32 x) : unk_00(x) {}
    bool operator==(const unk_func_00303580_0 &o) const { return unk_00 == o.unk_00; }
};

extern "C" {
void func_00303D70(...);
s32 func_00303200(...);
void func_00303F00(u8 *, unk_func_00303580_0);

s32 func_00303580(u8 *arg0, s32 *arg1) {
    unk_func_00303580_0 sp28;
    unk_func_00303580_0 sp2C;

    func_00303D70(&sp2C, arg0, arg1);
    sp28 = sp2C;
    if (sp28 == unk_func_00303580_0(func_00303200(arg0 + 4))) {
        return 0;
    }
    func_00303F00(arg0, sp28);
    return 1;
}
}
