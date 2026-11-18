/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_001FD890_0 {
    u8 pad_00[0xF8];
    f32 unk_F8;
    f32 unk_FC;
    f32 unk_100;
} unk_func_001FD890_0;

unk_func_001FD890_0 *func_001F19D0(s32);
s32 func_001979C0(s32);
s32 func_001979A0(s32);
void func_00155E80(s32, s32);
void func_001BE120(s32, s32);

void func_001FD890(s32 arg0, s32 arg1) {
    unk_func_001FD890_0 *temp_s0;

    temp_s0 = func_001F19D0(arg0);
    func_00155E80(func_001979C0(arg0), arg1);
    func_00155E80(func_001979A0(arg0), arg1);
    temp_s0->unk_100 = temp_s0->unk_FC = temp_s0->unk_F8 = 0.0f;
    func_001BE120(arg0, arg1);
}
