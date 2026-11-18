/* profile: o0 */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} unk_func_001F20C0_0;

typedef struct {
    u8 unk_00;
    u8 unk_01;
    u8 unk_02;
    u8 unk_03;
    u8 pad_04[8];
    s32 unk_0C;
} unk_func_001F20C0_1;

u8 func_001273A8(f32);

void func_001F20C0(unk_func_001F20C0_0 *arg0, unk_func_001F20C0_1 *arg1) {
    arg1->unk_00 = func_001273A8(100.0f * arg0->unk_00);
    arg1->unk_01 = func_001273A8(100.0f * arg0->unk_04);
    arg1->unk_02 = func_001273A8(100.0f * arg0->unk_08);
    arg1->unk_03 = func_001273A8(100.0f * arg0->unk_0C);
    arg1->unk_0C = 0x28;
}
