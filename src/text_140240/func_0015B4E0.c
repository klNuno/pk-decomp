/* profile: opt_300 */
#include "common.h"

typedef struct unk_func_0015B4E0_0 {
    u8 pad_00[0x206];
    s8 unk_206;
} unk_func_0015B4E0_0;

typedef struct unk_func_0015B4E0_1 {
    u8 pad_00[0x8];
    unk_func_0015B4E0_0 *unk_08;
} unk_func_0015B4E0_1;

extern unk_func_0015B4E0_1 *D_003679BC[];
extern s32 D_0035F3E4;
s32 func_001E6250();

u8 func_0015B4E0(void) {
    s8 temp = D_003679BC[0]->unk_08->unk_206;

    if (func_001E6250(D_0035F3E4, temp) == 0) {
        temp = 0;
    }
    return temp;
}
