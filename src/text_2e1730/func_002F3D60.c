#include "common.h"

void *__register_global_object(void *, void *, void *);
void func_002CD2A0();
void func_002CDB60(void *, char *, void *);
s32 func_002F42C0();
s32 func_002F4F00();
s32 func_002F4060(s32, void *, s32, s32, s32, s32, s32);
extern s32 D_003606B0;
extern s8 D_003606B4;
extern s32 D_003606B8;
extern u8 D_007BEF50[];
extern char D_0035C2D0[];

s32 func_002F3D60(void) {
    s32 sp3C;
    void *temp;

    if (D_003606B4 == 0) {
        temp = __register_global_object(&D_003606B0, (void *)func_002CD2A0, D_007BEF50);
        func_002CDB60(temp, D_0035C2D0, &sp3C);
        D_003606B8 = func_002F4060(func_002F42C0(), temp, func_002F4F00(), 0x10, 1, 0, 0);
        D_003606B4 = 1;
    }
    return D_003606B8;
}
