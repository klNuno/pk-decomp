#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    u8 unk_08;
    u8 pad_09[3];
    s32 *unk_0C;
} unk_func_002D2280_0;

unk_func_002D2280_0 *func_002D2280(unk_func_002D2280_0 *arg0, u8 *arg1) {
    arg0->unk_00 = 0;
    arg0->unk_04 = 0;
    arg0->unk_08 = *arg1;
    arg0->unk_0C = &arg0->unk_04;
    return arg0;
}
