#include "common.h"

s16 func_00196080(u8 *arg0, s16 arg1) {
    return *(s16 *)((*(u8 ***)(arg0 + 0x10))[arg1] + 4);
}
