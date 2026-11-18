#include "common.h"

typedef struct {
    u8 pad_00[0x60];
} unk_func_00166E50_0;

void func_00155C70(unk_func_00166E50_0 *);
extern unk_func_00166E50_0 *D_0035F820;
extern s32 D_0035F824;
extern unk_func_00166E50_0 D_003632D0[];

void func_00166E50(void) {
    s16 i;

    D_0035F824 = 0;
    for (i = 0; i < 1; i++) {
        func_00155C70(&D_003632D0[i]);
    }
    D_0035F820 = &D_003632D0[D_0035F824++];
}
