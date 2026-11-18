#include "common.h"

typedef struct {
    s32 unk_00;
    u8 pad_04[0xA4];
} unk_func_001348A0_0;

extern unk_func_001348A0_0 D_003650D4[];

s32 func_001348A0(s16 arg0) {
    return D_003650D4[arg0].unk_00;
}
