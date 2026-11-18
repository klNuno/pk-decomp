/* profile: opt_300 */
#include "common.h"

class unk_func_00301EA0_0 {
public:
    s32 unk_00;
    virtual void unk_vf08(void *, u32, s32);
};

typedef struct unk_func_00301EA0_1 {
    u32 unk_00;
    u8 pad_04[8];
    void *unk_0C;
} unk_func_00301EA0_1;

extern "C" {
void c4sdk_malloc(...);
void func_002CDC10(...);
s32 func_002EA770(...);
s32 func_002EA780(...);
void func_002FEDB0(...);
void func_00301CD0(...);

void func_00301EA0(s32 arg0, s32 arg1, unk_func_00301EA0_0 *arg2);
}

void func_00301EA0(s32 arg0, s32 arg1, unk_func_00301EA0_0 *arg2) {
    unk_func_00301EA0_1 *sp34;
    s32 sp38;
    u32 sp3C;
    u32 n;

    func_002FEDB0();
    func_00301CD0(&sp38, arg1);
    func_002CDC10(&sp34, &sp38);
    c4sdk_malloc(&sp38, 0);
    n = sp34->unk_00;
    sp3C = n;
    if (func_002EA770(func_002EA780()) == 1) {
        sp3C = (sp3C >> 24) | ((sp3C >> 8) & 0xFF00) | ((sp3C << 8) & 0xFF0000) | (sp3C << 24);
    }
    arg2->unk_vf08(&sp3C, 4, 1);
    if (n != 0) {
        arg2->unk_vf08(sp34->unk_0C, sp34->unk_00, 1);
    }
    c4sdk_malloc(&sp34, 0);
}
