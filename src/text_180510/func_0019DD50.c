/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_0019DD50_0 {
    u8 pad_00[0x30];
    s32 unk_30;
} unk_func_0019DD50_0;

s32 HIE_fn_hGetSuperObjectObject(s32);
s32 func_00133AA0(s32);
s32 func_00133C70(s32, s32);
s32 func_001979C0(s32);
s32 func_0019DE40(s32);
void func_001DBD00(s32, s32, s32, s32, s32, void *, s32, s32, u8);

void func_0019DD50(unk_func_0019DD50_0 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp0;
    s32 temp1;
    s32 temp2;

    temp0 = func_00133AA0(HIE_fn_hGetSuperObjectObject(arg2));
    if (temp0 != 0) {
        temp1 = func_00133C70(3, temp0);
        if (temp1 != 0) {
            temp2 = func_001979C0(arg2);
            func_001DBD00(arg1, arg3, arg4, temp1, temp2, (void *)arg2, 1, func_0019DE40(arg2), arg0->unk_30 & 8);
        }
    }
}
