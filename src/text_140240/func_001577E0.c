#include "common.h"

typedef struct unk_func_001577E0_0 {
    s16 unk_00;
    u8 pad_02[0xA];
} unk_func_001577E0_0;

typedef struct unk_func_001577E0_1 {
    u8 pad_00[4];
    unk_func_001577E0_0 *unk_04;
} unk_func_001577E0_1;

s16 func_001577E0(unk_func_001577E0_1 *arg0, s16 arg1) {
    return arg0->unk_04[arg1].unk_00;
}
