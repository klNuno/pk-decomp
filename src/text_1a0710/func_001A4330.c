/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_001A4330_0 {
    s32 unk_00;
    s32 unk_04;
} unk_func_001A4330_0;

u8 func_001A41C0(s32);
void func_001A4290(s32, u8);
u8 func_001A4310(s32);

void func_001A4330(unk_func_001A4330_0 *arg0, u8 arg1) {
    if (arg1 + func_001A41C0(arg0->unk_04) <= func_001A4310(arg0->unk_04)) {
        func_001A4290(arg0->unk_04, arg1 + func_001A41C0(arg0->unk_04));
    } else {
        func_001A4290(arg0->unk_04, func_001A4310(arg0->unk_04));
    }
}
