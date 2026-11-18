#include "common.h"

typedef struct unk_func_00303400_0 {
    u8 unk_00;
} unk_func_00303400_0;

void func_00303D50(s32, unk_func_00303400_0 *, unk_func_00303400_0 *);

s32 func_00303400(s32 arg0, unk_func_00303400_0 *arg1) {
    unk_func_00303400_0 sp28;
    unk_func_00303400_0 sp2C;
    sp28 = *arg1;
    func_00303D50(arg0, &sp28, &sp2C);
    return arg0;
}
