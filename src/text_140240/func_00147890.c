#include "common.h"

typedef struct unk_func_00147890_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_00147890_0;

void func_00149810();
unk_func_00147890_0 *func_00155EE0();

void func_00147890(u8 *arg0, s32 arg1) {
    unk_func_00147890_0 sp20;
    unk_func_00147890_0 *temp;

    func_00149810(&sp20, arg0, arg1);
    temp = func_00155EE0(arg0 + 0xE0);
    temp->unk_00 += sp20.unk_00;
    temp->unk_04 += sp20.unk_04;
    temp->unk_08 += sp20.unk_08;
}
