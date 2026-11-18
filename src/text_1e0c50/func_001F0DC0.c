/* profile: o0_301 */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_001F0DC0_0;

typedef struct {
    unk_func_001F0DC0_0 unk_00;
    u8 pad_0C[0x4];
    s32 unk_10;
} unk_func_001F0DC0_1;

s32 func_001979C0(s32);
void func_001559E0(unk_func_001F0DC0_0 *, s32, unk_func_001F0DC0_0 *);

void func_001F0DC0(unk_func_001F0DC0_1 *arg0, unk_func_001F0DC0_0 *arg1) {
    s32 temp;
    unk_func_001F0DC0_0 v;

    if (arg0->unk_10 != 0) {
        v = arg0->unk_00;
        temp = func_001979C0(arg0->unk_10);
        func_001559E0(arg1, func_001979C0(arg0->unk_10), &v);
    } else {
        *arg1 = arg0->unk_00;
    }
}
