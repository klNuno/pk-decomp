/* profile: o0 */
#include "common.h"

s32 func_00201B60(void *arg0, void *arg1) {
    f32 sp28 = *(f32 *)((u8 *)arg0 + 0xC);
    f32 sp2C = *(f32 *)((u8 *)arg1 + 0xC);

    return (sp2C > sp28) ? -1 : ((sp2C == sp28) ? 0 : 1);
}
