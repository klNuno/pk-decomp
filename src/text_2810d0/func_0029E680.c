#include "common.h"

void func_0029EA40(f32, f32, f32, f32);
f32 int2dB__Fi(s64);

void func_0029E680(void *arg0) {
    f32 temp_f20;
    f32 temp_f21;
    f32 temp_f22;

    temp_f22 = int2dB__Fi((*(s64 *)((u8 *)arg0 + 0)));
    temp_f21 = int2dB__Fi((*(s64 *)((u8 *)arg0 + 8)));
    temp_f20 = int2dB__Fi((*(s64 *)((u8 *)arg0 + 0x10)));
    func_0029EA40(temp_f22, temp_f21, temp_f20, int2dB__Fi((*(s64 *)((u8 *)arg0 + 0x18))));
}
