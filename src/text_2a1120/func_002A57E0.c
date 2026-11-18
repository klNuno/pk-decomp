#include "common.h"

typedef struct unk_func_002A57E0_0 {
    void *unk_00;
    u8 pad_04[4];
    f32 unk_08;
    f32 unk_0C;
} unk_func_002A57E0_0;

unk_func_002A57E0_0 *func_0029DA50(s32);
void func_002A5830();

void func_002A57E0(f32 arg0, f32 arg1) {
    unk_func_002A57E0_0 *temp;

    temp = func_0029DA50(8);
    temp->unk_08 = arg0;
    temp->unk_0C = arg1;
    temp->unk_00 = func_002A5830;
}
