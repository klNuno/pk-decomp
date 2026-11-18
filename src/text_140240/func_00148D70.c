#include "common.h"

void func_00148DB0();

void func_00148D70(void *arg0) {
    s32 temp_v1;

    func_00148DB0();
    temp_v1 = (*(s32 *)((u8 *)arg0 + 8)) | 0x40000000;
    (*(s32 *)((u8 *)arg0 + 8)) = temp_v1;
    (*(s32 *)((u8 *)arg0 + 8)) = temp_v1;
}
