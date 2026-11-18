/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_00228E20_0 {
    u8 pad_00[8];
    s32 unk_08;
} unk_func_00228E20_0;

void func_0012D940();
unk_func_00228E20_0 *HIE_fn_hGetSuperObjectObject();
s32 func_001B84B0();
void func_00139A90();

void func_00228E20(s32 arg0, s32 arg1, s32 arg2, u8 arg3) {
    func_0012D940(arg0);
    if (arg3 && arg1 != 0 && HIE_fn_hGetSuperObjectObject(arg0)->unk_08 != 0) {
        func_00139A90(func_001B84B0(HIE_fn_hGetSuperObjectObject(arg0)->unk_08), arg1);
    }
}
