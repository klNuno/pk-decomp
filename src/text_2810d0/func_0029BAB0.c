#include "common.h"

typedef struct unk_func_0029BAB0_0 {
    struct unk_func_0029BAB0_0 *unk_00;
    u8 pad_04[4];
    u8 unk_08;
    u8 pad_09[0x1B];
    void *unk_24;
} unk_func_0029BAB0_0;

typedef struct {
    u8 pad_00[0xC];
    unk_func_0029BAB0_0 *unk_0C;
    unk_func_0029BAB0_0 *unk_10;
} unk_func_0029BAB0_1;

extern unk_func_0029BAB0_1 *D_007B8048[];
extern unk_func_0029BAB0_0 *D_007B8054[];
extern unk_func_0029BAB0_0 **D_007B805C[];

void func_0029BAB0(unk_func_0029BAB0_0 *arg0, s32 arg1) {
    unk_func_0029BAB0_0 *temp;

    arg0->unk_08 = arg1;
    if (D_007B8054[0] == NULL) {
        *D_007B805C[0] = arg0;
        temp = D_007B8048[0]->unk_10;
        if (temp != NULL) {
            temp->unk_00 = arg0;
        } else {
            D_007B8048[0]->unk_0C = arg0;
            D_007B8048[0]->unk_10 = arg0;
        }
    } else {
        D_007B8054[0]->unk_00 = arg0;
        D_007B8054[0]->unk_24 = (u8 *)arg0 + 0x20;
    }
    D_007B8054[0] = arg0;
    arg0->unk_24 = NULL;
    arg0->unk_00 = NULL;
    if (arg1) {
        D_007B8048[0]->unk_10 = arg0;
    }
}
