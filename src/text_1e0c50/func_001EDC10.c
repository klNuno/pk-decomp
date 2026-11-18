/* profile: o0_301 */
#include "common.h"

typedef struct {
    u8 pad_00[0x8];
    s32 unk_08;
    s32 unk_0C;
    u8 pad_10[0x4];
    s32 unk_14;
} unk_func_001EDC10_0;

void func_001EDC50();

void func_001EDC10(unk_func_001EDC10_0 *arg0) {
    func_001EDC50(arg0, (void *)arg0->unk_14);
    arg0->unk_0C = arg0->unk_08;
}
