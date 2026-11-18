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

s32 func_002EC950(unk_func_002EC950_2 *arg0) {
    return arg0->unk_38->unk_vf18();
}
}
