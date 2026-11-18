/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_0024DD10_1 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} unk_func_0024DD10_1;

typedef struct unk_func_0024DD10_2 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_0024DD10_2;

typedef struct unk_func_0024DD10_0 {
    u8 pad_00[0x4];
    u8 *unk_04;
    u8 *unk_08;
    u8 *unk_0C;
    u8 pad_10[0x30];
    unk_func_0024DD10_2 unk_40;
    unk_func_0024DD10_2 unk_4C;
} unk_func_0024DD10_0;

void func_001FD710();

void func_0024DD10(unk_func_0024DD10_0 *arg0, s32 arg1, s32 arg2, unk_func_0024DD10_1 *arg3, unk_func_0024DD10_1 *arg4) {
    if (arg2 == 1) {
        ((s32 *)&arg0->unk_40)[0] = arg3->unk_00;
        ((s32 *)&arg0->unk_40)[1] = arg3->unk_04;
        ((s32 *)&arg0->unk_40)[2] = arg3->unk_08;
        ((s32 *)&arg0->unk_4C)[0] = arg4->unk_00;
        ((s32 *)&arg0->unk_4C)[1] = arg4->unk_04;
        ((s32 *)&arg0->unk_4C)[2] = arg4->unk_08;
    }
    func_001FD710(arg0, arg0->unk_04 + 0x72, arg0->unk_08 + 0x72, arg0->unk_0C + 0x72, arg1, arg2, 0x4000);
}
