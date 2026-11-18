#include "common.h"

typedef struct {
    void *unk_00;
    u8 pad_04[0x4];
    s32 unk_08;
    s32 unk_0C;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    s32 unk_1C;
    s32 unk_20;
    s32 unk_24;
    s32 unk_28;
} unk_func_0029EF00_0;

unk_func_0029EF00_0 *func_0029DA50(s32);
void func_0029EFB0();

void func_0029EF00(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8) {
    unk_func_0029EF00_0 *obj = func_0029DA50(0x24);

    obj->unk_08 = arg0;
    obj->unk_0C = arg1;
    obj->unk_10 = arg2;
    obj->unk_14 = arg3;
    obj->unk_18 = arg4;
    obj->unk_1C = arg5;
    obj->unk_20 = arg6;
    obj->unk_24 = arg7;
    obj->unk_28 = arg8;
    obj->unk_00 = func_0029EFB0;
}
