#include "common.h"

typedef struct unk_func_001DA5E0_0 {
    s32 unk_00;
    u8 pad_04[0xC];
} unk_func_001DA5E0_0;

extern unk_func_001DA5E0_0 D_005ECF54[];

s32 func_001DA5E0(s32 arg0) {
    return D_005ECF54[arg0].unk_00;
}
