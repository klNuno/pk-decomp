/* profile: o0_301 */
#include "common.h"

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
} unk_func_001A4690_0;

u8 func_001A4310(s32);
void func_001A4520(s32, u8);
void func_001A4330(unk_func_001A4690_0 *, u8);

void func_001A4690(unk_func_001A4690_0 *arg0, u8 arg1) {
    if (func_001A4310(arg0->unk_04) - arg1 > 0) {
        func_001A4520(arg0->unk_04, func_001A4310(arg0->unk_04) - arg1);
    } else {
        func_001A4520(arg0->unk_04, 0);
    }
    func_001A4330(arg0, 0);
    func_001A4310(arg0->unk_04);
}
