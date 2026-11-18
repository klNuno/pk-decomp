/* profile: o0_301 */
#include "common.h"

typedef union {
    s16 unk_00;
    u8 pad[0x10];
} unk_func_00227580_0;

s32 *fn_p_stEvalTree(s32, s32 *, unk_func_00227580_0 *);
char *fn_szGetStringFromTextOrStringParam(unk_func_00227580_0 *);
s32 func_0011D3F8(char *);
void func_001D0630(char *, char *, void *);
void func_002CF310(u8);
void memmove(void *, void *, s32);
extern char D_0034E3D8[];
extern char D_0034E3E0[];
extern u8 *D_005ABDC4[];
extern u8 D_005ACACE[];

s32 *func_00227580(s32 arg0, s32 *arg1) {
    unk_func_00227580_0 r;
    char *s;
    s16 idx;
    s16 len;
    s32 type;
    s16 c;

    type = arg1[-2];
    s = 0;
    len = 0;
    arg1 = fn_p_stEvalTree(arg0, arg1, &r);
    if (type != 0x112) {
        s = fn_szGetStringFromTextOrStringParam(&r);
        if (s != 0) {
            len = (s16)func_0011D3F8(s);
        }
        arg1 = fn_p_stEvalTree(arg0, arg1, &r);
    }
    idx = r.unk_00;
    switch (type) {
    case 0x112:
        D_005ACACE[0] = idx;
        func_002CF310(D_005ACACE[0]);
        func_001D0630(D_0034E3D8, D_0034E3E0, D_005ABDC4[0] + D_005ACACE[0] * 0x28);
        break;
    case 0x10F:
    case 0x110:
        if (idx >= 0 && idx < len) {
            arg1 = fn_p_stEvalTree(arg0, arg1, &r);
            c = r.unk_00;
            s += idx;
            if (type == 0x10F) {
                memmove(s + 1, s, len - idx + 1);
            }
            *s = c;
        }
        break;
    case 0x111:
        if (idx >= 0 && idx < len) {
            s += idx;
            memmove(s, s + 1, len - idx);
        }
        break;
    }
    return arg1;
}
