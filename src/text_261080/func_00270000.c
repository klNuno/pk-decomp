#include "common.h"

typedef struct {
    s32 unk_00;
    u8 pad_04[0x5C];
    f32 unk_60;
    f32 unk_64;
    f32 unk_68;
} unk_func_00270000_0;

extern f32 D_00360240;

void func_00270000(unk_func_00270000_0 *arg0) {
    arg0->unk_60 -= D_00360240 * arg0->unk_68;
    arg0->unk_64 -= D_00360240 * arg0->unk_68;
    if (arg0->unk_60 <= 0.0f || arg0->unk_64 <= 0.0f) {
        arg0->unk_00 |= 1;
    }
}
