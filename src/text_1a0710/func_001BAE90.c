/* profile: o0_301 */
#include "common.h"

typedef struct {
    u8 pad_00[0x28];
    void *unk_28;
} unk_func_001BAE90_0;

s32 func_001BA940();
void memcpy();

void func_001BAE90(unk_func_001BAE90_0 *arg0, unk_func_001BAE90_0 *arg1) {
    memcpy((void *)arg0->unk_28, (void *)arg1->unk_28, func_001BA940());
}
