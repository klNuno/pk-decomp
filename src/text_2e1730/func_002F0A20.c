#include "common.h"

typedef struct unk_func_002F0A20_0 {
    u8 pad_00[0x18];
    struct unk_func_002F0A20_0 *unk_18;
    struct unk_func_002F0A20_0 *unk_1C;
} unk_func_002F0A20_0;

void func_002F0A20(unk_func_002F0A20_0 *arg0) {
    if (arg0->unk_1C != NULL) {
        arg0->unk_1C->unk_18 = arg0->unk_18;
    }
    if (arg0->unk_18 != NULL) {
        arg0->unk_18->unk_1C = arg0->unk_1C;
    }
    arg0->unk_18 = NULL;
    arg0->unk_1C = NULL;
}
