/* profile: o0_301 */
#include "common.h"

typedef struct {
    u8 pad_00[0xC];
    u32 unk_0C;
    u8 pad_10[0x158];
    void *unk_168;
} unk_func_001B7AA0_0;

void *HMU_fn_p_vMalloc();
void func_001B84D0();

void func_001B7AA0(s32 arg0, s32 arg1, u8 arg2, u8 arg3)
{
    unk_func_001B7AA0_0 *p = NULL;
    if (arg3) {
        switch (arg1) {
        case 0:
            p = HMU_fn_p_vMalloc(0x170, 1);
            p->unk_0C &= ~7;
            p->unk_0C |= 1;
            break;
        case 1:
            p = HMU_fn_p_vMalloc(0x200, 1);
            p->unk_0C &= ~7;
            p->unk_0C |= 3;
            break;
        case 2:
            p = HMU_fn_p_vMalloc(0x370, 1);
            p->unk_0C |= 7;
            break;
        }
    } else {
        switch (arg1) {
        case 0:
            p = HMU_fn_p_vMalloc(0x170, 0);
            p->unk_0C &= ~7;
            p->unk_0C |= 1;
            break;
        case 1:
            p = HMU_fn_p_vMalloc(0x200, 0);
            p->unk_0C &= ~7;
            p->unk_0C |= 3;
            break;
        case 2:
            p = HMU_fn_p_vMalloc(0x370, 0);
            p->unk_0C |= 7;
            break;
        }
    }
    func_001B84D0(arg0, p);
    p->unk_0C = arg3 ? (p->unk_0C |= 0x40000) : (p->unk_0C &= ~0x40000);
    if (arg2) {
        if (arg3) {
            p->unk_168 = HMU_fn_p_vMalloc(0x16C, 1);
        } else {
            p->unk_168 = HMU_fn_p_vMalloc(0x16C, 0);
        }
    } else {
        p->unk_168 = NULL;
    }
    p->unk_0C = arg2 ? (p->unk_0C |= 0x4000) : (p->unk_0C &= ~0x4000);
}
