/* profile: o0 */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} unk_func_001B99F0_0;

void func_001B99B0(s32, unk_func_001B99F0_0 *);

void func_001B99F0(s32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4) {
    unk_func_001B99F0_0 v;

    v.unk_00 = arg1;
    v.unk_04 = arg2;
    v.unk_08 = arg3;
    v.unk_0C = arg4;
    func_001B99B0(arg0, &v);
}
