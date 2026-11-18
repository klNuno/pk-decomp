/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_002278C0_0 {
    union {
        s32 i;
        f32 f;
    } unk_00;
    u8 pad_04[8];
    s32 unk_0C;
} unk_func_002278C0_0;

s32 fn_p_stEvalTree();
char *fn_szGetStringFromTextOrStringParam();
void func_0011CBB0();
s32 func_001274A8(f32);
s32 func_0019D550(f32);
extern char D_0034E3F0[];

s32 func_002278C0(s32 arg0, s32 arg1) {
    unk_func_002278C0_0 param;
    char buf[0x28];
    f32 f;
    char *str;
    s32 val;

    arg1 = fn_p_stEvalTree(arg0, arg1, &param);
    str = fn_szGetStringFromTextOrStringParam(&param);
    arg1 = fn_p_stEvalTree(arg0, arg1, &param);
    f = (param.unk_0C == 8) ? param.unk_00.f : (f32)param.unk_00.i;
    arg1 = fn_p_stEvalTree(arg0, arg1, &param);
    val = (param.unk_0C == 8) ? func_0019D550(param.unk_00.f) : param.unk_00.i;
    func_0011CBB0(buf, D_0034E3F0, val);
    func_0011CBB0(str, buf, func_001274A8(f));
    return arg1;
}
