/* profile: opt_300_noprop */
#include "common.h"

typedef struct {
    u8 pad_00[0xC];
    s32 unk_0C;
    u8 pad_10[0x50];
    f32 unk_60;
    f32 unk_64;
    u8 pad_68[8];
    s32 unk_70;
    s32 unk_74;
} unk_func_0026FC50_0;

u8 *func_00267EB0(s32);
void func_0011B418();
void func_001711C0(f32, s32, u8 *, s32, s32, f32);
extern char D_0034EB50[];
extern s32 D_003602C8;

void func_0026FC50(unk_func_0026FC50_0 *arg0) {
    u8 *p;
    s32 t;

    if (arg0->unk_70 != 0) {
        p = func_00267EB0(arg0->unk_70);
        if (p == NULL) {
            func_0011B418(D_0034EB50);
            return;
        }
        t = arg0->unk_74;
        func_001711C0(arg0->unk_60, D_003602C8, p, t, arg0->unk_0C, arg0->unk_64);
    }
}
