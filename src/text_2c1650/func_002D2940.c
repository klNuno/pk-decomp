#include "common.h"

void func_002D2BB0(void **);

void func_002D2940(void ***arg0, s32 *arg1, void ***arg2) {
    void **temp_a0;

    temp_a0 = *arg2;
    *arg2 = *(void ***)((u8 *)temp_a0 + 4);
    (*(void ***)((u8 *)(*(void **)((u8 *)temp_a0 + 0)) + 4)) = (void **) (*(void ***)((u8 *)temp_a0 + 4));
    *(*(void ***)((u8 *)temp_a0 + 4)) = *(void **)((u8 *)temp_a0 + 0);
    func_002D2BB0(temp_a0);
    *arg1 -= 1;
    *arg0 = *arg2;
}
