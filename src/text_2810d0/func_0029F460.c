#include "common.h"

typedef struct {
    void *unk_00;
    u8 pad_04[4];
    s32 unk_08;
    s32 unk_0C;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    s32 unk_1C;
    s32 unk_20;
    s32 unk_24;
} unk_func_0029F460_0;

unk_func_0029F460_0 *func_0029DA50(s32);
void func_0029F510();

void func_0029F460(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    unk_func_0029F460_0 *p;

    p = func_0029DA50(0x20);
    p->unk_08 = arg0;
    p->unk_0C = arg1;
    p->unk_10 = arg2;
    p->unk_14 = arg3;
    p->unk_18 = arg4;
    p->unk_1C = arg5;
    p->unk_20 = arg6;
    p->unk_24 = arg7;
    p->unk_00 = func_0029F510;
}
