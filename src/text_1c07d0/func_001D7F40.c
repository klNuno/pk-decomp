/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_001D7F40_0 {
    u8 pad_00[0xC];
    s32 unk_0C;
} unk_func_001D7F40_0;

u8 SAV2_fn_eGiveElementTypeFromAIType(s32);
void func_001D7190(s32, u8, s32, s32, s32);
void func_001D7EC0(s32, unk_func_001D7F40_0 *);

void func_001D7F40(s32 arg0, unk_func_001D7F40_0 *arg1) {
    unk_func_001D7F40_0 *temp_s0 = arg1;

    func_001D7190(arg0, (u8)(s32)SAV2_fn_eGiveElementTypeFromAIType(temp_s0->unk_0C), 1, 0, 0);
    func_001D7EC0(arg0, arg1);
}
