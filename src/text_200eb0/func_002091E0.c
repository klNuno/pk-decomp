/* profile: o0 */
#include "common.h"

s32 *func_00155EE0(s32);

s32 func_002091E0(void *arg0, void *arg1) {
    (*(s32 *)((u8 *)arg1 + 0)) = (s32) *func_00155EE0((*(s32 *)((u8 *)arg0 + 0x24)));
    (*(s32 *)((u8 *)arg1 + 4)) = (s32) (*(s32 *)((u8 *)(func_00155EE0((*(s32 *)((u8 *)arg0 + 0x24)))) + 4));
    (*(s32 *)((u8 *)arg1 + 8)) = (s32) (*(s32 *)((u8 *)(func_00155EE0((*(s32 *)((u8 *)arg0 + 0x24)))) + 8));
    (*(s32 *)((u8 *)arg1 + 0xC)) = 0x15;
    return 1;
}
