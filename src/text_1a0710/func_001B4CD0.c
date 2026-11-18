/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_001B4CD0_0 {
    void *unk_00;
    void *unk_04;
    u8 pad_08[0x6C];
    u8 unk_74;
} unk_func_001B4CD0_0;

s32 func_001B4C70(void *);
void func_001B5BA0(void *, s32);
void *memcpy(void *, void *, s32);
extern u8 D_0035FF64;

void func_001B4CD0(unk_func_001B4CD0_0 *arg0) {
    s32 var_s0;

    var_s0 = 0;
    if (D_0035FF64) {
        var_s0 = func_001B4C70(arg0->unk_04);
    }
    memcpy((void *)arg0->unk_04, (void *)arg0->unk_00, 0x7C);
    arg0->unk_74 |= 2;
    if (D_0035FF64) {
        func_001B5BA0(arg0->unk_04, var_s0);
    }
}
