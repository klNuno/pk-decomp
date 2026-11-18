#include "common.h"

typedef struct unk_func_0029AF30_0 {
    s32 unk_00;
    u32 unk_04;
} unk_func_0029AF30_0;

typedef struct unk_func_0029AF30_1 {
    s32 unk_00;
    unk_func_0029AF30_0 *unk_04;
    u8 pad_08[0xC];
    s32 unk_14;
} unk_func_0029AF30_1;

void func_0011B418();
unk_func_0029AF30_0 *func_0011BFE0();
void func_00285C30();
void func_00285E80();
void func_0029A940();
void func_0029B070();
void func_0029B950();
extern u8 D_00340000[];
extern char D_00350FF0[];
extern u8 *D_0035F620;
extern s32 D_007B2360[];
extern s32 D_007B244C[];
extern unk_func_0029AF30_1 *D_007B8048[];
extern unk_func_0029AF30_0 *D_007B804C[];
extern unk_func_0029AF30_0 **D_007B8050[];
extern u8 D_007B8488[];
extern u8 D_007B8EC0[];

void func_0029AF30(void) {
    s32 type;
    unk_func_0029AF30_1 *p;
    unk_func_0029AF30_0 *q;

    if (D_007B8048[0] == NULL) {
        func_0011B418(D_00350FF0);
        return;
    }
    if (D_007B804C[0] != NULL && D_007B804C[0]->unk_04 < 0x400) {
        q = func_0011BFE0(D_007B804C[0], D_007B804C[0]->unk_04 + 8);
        D_007B804C[0] = q;
        if (D_007B8050[0] == NULL) {
            D_007B8048[0]->unk_04 = q;
        } else {
            *D_007B8050[0] = q;
        }
    }
    if (D_007B8488[0] == 0 && D_007B2360[0] != 0) {
        func_00285E80(0);
        func_00285C30();
    }
    D_007B8EC0[0] = 0;
    D_0035F620 = D_00340000;
    p = D_007B8048[0];
    type = p->unk_00;
    if (type == 0x1301 || type == 0x1303) {
        if (p->unk_14 != 0) {
            func_0029A940(p, type);
        } else {
            func_0029B950(p, type);
        }
    } else {
        type = D_007B244C[0] & 3;
        if (type == 3) {
            func_0029B070(p, type);
        }
    }
    D_007B8048[0] = NULL;
}
