/* profile: o0 */
#include "common.h"

void func_001D61E0(void *arg0, void *arg1) {
    (*(s32 *)((u8 *)arg0 + 0)) = (s32) (*(s32 *)((u8 *)arg1 + 0));
    (*(s32 *)((u8 *)arg0 + 4)) = (s32) (*(s32 *)((u8 *)arg1 + 4));
    (*(s32 *)((u8 *)arg0 + 8)) = (s32) (*(s32 *)((u8 *)arg1 + 8));
    (*(f32 *)((u8 *)arg0 + 0xC)) = 1.0f;
}
