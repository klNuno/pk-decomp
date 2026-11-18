/* profile: opt_300_noexc */
#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
} unk_func_002EC950_0;

class unk_func_002EC950_1 {
public:
    virtual void unk_vf08();
    virtual void unk_vf0C();
    virtual void unk_vf10();
    virtual void unk_vf14();
    virtual s32 unk_vf18();
};

typedef struct {
    u8 pad_00[0x38];
    unk_func_002EC950_1 *unk_38;
} unk_func_002EC950_2;

extern "C" {
void func_002EDA50(...);
unk_func_002EC950_0 *func_002EC810(...);


s32 func_002EC970(u8 *arg0, s32 arg1) {
    unk_func_002EC950_0 *it;

    func_002EDA50(&it, arg0 + 0x3C, &arg1);
    if (it == func_002EC810(arg0 + 0x3C)) {
        return 0;
    }
    return it->unk_10;
}
}
