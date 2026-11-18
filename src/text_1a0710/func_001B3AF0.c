/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_001B3AF0_0 {
    u8 pad_00[0xC];
    s32 unk_0C;
} unk_func_001B3AF0_0;

s32 fn_p_stBrainGetMind();
void func_001E8890();

void func_001B3AF0(unk_func_001B3AF0_0 *arg0, unk_func_001B3AF0_0 *arg1) {
    s32 temp;
    s32 temp2;

    temp = fn_p_stBrainGetMind(arg1->unk_0C);
    temp2 = fn_p_stBrainGetMind(arg0->unk_0C);
    func_001E8890(temp, temp2);
}
