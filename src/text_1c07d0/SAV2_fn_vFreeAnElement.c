/* profile: o0_p */
#include "common.h"

typedef struct unk_SAV2_fn_vFreeAnElement_0 unk_SAV2_fn_vFreeAnElement_0;

typedef struct {
    unk_SAV2_fn_vFreeAnElement_0 *unk_00;
    unk_SAV2_fn_vFreeAnElement_0 *unk_04;
    s32 unk_08;
} unk_SAV2_fn_vFreeAnElement_1;

struct unk_SAV2_fn_vFreeAnElement_0 {
    unk_SAV2_fn_vFreeAnElement_0 *unk_00;
    unk_SAV2_fn_vFreeAnElement_0 *unk_04;
    unk_SAV2_fn_vFreeAnElement_1 *unk_08;
    void *unk_0C;
    u8 unk_10;
    u8 unk_11;
    u8 pad_12[2];
    void **unk_14;
};

void func_001D67F0(void *);

void SAV2_fn_vFreeAnElement(unk_SAV2_fn_vFreeAnElement_0 *arg0)
{
    u32 i;

    if (arg0->unk_00 != 0) {
        arg0->unk_00->unk_04 = arg0->unk_04;
    }
    if (arg0->unk_04 != 0) {
        arg0->unk_04->unk_00 = arg0->unk_00;
    }
    if (arg0->unk_08 != 0) {
        arg0->unk_08->unk_08--;
        if (arg0->unk_08->unk_00 == arg0) {
            arg0->unk_08->unk_00 = arg0->unk_00;
        }
        if (arg0->unk_08->unk_04 == arg0) {
            arg0->unk_08->unk_04 = arg0->unk_04;
        }
    }
    arg0->unk_00 = 0;
    arg0->unk_04 = 0;
    arg0->unk_08 = 0;
    if (arg0->unk_11 != 1) {
        if ((arg0->unk_10 & 0xF) == 5) {
            for (i = 0; i < arg0->unk_11; i++) {
                func_001D67F0(*(void **)((u32)arg0->unk_14 + i * 4));
            }
        } else if ((arg0->unk_10 & 0xF) == 6) {
            for (i = 0; i < arg0->unk_11; i++) {
                func_001D67F0(*(void **)((u32)arg0->unk_14 + i * 4));
            }
        }
        func_001D67F0(arg0->unk_14);
    } else if ((arg0->unk_10 & 0xF) == 5) {
        func_001D67F0(arg0->unk_14);
    } else if ((arg0->unk_10 & 0xF) == 6) {
        func_001D67F0(arg0->unk_14);
    }
    func_001D67F0(arg0->unk_0C);
    func_001D67F0(arg0);
}
