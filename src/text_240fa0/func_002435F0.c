/* profile: o0_301 */
#include "common.h"

typedef struct {
    s32 unk_00;
    u8 pad_04[8];
    s32 unk_0C;
} unk_func_002435F0_0;

s32 *fn_p_stEvalTree();
void func_00199370();

s32 *func_002435F0(s32 arg0, s32 *arg1) {
    unk_func_002435F0_0 param;
    s32 id;
    s32 val;

    id = arg1[-2];
    arg1 = fn_p_stEvalTree(arg0, arg1, &param);
    val = param.unk_00;
    switch (id) {
    case 0x313:
        func_00199370(val);
        break;
    }
    return arg1;
}
