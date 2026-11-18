/* profile: opt_300 */
#include "common.h"

class unk_func_002EBF00_0 {
public:
    s32 unk_00;
    bool operator==(s32 x) const { return unk_00 == x; }
};

extern "C" {
unk_func_002EBF00_0 func_002EC240(...);
s32 func_002EBEA0(...);
void func_002EC3E0(...);

s32 func_002EBF00(u8 *arg0, s32 arg1) {
    unk_func_002EBF00_0 it;

    it = func_002EC240(arg0, arg1);
    if (it == func_002EBEA0(arg0 + 4)) {
        return 0;
    }
    func_002EC3E0(arg0, it);
    return 1;
}
}
