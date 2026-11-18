#include "common.h"

typedef struct {
    u8 pad_00[0x18];
    u16 unk_18;
    u16 unk_1A;
    u16 unk_1C;
    u16 unk_1E;
    u8 pad_20[0x18];
    s32 unk_38;
} unk_func_00168310_0;

extern u32 *D_0035FB24;
extern unk_func_00168310_0 **D_0035FB28;

void func_00168310(void) {
    s32 i;

    for (i = 0; i < 400; i++) {
        if (D_0035FB24[i] != 0xC0DE0005 && D_0035FB28[i] != NULL) {
            D_0035FB28[i]->unk_18 = D_0035FB28[i]->unk_1C;
            D_0035FB28[i]->unk_1A = D_0035FB28[i]->unk_1E;
            D_0035FB28[i]->unk_38 = 0;
        }
    }
}
