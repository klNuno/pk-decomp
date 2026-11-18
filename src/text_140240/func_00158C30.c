#include "common.h"

typedef struct unk_func_00158C30_1 {
    u8 pad_00[4];
    s32 unk_04;
} unk_func_00158C30_1;

typedef struct unk_func_00158C30_0 {
    u8 pad_00[8];
    unk_func_00158C30_1 *unk_08;
} unk_func_00158C30_0;

extern unk_func_00158C30_0 *D_00367AC0[];

s32 func_00158C30(s32 arg0) {
    return (arg0 & D_00367AC0[0]->unk_08->unk_04) == arg0;
}
