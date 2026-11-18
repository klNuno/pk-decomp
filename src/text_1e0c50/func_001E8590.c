/* profile: o0_301 */
#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} unk_func_001E8590_0;

s32 func_001E8520(u8 **, s32);
void *memset(void *, s32, u32);

unk_func_001E8590_0 *func_001E8590(u8 **arg0, s32 arg1, s32 arg2) {
    unk_func_001E8590_0 *temp;

    temp = NULL;
    temp = (unk_func_001E8590_0 *)*arg0;
    memset(*arg0, 0, 0xC);
    *arg0 = *arg0 + 0xC;
    temp->unk_00 = arg1;
    temp->unk_04 = 0;
    temp->unk_08 = func_001E8520(arg0, arg2);
    return temp;
}
