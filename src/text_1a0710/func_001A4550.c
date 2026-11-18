/* profile: o0_301 */
#include "common.h"

typedef struct {
    u8 pad_00[0x4];
    s32 unk_04;
} unk_func_001A4550_0;

void func_001A4520();
s32 func_001A45A0();

void func_001A4550(unk_func_001A4550_0 *arg0) {
    func_001A4520(arg0->unk_04, func_001A45A0(arg0->unk_04));
}
