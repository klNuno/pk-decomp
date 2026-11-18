#include "common.h"

typedef struct unk_func_0030E600_0 {
    u8 pad_00[0x10];
    struct unk_func_0030E600_0 *unk_10;
    struct unk_func_0030E600_0 *unk_14;
} unk_func_0030E600_0;

extern unk_func_0030E600_0 *D_0036089C;
extern unk_func_0030E600_0 *D_003608A4;

void func_0030E600(unk_func_0030E600_0 *arg0) {
    if (D_003608A4 == arg0) {
        D_003608A4 = arg0->unk_10;
    }
    if (D_0036089C == arg0) {
        D_0036089C = arg0->unk_14;
    }
    if (arg0->unk_14 != NULL) {
        arg0->unk_14->unk_10 = arg0->unk_10;
    }
    if (arg0->unk_10 != NULL) {
        arg0->unk_10->unk_14 = arg0->unk_14;
    }
    arg0->unk_14 = NULL;
    arg0->unk_10 = NULL;
}
