/* profile: o0_301 */
#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
} unk_func_001A8DF0_0;

typedef struct {
    u8 pad_00[0x28];
    unk_func_001A8DF0_0 *unk_28;
} unk_func_001A8DF0_1;

s32 fn_hGetSuperObjectActorHandle(s32);
unk_func_001A8DF0_1 *HIE_fn_hGetSuperObjectObject(s32);
void func_002D25A0(unk_func_001A8DF0_0 *);

s32 func_001A8DF0(s32 arg0, unk_func_001A8DF0_0 *arg1) {
    unk_func_001A8DF0_0 *temp_s0;
    s32 ret;
    s32 handle;

    ret = 0;
    handle = fn_hGetSuperObjectActorHandle(arg0);
    if (handle != 0) {
        temp_s0 = HIE_fn_hGetSuperObjectObject(handle)->unk_28;
        if (temp_s0 != NULL) {
            arg1->unk_00 = temp_s0->unk_00;
            arg1->unk_04 = temp_s0->unk_04;
        } else {
            func_002D25A0(arg1);
        }
        ret = 1;
    }
    return ret;
}
