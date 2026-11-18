/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_001D6D50_0 {
    u8 pad_00[0xC];
    char *unk_0C;
    u8 pad_10[4];
    s32 unk_14;
} unk_func_001D6D50_0;

void *SAV2_fn_p_vMalloc(s32);
s32 func_0011D3F8(s32);
void func_001D6B20(unk_func_001D6D50_0 *, u8, u8, s32);
char *strcpy();

unk_func_001D6D50_0 *func_001D6D50(s32 arg0, u8 arg1, u8 arg2, s32 arg3) {
    unk_func_001D6D50_0 *temp;

    temp = SAV2_fn_p_vMalloc(0x18);
    temp->unk_0C = SAV2_fn_p_vMalloc(func_0011D3F8(arg0) + 1);
    strcpy(temp->unk_0C, (char *)arg0);
    temp->unk_14 = 0;
    func_001D6B20(temp, arg1, arg2, arg3);
    return temp;
}
