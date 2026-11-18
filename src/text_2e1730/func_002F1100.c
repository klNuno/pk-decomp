#include "common.h"

s32 func_002DD190(s32 *);

s32 func_002F1100(void *arg0) {
    s32 temp_v1;

    temp_v1 = *(s32 *)((u8 *)arg0 + 0);
    switch (temp_v1) {
    case 1:
        return *(*(s32 **)((u8 *)arg0 + 4)) != 0;
    case 2:
        return func_002DD190((*(s32 **)((u8 *)arg0 + 4)));
    default:
        return 0;
    }
}
