/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_001A2AD0_0 {
    u8 pad_00[4];
    s32 unk_04;
} unk_func_001A2AD0_0;

unk_func_001A2AD0_0 *HIE_fn_hGetSuperObjectObject(s32);
s32 func_00197CC0(s32);
void func_0012D6F0(s32, s32, s32);
extern s32 D_0035FF70;

void func_001A2AD0(s32 arg0) {
    func_0012D6F0(arg0, D_0035FF70, func_00197CC0(HIE_fn_hGetSuperObjectObject(arg0)->unk_04));
}
