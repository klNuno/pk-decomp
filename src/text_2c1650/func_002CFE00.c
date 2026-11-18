#include "common.h"

s32 func_002CFE00(void **arg0) {
    void *temp_v0;

    temp_v0 = *arg0;
    if (temp_v0 != NULL) {
        return *(s32 *)((u8 *)temp_v0 + 0xC);
    }
    return 0;
}
