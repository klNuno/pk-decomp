/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_0021FD30_0 {
    union {
        s32 unk_00;
        f32 unk_00_f;
    } u;
    u8 pad_04[8];
    s32 unk_0C;
} unk_func_0021FD30_0;

typedef struct unk_func_0021FD30_1 {
    u8 pad_00[0xC];
    s32 unk_0C;
    s32 unk_10;
} unk_func_0021FD30_1;

typedef struct unk_func_0021FD30_2 {
    s32 unk_00;
    u8 pad_04[8];
    s32 unk_0C;
} unk_func_0021FD30_2;

s32 *fn_p_stEvalTree(s32, s32 *, unk_func_0021FD30_0 *);
char *fn_szGetStringFromTextOrStringParam(unk_func_0021FD30_0 *);
void func_001D7F00(char *, void *);
void func_001D74A0(char *);
s32 func_0019D550(f32);
void SAV2_fn_xGetAValueAtIndex(char *, s32, void *);
void func_001D90D0(char *, unk_func_0021FD30_1 *);
u8 func_001D9ED0();

s32 *func_0021FD30(s32 arg0, s32 *arg1, unk_func_0021FD30_2 *arg2) {
    unk_func_0021FD30_0 param;
    unk_func_0021FD30_1 info;
    s32 type;
    char *str;
    s32 idx;

    type = arg1[-2];
    str = NULL;
    if (type != 0x74) {
        arg1 = fn_p_stEvalTree(arg0, arg1, &param);
        str = fn_szGetStringFromTextOrStringParam(&param);
    }
    switch (type) {
    case 0x72:
        func_001D7F00(str, arg2);
        func_001D74A0(str);
        break;
    case 0x73:
        arg1 = fn_p_stEvalTree(arg0, arg1, &param);
        idx = (param.unk_0C == 8) ? func_0019D550(param.u.unk_00_f) : param.u.unk_00;
        SAV2_fn_xGetAValueAtIndex(str, idx, arg2);
        break;
    case 0x75:
        func_001D90D0(str, &info);
        arg2->unk_00 = info.unk_10;
        arg2->unk_0C = 6;
        break;
    case 0x76:
        func_001D90D0(str, &info);
        arg2->unk_00 = info.unk_0C;
        arg2->unk_0C = 6;
        break;
    case 0x74:
        arg2->unk_00 = func_001D9ED0();
        arg2->unk_0C = 6;
        break;
    }
    return arg1;
}
