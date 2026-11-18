/* profile: o0_301_p */
#include "common.h"

typedef union {
    s32 unk_00;
    f32 unk_00_f;
} unk_Q_1;

typedef struct {
    unk_Q_1 unk_00;
    u8 pad_04[0x8];
    s32 unk_0C;
} unk_Q_0;

s32 *fn_p_stEvalTree(s32, s32 *, unk_Q_0 *);
char *fn_szGetStringFromTextOrStringParam(unk_Q_0 *);
char *func_0011DB00(char *, char *);
void func_0011D588(char *, char *, s32);
void func_0011CBB0(char *, char *, ...);
s64 func_001274A8(f32);
void func_001E6190(char *, char *);
char *strcpy(char *, char *);
extern char D_0034E3C0[];
extern char D_0034E3C8[];
extern char D_0034E3D0[];

s32 *func_00227300(s32 arg0, s32 *arg1) {
    unk_Q_0 sp90;
    char spA0[0xD0];
    char sp170[0x1C];
    s32 type;
    char *src;
    char *end;
    u8 i;
    u8 count;
    char *dst;
    char *str;
    s64 ival;
    f32 fval;

    type = arg1[-2];
    src = NULL;
    count = 0;
    switch (type) {
    case 0x10D:
        count = 1;
        break;
    case 0x10E:
        count = 2;
        break;
    }
    spA0[0] = 0;
    arg1 = fn_p_stEvalTree(arg0, arg1, &sp90);
    dst = fn_szGetStringFromTextOrStringParam(&sp90);
    arg1 = fn_p_stEvalTree(arg0, arg1, &sp90);
    src = fn_szGetStringFromTextOrStringParam(&sp90);
    for (i = 0; i < count; i++) {
        end = func_0011DB00(src, D_0034E3C0);
        func_0011D588(spA0, src, end - src);
        src = end + 2;
        arg1 = fn_p_stEvalTree(arg0, arg1, &sp90);
        switch (sp90.unk_0C) {
        case 6:
            ival = sp90.unk_00.unk_00;
            func_0011CBB0(sp170, D_0034E3C8, ival);
            func_001E6190(spA0, sp170);
            break;
        case 8:
            fval = sp90.unk_00.unk_00_f;
            func_0011CBB0(sp170, D_0034E3D0, func_001274A8(fval));
            func_001E6190(spA0, sp170);
            break;
        case 9:
        case 0x24:
            str = fn_szGetStringFromTextOrStringParam(&sp90);
            func_001E6190(spA0, str);
            break;
        }
    }
    strcpy(dst, spA0);
    return arg1;
}
