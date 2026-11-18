/* profile: o0 */
#include "common.h"

typedef struct unk_func_00209CA0_0 {
    u16 unk_00;
    u16 unk_02;
    u16 unk_04;
    u8 pad_06[0xA];
} unk_func_00209CA0_0;

void func_00208EA0(unk_func_00209CA0_0 *);

s32 func_00209CA0(s32 arg0, s32 *arg1) {
    unk_func_00209CA0_0 sp20;
    s32 temp;

    arg0 = arg0;
    func_00208EA0(&sp20);
    temp = sp20.unk_04 + (sp20.unk_02 * 31 + sp20.unk_00 * 12 * 31);
    arg1[0] = temp;
    arg1[3] = 6;
    return 1;
}
