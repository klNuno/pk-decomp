/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_001D1CE0_0 {
    u8 pad_00[0x8];
    s32 unk_08;
} unk_func_001D1CE0_0;

unk_func_001D1CE0_0 *HIE_fn_hGetSuperObjectObject(s32);
void func_0012D940(s32);
void func_00150ED0(s32);
void func_00153920(s32, s32, s32);
s32 func_001979C0(s32);
void func_0019A230(s32);
s32 func_001B84B0(s32);
void func_001D1A50(s32, s32);

void func_001D1CE0(s32 arg0, s32 arg1) {
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_s0;

    temp_s1 = HIE_fn_hGetSuperObjectObject(arg0)->unk_08;
    temp_s2 = func_001B84B0(temp_s1);
    temp_s0 = func_001979C0(arg0);
    func_00153920(temp_s0, arg1, temp_s0);
    func_00150ED0(temp_s0);
    func_0019A230(arg0);
    func_0012D940(arg0);
    func_001D1A50(temp_s2, arg1);
}
