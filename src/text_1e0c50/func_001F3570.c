/* profile: o0 */
#include "common.h"

typedef struct {
    u8 pad_00[0x20];
    u32 unk_20;
} unk_func_001F3570_0;

typedef struct {
    u8 pad_00[4];
    unk_func_001F3570_0 *unk_04;
    u8 pad_08[8];
    s32 unk_10;
} unk_func_001F3570_1;

unk_func_001F3570_1 *HIE_fn_hGetSuperObjectObject(s32);
u32 func_001E6A60(s32, s32);
extern u32 D_005AB800[];

s32 func_001F3570(s32 arg0) {
    s32 obj;
    u32 temp;
    u32 temp2;

    obj = HIE_fn_hGetSuperObjectObject(arg0)->unk_10;
    obj = obj;
    temp2 = D_005AB800[0];
    temp = func_001E6A60(3, arg0);
    if (temp2 >= temp + func_001E6A60(2, arg0)) {
        HIE_fn_hGetSuperObjectObject(arg0)->unk_04->unk_20 &= ~0x8000;
        return 4;
    }
    return 1;
}
