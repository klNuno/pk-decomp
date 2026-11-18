/* profile: o0 */
#include "common.h"

typedef struct {
    s32 unk_00;
    u8 pad_04[0xC];
} unk_func_0023F790_0;

s32 *fn_p_stEvalTree(s32, s32 *, unk_func_0023F790_0 *);
u8 func_001A95B0();
u8 func_001A95D0();
void func_001A95E0(u8, u8);
extern u8 D_003601AC;
extern u8 D_003601B0;
extern u8 D_003601B4;

s32 *func_0023F790(s32 arg0, s32 *arg1) {
    s32 type;
    unk_func_0023F790_0 sp20;

    type = arg1[-2];
    switch (type) {
    case 0x282:
        arg1 = fn_p_stEvalTree(arg0, arg1, &sp20);
        if (sp20.unk_00 != 0) {
            D_003601AC = 1;
            D_003601B4 = func_001A95B0();
            D_003601B0 = func_001A95D0();
            func_001A95E0(1, 1);
        } else {
            D_003601AC = 0;
            func_001A95E0(D_003601B4, D_003601B0);
        }
        return arg1;
    }
    return arg1;
}
