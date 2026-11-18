#include "common.h"

extern "C" {
s32 func_0029DB20(s32 *, s32);
void func_0029F5F0();
void func_0029F670();
}

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} unk_func_0029F540_0;

typedef struct {
    void *unk_00;
    u8 pad_04[0x4];
    unk_func_0029F540_0 unk_08;
} unk_func_0029F540_1;

extern "C" {
unk_func_0029F540_1 *func_0029DA50(s32);

void func_0029F540(s32 arg0, s32 arg1, s32 *arg2) {
    if (arg1 == 0x2501 || arg1 == 0x2502) {
        unk_func_0029F540_1 *obj = func_0029DA50(0xC);
        unk_func_0029F540_0 *sub = &obj->unk_08;
        sub->unk_00 = arg0;
        sub->unk_04 = arg1;
        sub->unk_08 = func_0029DB20(arg2, 0x10);
        obj->unk_00 = func_0029F5F0;
    } else {
        s32 temp = *arg2;
        unk_func_0029F540_1 *obj = func_0029DA50(0xC);
        obj->unk_08.unk_00 = arg0;
        obj->unk_08.unk_04 = arg1;
        obj->unk_08.unk_08 = temp;
        obj->unk_00 = func_0029F670;
    }
}
}
