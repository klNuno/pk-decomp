/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_001AA0A0_0 {
    s32 unk_00;
    s32 unk_04;
} unk_func_001AA0A0_0;

void func_001AAF30(u8, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);

void func_001AA0A0(u8 arg0, unk_func_001AA0A0_0 *arg1, unk_func_001AA0A0_0 *arg2) {
    s32 i;

    for (i = 0; i < 2; i++) {
        func_001AAF30(arg0, i, 1, arg1->unk_00, arg1->unk_04, 0, 0, 0, 0, 0, 0);
        func_001AAF30(arg0, i, 5, 0, 0, 0, 0, 0, 0, arg2->unk_00, arg2->unk_04);
    }
}
