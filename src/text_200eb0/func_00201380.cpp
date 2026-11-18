/* profile: o0_301 */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_00201380_0;

typedef struct {
    u8 pad_00[0x50];
    unk_func_00201380_0 unk_50;
} unk_func_00201380_1;

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} unk_func_00201380_2;

extern "C" s32 func_002011C0(unk_func_00201380_1 *, unk_func_00201380_0 *, s8);

extern "C" s32 func_00201380(unk_func_00201380_1 *arg0, unk_func_00201380_0 *arg1, unk_func_00201380_0 *arg2, s8 arg3) {
    unk_func_00201380_0 v;

    v.unk_00 = arg1->unk_00 + arg0->unk_50.unk_00;
    v.unk_04 = arg1->unk_04 + arg0->unk_50.unk_04;
    v.unk_08 = arg1->unk_08 + arg0->unk_50.unk_08;
    if (func_002011C0(arg0, &v, arg3)) {
        return 0;
    }
    *(unk_func_00201380_2 *)arg2 = *(unk_func_00201380_2 *)&v;
    return 1;
}
