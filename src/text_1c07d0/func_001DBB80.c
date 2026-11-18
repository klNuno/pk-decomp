#include "common.h"

typedef struct {
    u8 pad_00[0x4];
    s16 unk_04;
} unk_func_001DBB80_0;

typedef struct {
    u8 pad_00[0x10];
    unk_func_001DBB80_0 **unk_10;
} unk_func_001DBB80_1;

s16 func_001DBB80(unk_func_001DBB80_1 *arg0, s16 arg1) {
    return arg0->unk_10[arg1]->unk_04;
}
