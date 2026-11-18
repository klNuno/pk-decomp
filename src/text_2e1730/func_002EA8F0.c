#include "common.h"

typedef struct unk_func_002EA8F0_0 {
    s32 unk_00;
    void *unk_04;
} unk_func_002EA8F0_0;

void func_002EAD50();

void func_002EA8F0(u8 *arg0, u8 *arg1) {
    s32 sp10[2];
    unk_func_002EA8F0_0 sp18;

    sp18.unk_00 = *(s32 *)(arg1 + 8);
    sp18.unk_04 = arg1;
    func_002EAD50(sp10, arg0 + 4, &sp18);
}
