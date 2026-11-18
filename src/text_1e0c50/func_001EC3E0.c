/* profile: o0_301 */
#include "common.h"

typedef struct {
    u8 unk_00;
    u8 unk_01;
    u8 pad_02[2];
    s32 *unk_04;
} unk_func_001EC3E0_0;

void func_001EDBB0(s32, s32);

void func_001EC3E0(unk_func_001EC3E0_0 *arg0, s32 arg1) {
    if (arg0->unk_00 < arg0->unk_01) {
        arg0->unk_04[arg0->unk_00++] = arg1;
    } else {
        func_001EDBB0(0xE, 0);
    }
}
