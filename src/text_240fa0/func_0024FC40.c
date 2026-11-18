/* profile: o0_301 */
#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} unk_func_0024FC40_0;

typedef struct {
    u8 pad_00[0x104];
    s32 unk_104;
    u8 pad_108[0x118];
    s32 unk_220;
    u8 pad_224[0xC4];
    unk_func_0024FC40_0 unk_2E8;
} unk_func_0024FC40_1;

void func_00258210(s32, s32, char *, s32);
extern char D_003370E8[];
extern unk_func_0024FC40_0 D_006053D0;

void func_0024FC40(unk_func_0024FC40_1 *arg0) {
    func_00258210(arg0->unk_104, arg0->unk_220, D_003370E8, 0);
    ((s32 *)&arg0->unk_2E8)[0] = ((s32 *)&D_006053D0)[0];
    ((s32 *)&arg0->unk_2E8)[1] = ((s32 *)&D_006053D0)[1];
    ((s32 *)&arg0->unk_2E8)[2] = ((s32 *)&D_006053D0)[2];
}
