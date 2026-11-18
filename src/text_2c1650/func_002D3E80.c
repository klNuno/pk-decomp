#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    u8 unk_08;
} unk_func_002D3E80_0;

unk_func_002D3E80_0 *func_002D3E80(unk_func_002D3E80_0 *arg0, u8 *arg1) {
    arg0->unk_00 = 0;
    arg0->unk_04 = 0;
    arg0->unk_08 = *arg1;
    *(s32 **)&arg0->unk_08 = &arg0->unk_04;
    return arg0;
}
