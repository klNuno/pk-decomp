#include "common.h"

typedef struct unk_func_001376C0_0 {
    s32 unk_00;
    u8 pad_04[0xC];
} unk_func_001376C0_0;

void func_00119548(s32);

void func_001376C0(u8 arg0, s32 arg1, unk_func_001376C0_0 *arg2) {
    unk_func_001376C0_0 *temp = &arg2[arg0];
    func_00119548(temp->unk_00);
    temp->unk_00 = -1;
}
