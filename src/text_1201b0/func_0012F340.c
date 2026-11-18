#include "common.h"

typedef struct unk_func_0012F340_0 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
} unk_func_0012F340_0;

void func_00166D20(s32 *);
void func_00166C80(s32, unk_func_0012F340_0 *);
void func_00166B80(s32, unk_func_0012F340_0 *);
void func_00166AF0(s32, s32, unk_func_0012F340_0 *);
void func_00166AB0(s32, s32);
void func_00169A40(s32, s32 *);
void func_00166A20(s32, s32);
void func_00194120(s32 *, s32, s32);
void func_00193980(s32, s16 *, s32, s32, s32);
void func_00196020(s32, s16, s32);
extern s32 D_0035F8D0;
extern s32 D_0035F8D8;
extern s16 D_00364E80[];
extern s32 D_00364EA0[];
extern s32 D_00364ED0[];

void func_0012F340(s32 arg0) {
    unk_func_0012F340_0 sp40;
    s16 i;
    s32 *p1;
    s16 *p2;

    func_00166D20(&D_0035F8D8);
    sp40.unk_00 = 0;
    sp40.unk_04 = 0;
    sp40.unk_08 = 0;
    sp40.unk_0C = 0;
    func_00166C80(D_0035F8D8, &sp40);
    func_00166B80(D_0035F8D8, &sp40);
    func_00166AF0(D_0035F8D8, 2, &sp40);
    func_00166AB0(D_0035F8D8, -1);
    func_00169A40(arg0, D_00364ED0);
    func_00166A20(D_0035F8D8, D_0035F8D0);
    p1 = D_00364EA0;
    p2 = D_00364E80;
    for (i = 0; i < 10; i++) {
        func_00194120(p1, 100, 1);
        func_00193980(*p1, p2, 0x30, 100, 1);
        func_00196020(*p1, *p2, D_0035F8D8);
        p1++;
        p2++;
    }
}
