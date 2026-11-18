/* profile: o0_p */
#include "common.h"

typedef struct unk_func_001C8610_0 {
    u8 pad_00[0x38];
    s32 unk_38;
    s16 unk_3C;
} unk_func_001C8610_0;

typedef struct unk_func_001C8610_1 {
    u8 pad_00[0xC];
    unk_func_001C8610_0 **unk_0C;
} unk_func_001C8610_1;

typedef struct unk_func_001C8610_2 {
    u8 pad_00[0x118];
    unk_func_001C8610_1 ***unk_118;
    unk_func_001C8610_1 **unk_11C;
    u8 pad_120[0x1C];
    unk_func_001C8610_0 **unk_13C;
    u8 pad_140[0xC];
} unk_func_001C8610_2;

extern u32 D_0035FFE4;
extern unk_func_001C8610_2 D_005AD960[];

void func_001C8610(void) {
    u32 i;

    for (i = 0; i < D_0035FFE4; i++) {
        (*(*D_005AD960[i].unk_11C)->unk_0C)->unk_38 = (*D_005AD960[i].unk_13C)->unk_38;
        (*(*D_005AD960[i].unk_11C)->unk_0C)->unk_3C = (*D_005AD960[i].unk_13C)->unk_3C;
        *D_005AD960[i].unk_118 = D_005AD960[i].unk_11C;
    }
}
