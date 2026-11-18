/* profile: opt_300 */
#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
} unk_func_002D79D0_0;

void func_002D7CE0(unk_func_002D79D0_0 **, s32, s32 *);
unk_func_002D79D0_0 *func_002CF7D0(s32);

s32 func_002D79D0(s32 arg0, s32 arg1) {
    s32 ret;
    unk_func_002D79D0_0 *sp3C;

    ret = 0;
    func_002D7CE0(&sp3C, arg0, &arg1);
    if (sp3C != func_002CF7D0(arg0)) {
        ret = sp3C->unk_10;
    }
    return ret;
}
