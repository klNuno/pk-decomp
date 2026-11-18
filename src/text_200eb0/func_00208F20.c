/* profile: o0 */
#include "common.h"

typedef struct {
    u8 pad_00[0xC];
    s32 unk_0C;
} unk_func_00208F20_2;

typedef struct {
    u8 pad_00[4];
    unk_func_00208F20_2 *unk_04;
} unk_func_00208F20_1;

typedef struct {
    s32 unk_00;
    u8 pad_04[8];
    s32 unk_0C;
} unk_func_00208F20_0;

unk_func_00208F20_0 *HIE_fn_hGetSuperObjectObject(s32);
unk_func_00208F20_1 *fn_p_stBrainGetMind(s32);

s32 func_00208F20(s32 arg0, unk_func_00208F20_0 *arg1) {
    s32 temp;

    temp = fn_p_stBrainGetMind(HIE_fn_hGetSuperObjectObject(arg0)->unk_0C)->unk_04->unk_0C;
    arg1->unk_00 = temp;
    arg1->unk_0C = 0x22;
    return 1;
}
