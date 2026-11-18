/* profile: o0_301 */
#include "common.h"

typedef struct {
    u32 unk_00;
    u8 pad_04[8];
    s32 unk_0C;
} unk_func_0021D900_0;

s32 *fn_p_stEvalTree(s32, s32 *, unk_func_0021D900_0 *);
extern u32 D_005AB800[];

s32 *func_0021D900(s32 arg0, s32 *arg1, unk_func_0021D900_0 *arg2) {
    u32 value;
    u32 other;
    s32 type;

    type = arg1[-2];
    value = D_005AB800[0];
    switch (type) {
    case 0x41:
        break;
    case 0x42:
        arg1 = fn_p_stEvalTree(arg0, arg1, arg2);
        other = arg2->unk_00;
        if (value >= other) {
            value -= other;
        } else {
            value = -(value - other);
        }
        break;
    }
    arg2->unk_00 = value;
    arg2->unk_0C = 7;
    return arg1;
}
