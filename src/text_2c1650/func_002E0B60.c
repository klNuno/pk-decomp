#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    u8 unk_08[1];
} unk_func_002E0B60_0;

void func_002DEB20();

unk_func_002E0B60_0 *func_002E0B60(unk_func_002E0B60_0 *arg0) {
    arg0->unk_00 = 0;
    func_002DEB20(arg0->unk_08);
    return arg0;
}
