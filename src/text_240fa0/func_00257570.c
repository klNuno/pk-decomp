/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_00257570_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_00257570_0;

s32 *HIE_fn_hGetSuperObjectObject(s32);
void func_0012DAE0(s32);
void func_00150060(s32, unk_func_00257570_0 *, unk_func_00257570_0 *, unk_func_00257570_0 *);
s32 func_001979C0(s32);
s32 *func_001B84B0(s32);

void func_00257570(unk_func_00257570_0 *arg0, s32 arg1) {
    unk_func_00257570_0 sp50;
    unk_func_00257570_0 sp60;
    s32 temp_s2;
    s32 temp_s3;
    s32 *temp_s1;

    func_0012DAE0(arg1);
    temp_s2 = func_001979C0(arg1);
    if ((temp_s3 = HIE_fn_hGetSuperObjectObject(arg1)[2]) != 0) {
        if ((temp_s1 = func_001B84B0(temp_s3)) != NULL && ((temp_s1[2] & 8) ? 1 : 0)) {
            arg0->unk_00 = 0.0f;
            arg0->unk_04 = 0.0f;
            arg0->unk_08 = 1.0f;
        } else {
            arg0->unk_08 = arg0->unk_04 = arg0->unk_00 = 0.0f;
        }
    }
    func_00150060(temp_s2, &sp50, &sp60, arg0);
}
