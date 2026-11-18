/* profile: opt_300 */
#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
} unk_func_002D5130_0;

struct unk_func_002D5130_1 {
    unk_func_002D5130_0 *unk_00;
    unk_func_002D5130_0 *operator->() { return unk_00; }
};

extern "C" {
unk_func_002D5130_0 *func_002D51B0(...);
unk_func_002D5130_1 func_002D5500(...);
void func_002D5580(...);
void func_002D5AE0(...);

u8 func_002D5130(s32 arg0, s32 arg1) {
    unk_func_002D5130_1 it;
    u8 ret;
    unk_func_002D5130_0 *e;

    ret = 0;
    it = func_002D5500(arg0, &arg1);
    e = func_002D51B0(arg0);
    if (it.unk_00 != e) {
        func_002D5AE0(it->unk_10, 1);
        func_002D5580(arg0, it);
        ret = 1;
    }
    return ret;
}
}
