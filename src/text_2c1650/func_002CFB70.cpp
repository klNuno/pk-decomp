#include "common.h"

typedef struct unk_func_002CFB70_0 {
    u8 pad_00[0x14];
    s32 unk_14;
} unk_func_002CFB70_0;

extern "C" {
void func_002CF4C0(void *);
void func_002D5450(void *, s32);
void __register_global_object(void *, void *, void *);
unk_func_002CFB70_0 *func_002D5350(void *, s32);
s32 *func_002CFCA0(unk_func_002CFB70_0 *);
s32 func_002CF8F0(s32, s32, s32, s32, s32, s32);
void func_002D5A00(unk_func_002CFB70_0 *, s32, s32, s32);
extern s8 D_00360520;
extern u8 D_007BDF70[];
extern u8 D_007BDF80[];

s32 func_002CFB70(s32 arg0, s32 arg1, s32 arg2, s32 arg3, volatile s32 arg4, s32 arg5, s32 arg6) {
    s32 ret;
    unk_func_002CFB70_0 *p;
    s32 *q;

    ret = -2;
    if (D_00360520 == 0) {
        func_002CF4C0(D_007BDF80);
        __register_global_object(D_007BDF80, (void *)func_002D5450, D_007BDF70);
        D_00360520 = 1;
    }
    p = func_002D5350(D_007BDF80, arg0);
    if (p != 0) {
        if (p == 0) {
            goto end;
        }
        q = func_002CFCA0(p);
        if (p->unk_14 == *q) {
            goto end;
        }
    }
    ret = func_002CF8F0(arg1, arg2, arg3, arg4, arg5, arg6);
    if (p != 0 && ret != -2) {
        func_002D5A00(p, arg1, arg3, ret);
    }
end:
    return ret;
}
}
