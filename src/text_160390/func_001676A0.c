#include "common.h"

extern s32 D_0035F820;
extern void *D_0035FB04;
extern void *D_0035FBB0;

void func_001676A0(void *arg0) {
    s32 *temp_a1;

    D_0035FBB0 = arg0;
    temp_a1 = *(s32 **)((u8 *)arg0 + 0x68);
    (*(void **)((u8 *)D_0035FB04 + 0)) = arg0;
    (*(s32 *)((u8 *)D_0035FB04 + 0x18)) = 0;
    (*(s32 *)((u8 *)D_0035FB04 + 0x80)) = (s32) D_0035F820;
    (*(s32 *)((u8 *)D_0035FB04 + 0x7C)) = (s32) (*temp_a1 + 0x10);
    (*(s32 *)((u8 *)D_0035FB04 + 0x194)) = (s32) *temp_a1;
}
