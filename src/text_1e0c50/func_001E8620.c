/* profile: o0_301 */
#include "common.h"

typedef struct {
    u8 pad_00[0x68];
} unk_func_001E8620_0;

void *memset(void *, s32, u32);

unk_func_001E8620_0 *func_001E8620(unk_func_001E8620_0 **arg0, u8 arg1) {
    unk_func_001E8620_0 *temp = 0;

    temp = *arg0;
    memset(*arg0, 0, arg1 * sizeof(unk_func_001E8620_0));
    *arg0 += arg1;
    return temp;
}
