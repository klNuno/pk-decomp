#include "common.h"

typedef struct unk_func_0015BA30_0 {
    u8 pad_00[0x18];
    s32 unk_18;
    u8 pad_1C[4];
    u8 unk_20;
    u8 pad_21[3];
} unk_func_0015BA30_0;

extern u32 D_00368C18[];
extern unk_func_0015BA30_0 *D_00368C1C[];

void func_0015BA30(void) {
    unk_func_0015BA30_0 *temp;
    u32 i;

    temp = D_00368C1C[0];
    for (i = 0; i < D_00368C18[0]; i++, temp++) {
        if (temp != NULL) {
            temp->unk_20 = 1;
            temp->unk_18 = -2;
        }
    }
}
