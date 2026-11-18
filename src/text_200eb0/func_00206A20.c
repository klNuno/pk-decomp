/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_00206A20_0 {
    s32 unk_00[4];
} unk_func_00206A20_0;

s32 *fn_p_stEvalTree(s32, s32 *, unk_func_00206A20_0 *);
char *fn_szGetStringFromTextOrStringParam(unk_func_00206A20_0 *);
u8 func_001D7140(char *);

s32 *func_00206A20(s32 arg0, s32 *arg1, s32 *arg2) {
    s32 result;
    char *str;
    s32 type;
    unk_func_00206A20_0 sp40;
    type = arg1[-2];
    result = 0;
    str = 0;
    arg1 = fn_p_stEvalTree(arg0, arg1, &sp40);
    str = fn_szGetStringFromTextOrStringParam(&sp40);
    switch (type) {
    case 0x46:
        result = func_001D7140(str);
        break;
    }
    *arg2 = result;
    return arg1;
}
