#include "common.h"

typedef struct unk_func_00136830_0 {
    u8 unk_00;
    u8 unk_01;
    u8 pad_02[0x2];
    s32 unk_04;
} unk_func_00136830_0;

typedef struct unk_func_00136830_1 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} unk_func_00136830_1;

typedef struct unk_func_00136830_2 {
    s32 unk_00;
    u8 unk_04;
    u8 pad_05[0x3];
} unk_func_00136830_2;

void Erm_fn_v_UpdateLastError(s32, u8, s32, s32, s32, s32, s32, char *, char *, s32);
void func_0011CBB0(...);
s32 func_0011D3F8(char *);
extern char D_00347830[];
extern char D_00347840[];
extern char D_00347850[];
extern char D_00347870[];
extern char D_00347890[];
extern char D_003478C0[];
extern char D_003478E0[];
extern char D_003478F0[];
extern char D_00347910[];
extern u8 D_0035F3AC;
extern unk_func_00136830_2 *D_0035F924;
extern unk_func_00136830_0 *D_0035F928;
extern unk_func_00136830_1 *D_005FF640[];

void func_00136830(s32 arg0, char *arg1, u8 arg2) {
    unk_func_00136830_2 *q;
    char buf[0x200];
    unk_func_00136830_0 tmp;

    tmp = D_0035F928[arg2];
    if (tmp.unk_01 == 0xFF) {
        if (arg1 != 0) {
            func_0011CBB0(buf, D_00347830);
            { unk_func_00136830_1 *p = D_005FF640[tmp.unk_00];
            func_0011CBB0(buf + func_0011D3F8(buf), D_00347840, p->unk_00, p->unk_04, p->unk_08); }
            func_0011CBB0(buf + func_0011D3F8(buf), D_00347850, arg1);
        } else {
            func_0011CBB0(buf, D_00347830);
            { unk_func_00136830_1 *p = D_005FF640[tmp.unk_00];
            func_0011CBB0(buf + func_0011D3F8(buf), D_00347840, p->unk_00, p->unk_04, p->unk_08); }
            func_0011CBB0(buf + func_0011D3F8(buf), D_00347870);
        }
    } else if (arg1 != 0) {
        func_0011CBB0(buf, D_00347830);
        { unk_func_00136830_1 *p = D_005FF640[tmp.unk_00];
        func_0011CBB0(buf + func_0011D3F8(buf), D_00347840, p->unk_00, p->unk_04, p->unk_08); }
        func_0011CBB0(buf + func_0011D3F8(buf), D_00347890, tmp.unk_01, arg1);
    } else {
        func_0011CBB0(buf, D_00347830);
        { unk_func_00136830_1 *p = D_005FF640[tmp.unk_00];
        func_0011CBB0(buf + func_0011D3F8(buf), D_00347840, p->unk_00, p->unk_04, p->unk_08); }
        func_0011CBB0(buf + func_0011D3F8(buf), D_003478C0, tmp.unk_01);
    }
    if (arg2 == 0) {
        func_0011CBB0(buf, D_003478F0, buf);
    } else {
        q = &D_0035F924[arg2];
        func_0011CBB0(buf, D_00347910, buf, arg2, q->unk_00, q->unk_04);
    }
    Erm_fn_v_UpdateLastError(0x1D, D_0035F3AC, 0, arg0, -1, 0xFF, 0xFF, buf, D_003478E0, 0x136F);
}
