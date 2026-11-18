#include "common.h"

typedef struct unk_func_0012F4A0_0 unk_func_0012F4A0_0;

typedef struct {
    u8 pad_00[4];
    unk_func_0012F4A0_0 *unk_04;
} unk_func_0012F4A0_1;

struct unk_func_0012F4A0_0 {
    u8 pad_00[0x16C];
    unk_func_0012F4A0_1 *unk_16C;
    unk_func_0012F4A0_1 *unk_170;
    u8 pad_174[0x12];
    u8 unk_186;
};

extern unk_func_0012F4A0_1 *D_0035F8DC;
extern unk_func_0012F4A0_1 *D_0035F8E0;
extern u16 D_0035F8E4;

void func_0012F4A0(unk_func_0012F4A0_1 *arg0) {
    unk_func_0012F4A0_0 *temp_a1;

    temp_a1 = arg0->unk_04;
    if (temp_a1->unk_186 != 0) {
        if (temp_a1->unk_16C != NULL) {
            temp_a1->unk_16C->unk_04->unk_170 = temp_a1->unk_170;
        } else {
            D_0035F8DC = temp_a1->unk_170;
            if (D_0035F8DC != NULL) {
                D_0035F8DC->unk_04->unk_16C = NULL;
            }
        }
        if (temp_a1->unk_170 != NULL) {
            temp_a1->unk_170->unk_04->unk_16C = temp_a1->unk_16C;
        } else {
            D_0035F8E0 = temp_a1->unk_16C;
            if (D_0035F8E0 != NULL) {
                D_0035F8E0->unk_04->unk_170 = NULL;
            }
        }
        temp_a1->unk_170 = NULL;
        temp_a1->unk_16C = NULL;
        temp_a1->unk_186 = 0;
        D_0035F8E4 -= 1;
    }
}
