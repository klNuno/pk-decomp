#include "common.h"

typedef struct unk_func_002A4DC0_1 {
    s32 unk_00;
    s32 unk_04;
} unk_func_002A4DC0_1;

typedef struct unk_func_002A4DC0_0 {
    void *unk_00;
    u8 pad_04[4];
    unk_func_002A4DC0_1 unk_08;
} unk_func_002A4DC0_0;

typedef struct unk_func_002A4DC0_2 {
    void *unk_00;
    u8 pad_04[4];
    s32 unk_08;
    f32 unk_0C;
} unk_func_002A4DC0_2;

unk_func_002A4DC0_0 *func_0029DA50(s32);
s32 func_0029DB20(f32 *, s32);
void func_002A4E50();
void func_002A4EB0();

void func_002A4DC0(s32 arg0, f32 *arg1) {
    if (arg0 == 0xB53) {
        unk_func_002A4DC0_0 *temp = func_0029DA50(8);
        unk_func_002A4DC0_1 *sub = &temp->unk_08;

        sub->unk_00 = arg0;
        sub->unk_04 = func_0029DB20(arg1, 0x10);
        temp->unk_00 = func_002A4E50;
    } else {
        f32 f = *arg1;
        unk_func_002A4DC0_2 *temp2;

        temp2 = (unk_func_002A4DC0_2 *)func_0029DA50(8);
        temp2->unk_08 = arg0;
        temp2->unk_0C = f;
        temp2->unk_00 = func_002A4EB0;
    }
}
