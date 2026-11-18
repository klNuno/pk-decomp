/* profile: o0_301 */
#include "common.h"

typedef struct {
    u8 pad_00[8];
    s32 unk_08;
} unk_func_001BAA70_0;

s32 func_001BA940();
unk_func_001BAA70_0 *HMU_fn_p_vMalloc();
void func_002D25A0();

unk_func_001BAA70_0 *func_001BAA70(void) {
    unk_func_001BAA70_0 *temp;

    temp = HMU_fn_p_vMalloc(func_001BA940(), 0);
    func_002D25A0(temp);
    temp->unk_08 = 0;
    return temp;
}
