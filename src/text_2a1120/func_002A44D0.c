#include "common.h"

typedef struct {
    s64 unk_00;
    s64 unk_08;
    s64 unk_10;
    s64 unk_18;
    s32 unk_20;
    s32 unk_24;
    s32 unk_28;
    s32 unk_2C;
    s32 unk_30;
    s32 unk_34;
} unk_func_002A44D0_0;

void func_002BE3E0(s32, s64, s64, s32, s32, s64, s64, s32, s32, s32);

void func_002A44D0(unk_func_002A44D0_0 *arg0) {
    func_002BE3E0(arg0->unk_20, arg0->unk_00, arg0->unk_08, arg0->unk_24, arg0->unk_28, arg0->unk_10, arg0->unk_18, arg0->unk_2C, arg0->unk_30, arg0->unk_34);
}
