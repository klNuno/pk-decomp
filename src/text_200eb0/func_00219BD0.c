/* profile: o0 */
#include "common.h"

typedef struct unk_func_00219BD0_0 {
    u8 pad_00[0x24];
    s32 unk_24;
} unk_func_00219BD0_0;

typedef struct unk_func_00219BD0_1 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
} unk_func_00219BD0_1;

unk_func_00219BD0_1 *func_00155EE0();

s32 func_00219BD0(unk_func_00219BD0_0 *arg0, s32 arg1, unk_func_00219BD0_1 *arg2) {
    arg2->unk_00 = func_00155EE0(arg0->unk_24)->unk_00;
    arg2->unk_04 = func_00155EE0(arg0->unk_24)->unk_04;
    arg2->unk_08 = func_00155EE0(arg0->unk_24)->unk_08;
    arg2->unk_0C = 0x15;
    return arg1;
}
