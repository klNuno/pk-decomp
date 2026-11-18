/* profile: o0 */
#include "common.h"

typedef struct {
    u8 pad_00[0x74];
    u8 unk_74;
} unk_func_001F6260_1;

typedef struct {
    u8 pad_00[0x68];
    s32 unk_68;
} unk_func_001F6260_2;

typedef struct {
    u8 pad_00[8];
    unk_func_001F6260_1 *unk_08;
    unk_func_001F6260_2 *unk_0C;
    u8 pad_10[0x1C];
    u8 unk_2C[4];
} unk_func_001F6260_0;

void func_001F5B90();
s32 func_001F56E0();
extern s8 D_00360154;

void func_001F6260(unk_func_001F6260_0 *arg0) {
    func_001F5B90(arg0);
    if (!(arg0->unk_08->unk_74 & 2) && arg0->unk_0C->unk_68 != 0 && !D_00360154 && func_001F56E0(arg0, arg0->unk_2C) != 0) {
        func_001F5B90(arg0);
    }
}
