#include "common.h"

void func_002CD680(s32);

void func_002DE050(void *arg0, f32 fparg0) {
    f32 *temp_v1;
    s32 temp_a0;

    if ((*(u8 *)((u8 *)arg0 + 0)) != 0) {
        temp_a0 = *(s32 *)((u8 *)arg0 + 8);
        if (temp_a0 != 0) {
            func_002CD680(temp_a0);
        }
    } else {
        temp_v1 = *(f32 **)((u8 *)arg0 + 0xC);
        if (temp_v1 != NULL) {
            *temp_v1 = fparg0;
        }
    }
}
