/* profile: o0 */
#include "common.h"

typedef struct unk_func_001BDA30_0 {
    u8 pad_00[0x10];
    s32 unk_10;
} unk_func_001BDA30_0;

s32 HIE_fn_hGetSuperObjectObject();
extern unk_func_001BDA30_0 *D_005AD930[];

void func_001BDA30(s32 arg0) {
    D_005AD930[0]->unk_10 = HIE_fn_hGetSuperObjectObject(arg0);
}
