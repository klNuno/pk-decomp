/* profile: o0 */
#include "common.h"

typedef struct {
    u8 pad_00[0x58];
    void *unk_58;
    u16 unk_5C;
} unk_func_001CDDA0_0;

void func_001CF300(u16);
void HMU_fn_vFree(void *, s32);

void func_001CDDA0(unk_func_001CDDA0_0 *arg0) {
    func_001CF300(arg0->unk_5C);
    if (arg0->unk_58 != NULL) {
        HMU_fn_vFree(&arg0->unk_58, 1);
    }
    HMU_fn_vFree(&arg0, 1);
}
