/* profile: opt_noprop */
#include "common.h"

struct unk_func_002A34F0_1 {
    s32 unk_00;
    s32 unk_04;
    void *unk_08;
};

typedef struct unk_func_002A34F0_0 {
    void *unk_00;
    u8 pad_04[0x4];
    unk_func_002A34F0_1 unk_08;
} unk_func_002A34F0_0;

extern "C" {
void *func_0029DA50(s32);
void *func_0029DB20(void *, s32);
void func_002A3560();

void func_002A34F0(s32 arg0, s32 arg1, void *arg2) {
    unk_func_002A34F0_0 *temp;
    unk_func_002A34F0_1 *temp1;

    temp = (unk_func_002A34F0_0 *)func_0029DA50(0xC);
    temp->unk_08.unk_00 = arg0;
    temp->unk_08.unk_04 = arg1;
    temp1 = &temp->unk_08;
    temp1->unk_08 = func_0029DB20(arg2, arg1 * 2);
    temp->unk_00 = (void *)func_002A3560;
}
}
