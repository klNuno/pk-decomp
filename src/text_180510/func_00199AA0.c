/* profile: o0_p */
#include "common.h"

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
} unk_func_00199AA0_0;

typedef struct unk_func_00199AA0_1 {
    struct unk_func_00199AA0_1 *unk_00;
    u8 pad_04[0xC];
    unk_func_00199AA0_0 *unk_10;
} unk_func_00199AA0_1;

s32 func_00198120();
extern unk_func_00199AA0_1 *D_003338C4[];

s32 func_00199AA0(unk_func_00199AA0_0 *arg0) {
    unk_func_00199AA0_1 *temp;
    unk_func_00199AA0_1 *temp2;
    s32 i;
    unk_func_00199AA0_1 *temp3;

    if (func_00198120(arg0->unk_04) >= 0x10000) {
        return 1;
    }
    i = 0;
    temp3 = temp = D_003338C4[0];
    while (temp != NULL) {
        if (func_00198120(arg0->unk_04) == func_00198120(temp->unk_10->unk_04)) {
            return 1;
        }
        i++;
        temp2 = temp = temp->unk_00;
        (void)temp2;
    }
    return 0;
}
