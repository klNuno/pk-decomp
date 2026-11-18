#include "common.h"

typedef struct unk_func_002AD560_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} unk_func_002AD560_0;

void func_002AD610(unk_func_002AD560_0 *);

void func_002AD560(s32 *arg0) {
    unk_func_002AD560_0 sp10;

    sp10.unk_00 = arg0[0];
    sp10.unk_04 = arg0[1];
    sp10.unk_08 = arg0[2];
    sp10.unk_0C = arg0[3];
    func_002AD610(&sp10);
}
