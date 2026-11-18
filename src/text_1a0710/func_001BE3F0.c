/* profile: o0_301 */
#include "common.h"

typedef struct {
    u8 pad_00[0x4];
    s32 unk_04;
} unk_func_001BE3F0_1;

typedef struct {
    u8 pad_00[0x1C];
    s32 unk_1C;
    unk_func_001BE3F0_1 *unk_20;
} unk_func_001BE3F0_0;

unk_func_001BE3F0_0 *HIE_fn_hGetSuperObjectObject();
void func_00131E00();
void func_00132050();
s32 func_001B9740();

void func_001BE3F0(s32 arg0) {
    func_00132050(HIE_fn_hGetSuperObjectObject(arg0)->unk_20->unk_04);
    if (HIE_fn_hGetSuperObjectObject(arg0)->unk_1C != 0) {
        func_00131E00(func_001B9740(HIE_fn_hGetSuperObjectObject(arg0)->unk_1C));
    }
}
