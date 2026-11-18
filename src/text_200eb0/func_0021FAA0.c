/* profile: o0_301_p */
#include "common.h"

typedef struct {
    s32 unk_00;
    u8 pad_04[8];
    s32 unk_0C;
} unk_func_0021FAA0_0;

s32 fn_p_stEvalTree();
char *fn_szGetStringFromTextOrStringParam();
u32 func_0011D3F8();
char *func_0011DB00();
extern char D_0034E1C0[];

s32 func_0021FAA0(s32 arg0, s32 arg1, unk_func_0021FAA0_0 *arg2) {
    unk_func_0021FAA0_0 param;
    char *str;
    char *p;
    s64 count;
    s32 type;

    type = ((s32 *)arg1)[-2];
    count = 0;
    switch (type) {
    case 0x6E:
    arg1 = fn_p_stEvalTree(arg0, arg1, &param);
    str = fn_szGetStringFromTextOrStringParam(&param);
    p = str;
    while (p != 0) {
        p = func_0011DB00(p, D_0034E1C0);
        if (p != 0) {
            count++;
            p += func_0011D3F8(D_0034E1C0);
            if ((u32)(p - str) >= func_0011D3F8(str)) {
                p = 0;
            }
        }
    }
    count++;
    arg2->unk_00 = count;
    arg2->unk_0C = 6;
    break;
    }
    return arg1;
}
