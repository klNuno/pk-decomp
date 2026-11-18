#include "common.h"

void func_002DDE90(void *arg0, s16 arg1) {
    s16 *temp_v1;

    temp_v1 = *(s16 **)((u8 *)arg0 + 0xC);
    if (temp_v1 != NULL) {
        *temp_v1 = arg1;
    }
}
