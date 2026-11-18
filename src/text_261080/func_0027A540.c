#include "common.h"

typedef struct {
    u8 pad_00[0x14];
    s32 unk_14;
    u8 pad_18[0x28];
    s32 unk_40;
    u8 pad_44[4];
    s64 unk_48;
} unk_func_0027A540_0;

void func_0031A360(s32);
void func_0031A340(s32);

void func_0027A540(unk_func_0027A540_0 *arg0, s32 arg1) {
    func_0031A360(arg0->unk_40);
    arg0->unk_14 += arg1;
    arg0->unk_48 += arg1;
    func_0031A340(arg0->unk_40);
}
