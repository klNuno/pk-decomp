#include "common.h"

typedef struct {
    void *unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
} unk_func_002A66F0_0;

unk_func_002A66F0_0 *func_0029DA50(s32);
void func_002A6770();

unk_func_002A66F0_0 *func_002A66F0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    unk_func_002A66F0_0 *temp_v0;

    temp_v0 = func_0029DA50(0x14);
    temp_v0->unk_08 = arg0;
    temp_v0->unk_0C = arg1;
    temp_v0->unk_10 = arg2;
    temp_v0->unk_14 = arg3;
    temp_v0->unk_18 = arg4;
    temp_v0->unk_00 = func_002A6770;
    return temp_v0;
}
