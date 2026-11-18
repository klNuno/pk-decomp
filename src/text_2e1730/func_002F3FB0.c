#include "common.h"

extern s32 D_003606B0;
extern s8 D_003606B4;
extern s32 D_003606B8;
extern u8 D_0035C2D0[];
extern u8 D_007BEF50[];

void func_002CD2A0();
void *__register_global_object(void *, void *, void *);
void func_002CDB60(void *, void *, void *);
s32 func_002F42C0(void);
s32 func_002F4F00(void);
s32 func_002F4060(s32, void *, s32, s32, s32, s32, s32);

s32 func_002F3FB0(void) {
    s32 a;
    void *p;
    s32 sp3C;

    if (D_003606B4 == 0) {
        p = __register_global_object(&D_003606B0, (void *)func_002CD2A0, D_007BEF50);
        func_002CDB60(p, D_0035C2D0, &sp3C);
        a = func_002F42C0();
        D_003606B8 = func_002F4060(a, p, func_002F4F00(), 0x10, 1, 0, 0);
        D_003606B4 = 1;
    }
    return D_003606B8;
}
