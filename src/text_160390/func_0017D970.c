#include "common.h"

s32 func_00191FF0(s32, s32, s32);
extern void *D_0035FB04;

s32 func_0017D970(s32 arg0, s32 arg1) {
    if ((*(f32 *)((u8 *)D_0035FB04 + 0x1E0)) < 0.01f) {
        return 1;
    }
    return func_00191FF0(arg1, arg0, arg0);
}
