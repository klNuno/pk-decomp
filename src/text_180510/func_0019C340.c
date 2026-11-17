/* profile: o0 */
#include "common.h"

typedef struct {
    u8 pad_00[0x18];
    u32 unk_18;
} unk_func_0019C340_0;

void func_0019C340(unk_func_0019C340_0 *arg0, u32 arg1) {
    arg0->unk_18 -= arg0->unk_18 & arg1;
}
