#include "common.h"

extern s32 D_0035FA10;
extern void *D_0035FB04;

void func_00176580(void *arg0) {
    void *temp_a0;

    (*(void **)((u8 *)D_0035FB04 + 4)) = arg0;
    temp_a0 = *(void **)((u8 *)arg0 + 0x7C);
    if (temp_a0 != NULL) {
        (*(s32 *)((u8 *)temp_a0 + 0x1C)) = (s32) D_0035FA10;
    }
}
