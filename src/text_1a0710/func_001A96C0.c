/* profile: o0_301 */
#include "common.h"

typedef struct {
    u8 pad_00[0xF4];
    s32 unk_F4[1];
} unk_func_001A96C0_0;

typedef struct {
    u8 pad_00[0x4];
    s32 unk_04;
} unk_func_001A96C0_1;

typedef struct {
    u8 pad_00[0x10];
    unk_func_001A96C0_1 *unk_10;
} unk_func_001A96C0_2;

unk_func_001A96C0_2 *HIE_fn_hGetSuperObjectObject(s32);
s32 func_001AEC70(s32);
void func_001B5BA0(s32, s32);
extern unk_func_001A96C0_0 D_005AB790;
extern u8 D_005AB880[];

void func_001A96C0(u8 arg0, s32 arg1) {
    s32 h;

    if (arg0 <= D_005AB880[0]) {
        h = func_001AEC70(arg0);
        if (h != 0) {
            func_001B5BA0(HIE_fn_hGetSuperObjectObject(h)->unk_10->unk_04, arg1);
        }
        D_005AB790.unk_F4[arg0] = arg1;
    }
}
