#include "common.h"

typedef struct unk_func_0015E0D0_0 {
    u16 unk_00;
    s16 unk_02;
} unk_func_0015E0D0_0;

s16 func_0015EEB0(s16);

s32 func_0015E0D0(unk_func_0015E0D0_0 *arg0) {
    if (arg0->unk_00 == 0x10) {
        return func_0015EEB0(arg0->unk_02);
    }
    return -1;
}
