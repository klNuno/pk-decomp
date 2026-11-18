/* profile: o0_p */
#include "common.h"

typedef struct unk_func_001D29A0_0 {
    u8 pad_00[0xC];
    struct unk_func_001D29A0_0 *unk_0C;
    u8 pad_10[0x10];
    u8 unk_20[1];
} unk_func_001D29A0_0;

s32 StrICmp();
extern unk_func_001D29A0_0 *D_005ACAF0[];

unk_func_001D29A0_0 *func_001D29A0(s32 arg0) {
    unk_func_001D29A0_0 *temp;

    for (temp = D_005ACAF0[0]; temp != NULL; temp = temp->unk_0C) {
        if (StrICmp(arg0, temp->unk_20) == 0) {
            return temp;
        }
    }
    return NULL;
}
