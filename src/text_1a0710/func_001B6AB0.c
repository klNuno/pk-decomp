/* profile: o0 */
#include "common.h"

typedef struct unk_func_001B6AB0_0 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
} unk_func_001B6AB0_0;

typedef struct unk_func_001B6AB0_1 {
    u8 pad_00[0x14];
    unk_func_001B6AB0_0 *unk_14;
} unk_func_001B6AB0_1;

unk_func_001B6AB0_1 *HIE_fn_hGetSuperObjectObject(s32);

s32 func_001B6AB0(u8 arg0, s32 arg1) {
    if (HIE_fn_hGetSuperObjectObject(arg1)->unk_14 == 0) {
        return 0;
    }
    switch (arg0) {
    case 0:
        return HIE_fn_hGetSuperObjectObject(arg1)->unk_14->unk_00;
    case 2:
        return HIE_fn_hGetSuperObjectObject(arg1)->unk_14->unk_04;
    case 1:
        return HIE_fn_hGetSuperObjectObject(arg1)->unk_14->unk_08;
    case 3:
        return HIE_fn_hGetSuperObjectObject(arg1)->unk_14->unk_0C;
    }
    return 0;
}
