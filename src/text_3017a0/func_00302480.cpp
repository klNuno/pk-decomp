/* profile: opt_300 */
#include "common.h"

class unk_func_00302480_0 {
public:
    s32 unk_00;
    bool operator==(s32 x) const { return unk_00 == x; }
};

extern "C" {
unk_func_00302480_0 func_003027C0(...);
s32 func_00302420(...);
void func_00302950(...);

s32 func_00302480(u8 *arg0, s32 arg1) {
    unk_func_00302480_0 it;

    it = func_003027C0(arg0, arg1);
    if (it == func_00302420(arg0 + 4)) {
        return 0;
    }
    func_00302950(arg0, it);
    return 1;
}
}
