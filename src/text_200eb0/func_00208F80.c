/* profile: o0 */
#include "common.h"

typedef struct {
    s32 unk_00;
    u8 pad_04[8];
    s32 unk_0C;
} unk_func_00208F80_0;

typedef struct {
    u8 pad_00[0xC];
    s32 unk_0C;
} unk_func_00208F80_3;

typedef struct {
    u8 pad_00[8];
    unk_func_00208F80_3 *unk_08;
} unk_func_00208F80_2;

typedef struct {
    u8 pad_00[0xC];
    s32 unk_0C;
} unk_func_00208F80_1;

unk_func_00208F80_1 *HIE_fn_hGetSuperObjectObject();
unk_func_00208F80_2 *fn_p_stBrainGetMind();

s32 func_00208F80(s32 arg0, unk_func_00208F80_0 *arg1) {
    s32 temp;

    temp = fn_p_stBrainGetMind(HIE_fn_hGetSuperObjectObject(arg0)->unk_0C)->unk_08->unk_0C;
    arg1->unk_00 = temp;
    arg1->unk_0C = 0x22;
    return 1;
}
