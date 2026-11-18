/* profile: o0 */
#include "common.h"

typedef struct {
    u8 pad_00[0x8];
    s32 unk_08;
} unk_func_001D14C0_0;

unk_func_001D14C0_0 *HIE_fn_hGetSuperObjectObject();
void func_001D1390();
void func_001D1450();

void func_001D14C0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp;

    temp = HIE_fn_hGetSuperObjectObject(arg0)->unk_08;
    if (temp != 0) {
        func_001D1390(arg0, arg1, arg2, arg3);
    } else {
        func_001D1450(arg0, arg1, arg2, arg3);
    }
}
