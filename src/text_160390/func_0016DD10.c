#include "common.h"

void func_0016BC10();
extern f32 D_0035F498;

void func_0016DD10(void *arg0) {
    void *temp_v1;

    func_0016BC10();
    temp_v1 = *(*(void ***)((u8 *)arg0 + 0x68));
    if (temp_v1 != NULL) {
        D_0035F498 = (0.75f * (180.0f * (*(f32 *)((u8 *)temp_v1 + 0x70)))) / 3.1415927f;
    }
}
