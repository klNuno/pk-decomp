#include "common.h"

typedef struct unk_func_0030E4E0_0 {
    u8 pad_0[0x10];
    struct unk_func_0030E4E0_0 *unk_10;
    struct unk_func_0030E4E0_0 *unk_14;
} unk_func_0030E4E0_0;

f32 func_0030DA10(unk_func_0030E4E0_0 *);
extern unk_func_0030E4E0_0 *D_003608A4;
extern unk_func_0030E4E0_0 *D_0036089C;

void func_0030E4E0(unk_func_0030E4E0_0 *arg0) {
    unk_func_0030E4E0_0 *temp;

    temp = D_003608A4;
    if (temp == NULL || !(func_0030DA10(arg0) < func_0030DA10(temp))) {
        arg0->unk_10 = D_003608A4;
        arg0->unk_14 = NULL;
        D_003608A4 = arg0;
        if (arg0->unk_10 != NULL) {
            arg0->unk_10->unk_14 = arg0;
        }
        if (D_0036089C == NULL) {
            D_0036089C = arg0;
        }
        return;
    }
    while (temp->unk_10 != NULL && !(func_0030DA10(temp->unk_10) <= func_0030DA10(arg0))) {
        temp = temp->unk_10;
    }
    arg0->unk_10 = temp->unk_10;
    if (arg0->unk_10 != NULL) {
        arg0->unk_10->unk_14 = arg0;
    }
    temp->unk_10 = arg0;
    arg0->unk_14 = temp;
    if (D_003608A4->unk_14 != NULL) {
        D_003608A4 = D_003608A4->unk_14;
    }
    if (D_0036089C->unk_10 != NULL) {
        D_0036089C = D_0036089C->unk_10;
    }
}
