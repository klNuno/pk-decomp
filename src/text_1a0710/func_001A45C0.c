/* profile: o0_301 */
#include "common.h"

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
} unk_func_001A45C0_0;

u8 func_001A4310(s32);
u8 func_001A45A0(s32);
void func_001A4520(s32, u8);

void func_001A45C0(unk_func_001A45C0_0 *arg0, u8 arg1) {
    s32 temp;

    temp = arg1 + func_001A4310(arg0->unk_04);
    if (temp <= func_001A45A0(arg0->unk_04)) {
        func_001A4520(arg0->unk_04, arg1 + func_001A4310(arg0->unk_04));
    } else {
        func_001A4520(arg0->unk_04, func_001A45A0(arg0->unk_04));
    }
}
