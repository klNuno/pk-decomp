/* profile: o0_301_p */
#include "common.h"

typedef struct unk_func_002364B0_0 {
    u8 pad_00[4];
    s32 unk_04;
} unk_func_002364B0_0;

typedef union unk_func_002364B0_1 {
    s32 unk_00;
    u8 unk_00_u8;
    u8 pad_00[0x10];
} unk_func_002364B0_1;

s32 *fn_p_stEvalTree(s32, s32 *, unk_func_002364B0_1 *);
char *fn_szGetStringFromTextOrStringParam(unk_func_002364B0_1 *);
s32 func_0011D3F8(char *);
s32 fn_h_StandardGameGetSuperObject(s32);
void func_001AE4C0(s32, u8, u8);

s32 *func_002364B0(s32 arg0, s32 *arg1) {
    unk_func_002364B0_1 param;
    unk_func_002364B0_0 *p;
    s32 type;
    u8 c1;
    u8 c2;
    char *str;
    s32 i;
    s32 len;
    s32 pos;

    p = 0;
    type = arg1[-2];
    c1 = 0;
    c2 = 0;
    str = 0;
    arg1 = fn_p_stEvalTree(arg0, arg1, &param);
    p = (unk_func_002364B0_0 *)param.unk_00;
    arg1 = fn_p_stEvalTree(arg0, arg1, &param);
    str = fn_szGetStringFromTextOrStringParam(&param);
    arg1 = fn_p_stEvalTree(arg0, arg1, &param);
    c1 = param.unk_00_u8;
    arg1 = fn_p_stEvalTree(arg0, arg1, &param);
    c2 = param.unk_00_u8;
    switch (type) {
    case 0x212:
        if (str != 0) {
            i = 0;
            len = func_0011D3F8(str);
            while (str[i++] == '/') {
                while (str[i++] != ':') {
                }
            }
            pos = c1 + i - 1;
            if (len < pos) {
                str[len - 1] = c2;
            } else {
                str[pos] = c2;
            }
            func_001AE4C0(fn_h_StandardGameGetSuperObject(p->unk_04), c1, c2);
        }
        break;
    }
    return arg1;
}
