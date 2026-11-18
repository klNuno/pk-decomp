#include "common.h"

void func_002D6290();
extern s32 D_00360548;
extern s32 D_0036054C;

void func_002D25A0(void *arg0) {
    func_002D6290();
    (*(s32 *)((u8 *)arg0 + 0)) = (s32) D_00360548;
    (*(s32 *)((u8 *)arg0 + 4)) = (s32) D_0036054C;
}
