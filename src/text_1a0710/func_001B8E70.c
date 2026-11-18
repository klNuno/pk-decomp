/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_001B8E70_0 {
    u8 pad_00[0x34];
    s32 unk_34;
} unk_func_001B8E70_0;

unk_func_001B8E70_0 *HMU_fn_p_vMalloc(s32, s32);
s32 func_00132830(void);
void func_001B8620(unk_func_001B8E70_0 *, s32);
void func_001B8700(unk_func_001B8E70_0 *, f32);
void func_001B87C0(unk_func_001B8E70_0 *, f32, f32, f32);
s32 func_001B8D40(void);

unk_func_001B8E70_0 *func_001B8E70(void) {
    unk_func_001B8E70_0 *temp;

    temp = HMU_fn_p_vMalloc(func_001B8D40(), 0);
    func_001B8700(temp, 0.0f);
    func_001B87C0(temp, 0.0f, 0.0f, 0.0f);
    func_001B8620(temp, 1);
    temp->unk_34 = func_00132830();
    return temp;
}
