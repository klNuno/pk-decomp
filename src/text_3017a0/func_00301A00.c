#include "common.h"

typedef struct unk_func_00301A00_0 {
    void *unk_00;
    s32 unk_04;
    u8 unk_08[1];
} unk_func_00301A00_0;

extern u8 D_0035EC90[];
void func_002CDC10();

unk_func_00301A00_0 *func_00301A00(unk_func_00301A00_0 *arg0, s32 arg1, s32 arg2) {
    arg0->unk_00 = D_0035EC90;
    arg0->unk_04 = arg1;
    func_002CDC10(arg0->unk_08, arg2);
    return arg0;
}
