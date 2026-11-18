#include "common.h"

typedef struct {
    s32 unk_00;
    s32 *unk_04;
    s32 unk_08;
} unk_func_002F11A0_0;

unk_func_002F11A0_0 *func_002F11A0(unk_func_002F11A0_0 *arg0) {
    arg0->unk_00 = 1;
    arg0->unk_08 = 0;
    arg0->unk_04 = &arg0->unk_08;
    return arg0;
}
