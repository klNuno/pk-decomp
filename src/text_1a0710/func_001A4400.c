/* profile: o0_301 */
#include "common.h"

typedef struct {
    u8 pad_00[0x4];
    s32 unk_04;
} unk_func_001A4400_0;

u8 func_001A41C0(s32);
void func_001A4290(s32, u8);

void func_001A4400(unk_func_001A4400_0 *arg0, u8 arg1) {
    if (func_001A41C0(arg0->unk_04) - arg1 > 0) {
        func_001A4290(arg0->unk_04, func_001A41C0(arg0->unk_04) - arg1);
    } else {
        func_001A4290(arg0->unk_04, 0);
    }
    func_001A41C0(arg0->unk_04);
}
