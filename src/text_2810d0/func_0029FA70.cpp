#include "common.h"

extern "C" {
s32 func_0029DB20(f32 *, s32);
void func_0029FB20();
void func_0029FBA0();
}

class unk_func_0029FA70_0 {
public:
    s32 unk_00;
    s32 unk_04;
    union {
        f32 f;
        s32 i;
    } unk_08;

};

typedef struct {
    void *unk_00;
    u8 pad_04[0x4];
    unk_func_0029FA70_0 unk_08;
} unk_func_0029FA70_1;

extern "C" {
unk_func_0029FA70_1 *func_0029DA50(s32);

void func_0029FA70(s32 arg0, s32 arg1, f32 *arg2) {
    if (arg1 == 0x2200) {
        f32 temp = *arg2;
        unk_func_0029FA70_1 *obj = func_0029DA50(0xC);
        obj->unk_08.unk_00 = arg0;
        obj->unk_08.unk_04 = arg1;
        obj->unk_08.unk_08.f = temp;
        obj->unk_00 = func_0029FBA0;
    } else {
        unk_func_0029FA70_1 *obj = func_0029DA50(0xC);
        unk_func_0029FA70_0 *sub = &obj->unk_08;
        sub->unk_00 = arg0;
        sub->unk_04 = arg1;
        sub->unk_08.i = func_0029DB20(arg2, 0x10);
        obj->unk_00 = func_0029FB20;
    }
}
}
