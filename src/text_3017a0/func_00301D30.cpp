/* profile: opt_300 */
#include "common.h"

typedef struct unk_func_00301D30_0 {
    u32 unk_00;
    u8 pad_04[0x8];
    s32 unk_0C;
} unk_func_00301D30_0;

class unk_func_00301D30_1 {
public:
    s32 unk_00;
    virtual void unk_vf08(void *, s32, s32);
};

extern "C" {
void c4sdk_malloc(...);
void func_002CDC10(...);
void func_002DD120(...);
s32 func_002EA770(...);
s32 func_002EA780(...);

void func_00301D30(s32 arg0, s32 arg1, unk_func_00301D30_1 *arg2) {
    unk_func_00301D30_0 *sp34;
    void *sp38;
    u32 sp3C;
    u32 temp;

    func_002DD120(&sp38);
    func_002CDC10(&sp34, &sp38);
    c4sdk_malloc(&sp38, 0);
    temp = sp34->unk_00;
    sp3C = temp;
    if (func_002EA770(func_002EA780()) == 1) {
        sp3C = (sp3C >> 24) | ((sp3C >> 8) & 0xFF00) | ((sp3C << 8) & 0xFF0000) | (sp3C << 24);
    }
    arg2->unk_vf08(&sp3C, 4, 1);
    if (temp != 0) {
        arg2->unk_vf08((void *)sp34->unk_0C, sp34->unk_00, 1);
    }
    c4sdk_malloc(&sp34, 0);
}
}
