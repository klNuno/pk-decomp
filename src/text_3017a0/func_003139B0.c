#include "common.h"

extern void *D_003608AC;

void func_003139B0(s32 arg0) {
    if (D_003608AC != NULL) {
        (*(s32 *)((u8 *)D_003608AC + 0x7C)) = arg0;
    }
}
