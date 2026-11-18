#include "common.h"

typedef struct unk_func_00132FE0_0 {
    struct unk_func_00132FE0_0 *unk_00;
    s32 unk_04;
    u8 pad_08[8];
    u16 unk_10;
} unk_func_00132FE0_0;

typedef struct unk_func_00132FE0_1 {
    u8 pad_00[4];
    unk_func_00132FE0_0 *unk_04;
} unk_func_00132FE0_1;

unk_func_00132FE0_0 *func_00132FE0(unk_func_00132FE0_1 *arg0, s32 arg1, u16 arg2) {
    unk_func_00132FE0_0 *temp;

    for (temp = arg0->unk_04; temp != NULL; temp = temp->unk_00) {
        if (temp->unk_04 == arg1 && (temp->unk_10 & 0x3FF) == arg2) {
            return temp;
        }
    }
    return NULL;
}
