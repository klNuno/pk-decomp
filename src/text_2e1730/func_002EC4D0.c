/* profile: opt_300 */
#include "common.h"

typedef struct unk_func_002EC4D0_0 {
    s32 unk_00;
    u8 pad_04[0xA];
    u8 unk_0E;
    u8 pad_0F[9];
    struct unk_func_002EC4D0_0 *unk_18;
} unk_func_002EC4D0_0;

typedef struct {
    u8 pad_00[0x28];
    unk_func_002EC4D0_0 *unk_28;
} unk_func_002EC4D0_1;

void func_002EC4D0(unk_func_002EC4D0_1 *arg0, s32 arg1) {
    unk_func_002EC4D0_0 *temp;
    for (temp = arg0->unk_28; temp != NULL; temp = temp->unk_18) {
        if (temp->unk_00 == arg1) {
            break;
        }
    }
    temp->unk_0E = 1;
}
