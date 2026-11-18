#include "common.h"

typedef struct {
    u8 pad_00[0x8];
    s32 unk_08;
    u8 pad_0C[0x14];
    f32 unk_20;
} unk_func_0014BA70_0;

f32 func_0014BA70(unk_func_0014BA70_0 *arg0, s32 arg1) {
    f32 temp;

    if (arg1 == 0) {
        return 0.0f;
    }
    temp = 0.0f;
    if ((arg0->unk_08 & 0x80) ? 1 : 0) {
        temp = arg0->unk_20;
    }
    return temp;
}
