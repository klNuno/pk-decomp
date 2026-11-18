#include "common.h"

typedef struct unk_func_0012F560_1 unk_func_0012F560_1;

typedef struct {
    u8 pad_00[4];
    unk_func_0012F560_1 *unk_04;
} unk_func_0012F560_0;

struct unk_func_0012F560_1 {
    u8 pad_00[0x16C];
    unk_func_0012F560_0 *unk_16C;
    unk_func_0012F560_0 *unk_170;
    u8 pad_174[0x12];
    u8 unk_186;
};

extern unk_func_0012F560_0 *D_0035F8DC;
extern unk_func_0012F560_0 *D_0035F8E0;
extern u16 D_0035F8E4;

void func_0012F560(unk_func_0012F560_0 *arg0) {
    unk_func_0012F560_1 *temp;

    temp = arg0->unk_04;
    if (temp->unk_186 == 0) {
        if (D_0035F8E0 != NULL) {
            D_0035F8E0->unk_04->unk_170 = arg0;
            temp->unk_16C = D_0035F8E0;
            D_0035F8E0 = arg0;
        } else {
            D_0035F8E0 = arg0;
            D_0035F8DC = arg0;
            temp->unk_16C = NULL;
        }
        temp->unk_170 = NULL;
        temp->unk_186 = 1;
        D_0035F8E4++;
    }
}
