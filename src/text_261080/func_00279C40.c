#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
    s32 unk_14;
    u8 pad_18[0x28];
    s32 unk_40;
} unk_func_00279C40_0;

void func_0031A360(s32);
void func_0031A340(s32);

s32 func_00279C40(unk_func_00279C40_0 *arg0) {
    s32 temp;

    func_0031A360(arg0->unk_40);
    temp = arg0->unk_14 + (arg0->unk_10 << 11);
    func_0031A340(arg0->unk_40);
    return temp;
}
