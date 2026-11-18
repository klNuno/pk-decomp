#include "common.h"

typedef struct unk_func_0015A780_0 {
    u8 pad_00[0x18];
    s32 unk_18;
} unk_func_0015A780_0;

s32 func_0015A780(unk_func_0015A780_0 *arg0) {
    return (arg0 != NULL && arg0->unk_18 == -1) ? 1 : 0;
}
