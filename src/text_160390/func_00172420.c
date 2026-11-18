#include "common.h"

typedef struct {
    u8 pad_00[0xC];
    f32 unk_0C;
} unk_func_00172420_0;

extern s32 D_0035F4C8;
extern s32 D_0035FC28;
extern s32 D_0035FC2C;
extern s32 D_0035FC88;
extern unk_func_00172420_0 D_0036EFE0[];

void func_00172420(void) {
    unk_func_00172420_0 *p;
    u32 i;

    D_0035FC2C = 0;
    D_0035FC28 = D_0035FC88;
    if (D_0035F4C8 != 0) {
        p = D_0036EFE0;
        for (i = 0; i < 6000; i++) {
            p->unk_0C = 1.0f;
            p++;
        }
        D_0035F4C8 = 0;
    }
}
