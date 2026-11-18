/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_001ABD70_0 {
    u8 pad_00[0x75];
    u8 unk_75;
    u8 unk_76;
} unk_func_001ABD70_0;

s32 func_001ABA60();
unk_func_001ABD70_0 *HMU_fn_p_vMalloc();
void *memset();

unk_func_001ABD70_0 *func_001ABD70(void) {
    unk_func_001ABD70_0 *temp;

    temp = HMU_fn_p_vMalloc(func_001ABA60(), 1);
    if (temp == NULL) {
        return NULL;
    }
    memset(temp, 0, func_001ABA60());
    temp->unk_76 = 0;
    temp->unk_75 = 1;
    return temp;
}
