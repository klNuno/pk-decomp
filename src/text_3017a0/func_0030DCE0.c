#include "common.h"

s32 func_0030D050(s32);

s32 func_0030DCE0(void *arg0) {
    if (func_0030D050((*(s32 *)((u8 *)arg0 + 0xC))) == 0) {
        (*(s32 *)((u8 *)arg0 + 8)) = 0;
    }
    return (*(s32 *)((u8 *)arg0 + 8)) != 0;
}
