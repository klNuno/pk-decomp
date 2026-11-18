/* profile: o0_301 */
#include "common.h"

typedef struct {
    u8 pad_00[0xC];
    s32 unk_0C;
} unk_func_001BFA70_0;

s32 *HIE_fn_hGetSuperObjectObject();
s32 func_001979C0();
void func_001BFAF0();

void func_001BFA70(unk_func_001BFA70_0 *arg0, s32 arg1) {
    s32 temp;

    arg0->unk_0C = arg1;
    if (arg1 != 0) {
        temp = *HIE_fn_hGetSuperObjectObject(arg1);
        func_001BFAF0(temp, func_001979C0(arg1));
    }
}
