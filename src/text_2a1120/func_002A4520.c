#include "common.h"

typedef struct {
    s32 unk_00;
    f32 unk_04;
    f32 unk_08;
    s32 unk_0C;
    s32 unk_10;
    s32 unk_14;
} unk_func_002A4520_0;

typedef struct {
    void (*unk_00)();
    u8 pad_04[4];
    unk_func_002A4520_0 unk_08;
} unk_func_002A4520_1;

unk_func_002A4520_1 *func_0029DA50();
s32 func_0029DB20();
void func_002A45C0();

void func_002A4520(s32 arg0, f32 arg1, f32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    unk_func_002A4520_1 *temp;
    unk_func_002A4520_0 *temp2;

    temp = func_0029DA50(0x18);
    temp2 = &temp->unk_08;
    temp2->unk_00 = arg0;
    temp2->unk_04 = arg1;
    temp2->unk_08 = arg2;
    temp2->unk_0C = arg3;
    temp2->unk_10 = arg4;
    temp2->unk_14 = func_0029DB20(arg5, arg3 * arg4 * 4);
    temp->unk_00 = func_002A45C0;
}
