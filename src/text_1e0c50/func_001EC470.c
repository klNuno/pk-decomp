/* profile: o0_301 */
#include "common.h"

typedef struct {
    u8 unk_00;
    u8 unk_01;
    u8 pad_02[2];
    s32 *unk_04;
} unk_func_001EC470_0;

void func_001EDBB0();

void func_001EC470(unk_func_001EC470_0 *arg0, s32 arg1, u8 arg2) {
    u8 i;

    arg2 = (arg0->unk_00 + 1 > arg2) ? arg2 : arg0->unk_00 + 1;
    if (arg0->unk_00 < arg0->unk_01) {
        for (i = arg0->unk_00; i > arg2; i--) {
            arg0->unk_04[i] = arg0->unk_04[i - 1];
        }
        arg0->unk_04[arg2] = arg1;
        arg0->unk_00++;
    } else {
        func_001EDBB0(0xE, 0);
    }
}
