#include "common.h"

typedef struct unk_func_001DB990_1 {
    u8 pad_00[4];
    s16 unk_04;
} unk_func_001DB990_1;

typedef struct unk_func_001DB990_0 {
    u8 pad_00[0x10];
    unk_func_001DB990_1 **unk_10;
} unk_func_001DB990_0;

s16 func_001DB990(unk_func_001DB990_0 *arg0, s16 arg1) {
    return arg0->unk_10[arg1]->unk_04;
}
