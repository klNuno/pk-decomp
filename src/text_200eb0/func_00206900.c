/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_00206900_0 {
    s32 unk_00[4];
} unk_func_00206900_0;

s32 *fn_p_stEvalTree(s32, s32 *, unk_func_00206900_0 *);
s32 func_0015E2E0(u8);

s32 *func_00206900(s32 arg0, s32 *arg1, s32 *arg2) {
    s32 type;
    s32 result;
    unk_func_00206900_0 sp30;

    type = arg1[-2];
    result = 0;
    switch (type) {
    case 0x44:
        arg1 = fn_p_stEvalTree(arg0, arg1, &sp30);
        result = func_0015E2E0(sp30.unk_00[0] & 0xFF);
        break;
    case 0x45:
        arg1 = fn_p_stEvalTree(arg0, arg1, &sp30);
        result = 0;
        break;
    }
    *arg2 = result;
    return arg1;
}
