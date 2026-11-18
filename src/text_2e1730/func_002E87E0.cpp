/* profile: opt_300 */
#include "common.h"

class unk_func_002E87E0_0 {
public:
    s32 unk_00;
    bool operator==(s32 x) const { return unk_00 == x; }
};

extern "C" {
unk_func_002E87E0_0 func_002E8C00(...);
s32 func_002E8790(...);
void func_002E8DB0(...);

s32 func_002E87E0(u8 *arg0, s32 arg1) {
    unk_func_002E87E0_0 it;

    it = func_002E8C00(arg0, arg1);
    if (it == func_002E8790(arg0 + 4)) {
        return 0;
    }
    func_002E8DB0(arg0, it);
    return 1;
}
}
