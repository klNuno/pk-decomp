/* profile: o0 */
#include "common.h"

typedef struct {
    u8 pad_00[8];
    s32 unk_08;
} unk_func_001D1EF0_0;

unk_func_001D1EF0_0 *HIE_fn_hGetSuperObjectObject();
void func_001D1BE0();
void func_001D1DB0();

void func_001D1EF0(s32 arg0, s32 arg1) {
    s32 temp;

    temp = HIE_fn_hGetSuperObjectObject(arg0)->unk_08;
    if (temp != 0) {
        func_001D1BE0(arg0, arg1);
    } else {
        func_001D1DB0(arg0, arg1);
    }
}
