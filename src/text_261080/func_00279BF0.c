#include "common.h"

typedef struct unk_func_00279BF0_0 {
    u8 pad_00[0x14];
    s32 unk_14;
    u8 pad_18[0x28];
    s32 unk_40;
} unk_func_00279BF0_0;

void func_0031A360(s32);
void func_0031A340(s32);

void func_00279BF0(unk_func_00279BF0_0 *arg0) {
    func_0031A360(arg0->unk_40);
    arg0->unk_14 = ((arg0->unk_14 + 0x7FF) / 0x800) * 0x800;
    func_0031A340(arg0->unk_40);
}
