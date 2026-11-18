/* profile: o0_301 */
#include "common.h"

typedef struct {
    u8 pad_00[8];
    s32 unk_08;
} unk_func_001D1390_0;

unk_func_001D1390_0 *HIE_fn_hGetSuperObjectObject(s32);
void func_0012D940(s32);
void func_0014F6B0(s32, s32, s32, s32);
s32 func_001979C0(s32);
s32 func_001B84B0(s32);
void func_001D1240(s32, s32, s32, s32, s32);

void func_001D1390(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s2;

    temp_s0 = HIE_fn_hGetSuperObjectObject(arg0)->unk_08;
    temp_s1 = func_001B84B0(temp_s0);
    temp_s2 = func_001979C0(arg0);
    func_0014F6B0(temp_s2, arg1, arg2, arg3);
    func_0012D940(arg0);
    func_001D1240(temp_s1, arg0, arg1, arg2, arg3);
}
