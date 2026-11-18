#include "common.h"

extern f32 D_00360240;

void func_0026C440(void *arg0) {
    f32 temp_f2;

    temp_f2 = 1.0f - (D_00360240 * (*(f32 *)((u8 *)arg0 + 0x68)));
    (*(f32 *)((u8 *)arg0 + 0x60)) = (f32) ((*(f32 *)((u8 *)arg0 + 0x60)) * temp_f2);
    (*(f32 *)((u8 *)arg0 + 0x64)) = (f32) ((*(f32 *)((u8 *)arg0 + 0x64)) * temp_f2);
    if ((*(f32 *)((u8 *)arg0 + 0x60)) < 0.01f) {
        (*(s32 *)((u8 *)arg0 + 0)) = (s32) ((*(s32 *)((u8 *)arg0 + 0)) | 1);
    }
}
