#include "common.h"

typedef struct {
    u8 pad_00[0x18];
} unk_func_00193B60_0;

typedef struct {
    u8 pad_00[0x18];
    unk_func_00193B60_0 *unk_18;
    u8 pad_1C[0xA];
    s16 unk_26;
} unk_func_00193B60_1;

unk_func_00193B60_0 *func_00193B60(unk_func_00193B60_1 *arg0, s16 arg1) {
    if (arg1 < arg0->unk_26) {
        return &arg0->unk_18[arg1];
    }
    return 0;
}
