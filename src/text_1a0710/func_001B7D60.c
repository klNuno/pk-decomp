/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_001B7D60_0 {
    u8 pad_00[0xC];
    u32 unk_0C;
    u8 pad_10[0x158];
    void *unk_168;
} unk_func_001B7D60_0;

unk_func_001B7D60_0 *func_001B84B0(s32);
void HMU_fn_vFree(void *, s32);
void func_001B84D0(s32, s32);

void func_001B7D60(s32 arg0) {
    unk_func_001B7D60_0 *p;

    if ((p = func_001B84B0(arg0)) != 0) {
        if ((p->unk_0C & 0x40000) ? 1 : 0) {
            if ((p->unk_0C & 0x4000) ? 1 : 0) {
                HMU_fn_vFree(&p->unk_168, 1);
            }
            HMU_fn_vFree(&p, 1);
        }
        func_001B84D0(arg0, 0);
        p = 0;
    }
}
