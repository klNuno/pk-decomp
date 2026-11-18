/* profile: o0_301_p */
#include "common.h"

typedef struct unk_func_00199600_1 {
    u8 pad_00[0x4];
    struct unk_func_00199600_1 *unk_04;
} unk_func_00199600_1;

typedef struct unk_func_00199600_0 {
    u8 pad_00[0xC];
    unk_func_00199600_1 *unk_0C;
    u8 unk_10;
} unk_func_00199600_0;

void func_0011B418(char *, char *, char *);
void func_0011CBB0(char *, char *, s32);
unk_func_00199600_0 *func_00199580();
unk_func_00199600_0 *func_00199590(unk_func_00199600_0 *, s32);
s32 func_001AB8D0(unk_func_00199600_1 *);
extern char D_00349E80[];
extern char D_00349EA0[];
extern char D_00349EC0[];
extern s32 D_0035FEB4;

void func_00199600(unk_func_00199600_1 *arg0, u8 arg1) {
    char sp30[256];
    u8 temp = 0;
    unk_func_00199600_0 *p;

    for (p = func_00199580(); p != NULL; p = func_00199590(p, 0)) {
        if (p->unk_0C == arg0) {
            temp = 1;
            p->unk_10 = arg1;
        }
    }
    if (!temp) {
        D_0035FEB4 = 1;
        func_0011CBB0(sp30, D_00349E80, func_001AB8D0(arg0->unk_04->unk_04->unk_04));
        func_0011B418(D_00349EA0, D_00349EC0, sp30);
    }
}
