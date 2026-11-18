#include "common.h"

typedef struct {
    u8 pad_00[0x4];
    s32 unk_04;
    u8 pad_08[0x4];
    void *unk_0C;
    void *unk_10;
    void *unk_14;
    u8 pad_18[0x38];
} unk_func_0029D7A0_0;

void func_0029BAB0(unk_func_0029D7A0_0 *, s32);
void *memcpy(void *, const void *, s32);
void *memset(void *, s32, u32);
extern void *(*D_0035F644)(s32);
extern u8 D_007B0E60[];
extern u8 D_007B1E60[];
extern u8 D_007B1F60[];
extern s32 D_007B2360[];
extern void *D_007B8060[];
extern void *D_007B8064[];
extern void *D_007B8068[];
extern u8 D_007B8EC0[];

void func_0029D7A0(s32 arg0) {
    unk_func_0029D7A0_0 *p;

    if (D_007B8EC0[0] != 0 && D_007B2360[0] != 0) {
        p = D_0035F644(0x50);
        memset(p, 0, 0x50);
        p->unk_04 = D_007B2360[0];
        p->unk_0C = D_0035F644(D_007B2360[0]);
        p->unk_10 = D_0035F644(D_007B2360[0] * 0x10);
        memcpy(p->unk_0C, D_007B1E60, D_007B2360[0]);
        memcpy(p->unk_10, D_007B0E60, D_007B2360[0] * 0x10);
        p->unk_14 = D_0035F644(D_007B2360[0] * 4);
        memcpy(p->unk_14, D_007B1F60, D_007B2360[0] * 4);
        func_0029BAB0(p, arg0);
    }
    D_007B2360[0] = 0;
    D_007B8064[0] = D_007B1E60;
    D_007B8060[0] = D_007B0E60;
    D_007B8068[0] = D_007B1F60;
}
