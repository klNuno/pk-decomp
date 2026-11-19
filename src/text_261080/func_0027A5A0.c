/* profile: opt */
#include "common.h"

typedef struct unk_func_0027A5A0_0 {
    s32 unk_00;
    u8 pad_04[0x4];
    s32 unk_08;
    s32 unk_0C;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    u8 pad_1C[0x24];
    s32 unk_40;
} unk_func_0027A5A0_0;

void func_0031A360(s32);
void func_0031A340(s32);

void func_0027A5A0(unk_func_0027A5A0_0 *arg0, s32 *arg1, s32 *arg2, s32 *arg3, s32 *arg4) {
    s32 temp0;
    s32 temp3;
    s32 temp1;
    s32 temp2;
    s32 temp4;

    func_0031A360(arg0->unk_40);
    temp2 = arg0->unk_10;
    temp3 = arg0->unk_14;
    temp4 = arg0->unk_18;
    temp0 = arg0->unk_0C + temp2;
    temp0 <<= 11;
    temp0 += temp3;
    temp0 %= temp4;
    temp1 = (((arg0->unk_08 - 2) - temp2) << 11) - temp3;
    if (temp4 - temp0 >= temp1) {
        *arg1 = arg0->unk_00 + temp0;
        *arg2 = temp1;
        *arg3 = 0;
        *arg4 = 0;
    } else {
        *arg1 = arg0->unk_00 + temp0;
        *arg2 = arg0->unk_18 - temp0;
        *arg3 = arg0->unk_00;
        *arg4 = temp1 - (arg0->unk_18 - temp0);
    }
    func_0031A340(arg0->unk_40);
}
