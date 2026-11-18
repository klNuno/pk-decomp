#include "common.h"

typedef struct unk_func_00305830_0 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    s32 unk_1C;
    s32 unk_20;
} unk_func_00305830_0;

void func_00308B80();
void func_00308BE0();
void func_0030C470();
void func_0030C530();
void func_0030C5F0();
void func_0030D0F0();
s32 *func_0030D3F0();
s32 func_0030D400();
void func_0030D590();
char *strcpy(char *, const char *);
void func_003055C0();
extern char D_0035CE78[];
extern s32 D_0036079C;

void func_00305830(unk_func_00305830_0 *arg0) {
    char buf[0x100];
    s32 n;
    s32 id;
    s32 *p;

    if (arg0->unk_00 != 0) {
        func_0030C5F0(arg0->unk_00);
    }
    n = 4;
    strcpy(buf, D_0035CE78);
    if (arg0->unk_20 & 1) {
        buf[n++] = '1';
    }
    if (arg0->unk_20 & 2) {
        buf[n++] = '2';
    }
    buf[n] = 0;
    func_0030C530(arg0->unk_04, buf, n);
    func_0030D590(arg0->unk_1C);
    func_0030C470(arg0->unk_10, func_003055C0);
    if (D_0036079C != 0) {
        func_00308BE0(D_0036079C);
    }
    id = func_0030D400();
    p = func_0030D3F0(id);
    p[0] = arg0->unk_08;
    p[1] = arg0->unk_0C;
    p[2] = arg0->unk_14;
    p[3] = arg0->unk_18;
    func_0030D0F0(1, id, 0x10, 0, 0, 1, 0);
    if (D_0036079C != 0) {
        func_00308B80(D_0036079C);
    }
}
