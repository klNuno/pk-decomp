#include "common.h"

typedef struct unk_func_00279970_0 {
    s64 unk_00;
    s64 unk_08;
    s32 unk_10;
    s32 unk_14;
} unk_func_00279970_0;

typedef struct unk_func_00279970_1 {
    u8 pad_00[0x40];
    s32 unk_40;
    u8 pad_44[0xC];
    unk_func_00279970_0 *unk_50;
    s32 unk_54;
    s32 unk_58;
    s32 unk_5C;
} unk_func_00279970_1;

void func_0031A360();
void func_0031A340();
void func_00279AA0();

s32 func_00279970(unk_func_00279970_1 *arg0, unk_func_00279970_0 *arg1) {
    s32 ret;

    ret = 0;
    func_0031A360(arg0->unk_40);
    if (arg0->unk_58 < arg0->unk_54) {
        func_00279AA0(arg0, arg1);
        if (arg1->unk_00 >= 0 || arg1->unk_08 >= 0) {
            arg0->unk_50[arg0->unk_5C].unk_00 = arg1->unk_00;
            arg0->unk_50[arg0->unk_5C].unk_08 = arg1->unk_08;
            arg0->unk_50[arg0->unk_5C].unk_10 = arg1->unk_10;
            arg0->unk_50[arg0->unk_5C].unk_14 = arg1->unk_14;
            arg0->unk_58++;
            arg0->unk_5C = (arg0->unk_5C + 1) % arg0->unk_54;
        }
        ret = 1;
    }
    func_0031A340(arg0->unk_40);
    return ret;
}
