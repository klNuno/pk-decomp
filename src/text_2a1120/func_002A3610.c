#include "common.h"

typedef struct unk_func_002A3610_0 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} unk_func_002A3610_0;

typedef struct unk_func_002A3610_1 {
    void *unk_00;
    s32 unk_04;
    unk_func_002A3610_0 unk_08;
} unk_func_002A3610_1;

unk_func_002A3610_1 *func_0029DA50(s32);
s32 func_0029DB20(s32, s32);
void func_002A3680();

void func_002A3610(s32 arg0, s32 arg1, s32 arg2) {
    unk_func_002A3610_1 *temp_v0;
    unk_func_002A3610_0 *temp_s1;

    temp_v0 = func_0029DA50(0xC);
    temp_s1 = &temp_v0->unk_08;
    temp_s1->unk_00 = arg0;
    temp_s1->unk_04 = arg1;
    temp_s1->unk_08 = func_0029DB20(arg2, arg1 * 4);
    temp_v0->unk_00 = func_002A3680;
}
