/* profile: o0_301_p */
#include "common.h"

typedef struct unk_D_005AB790 {
    u8 pad_000[0x106];
    s16 unk_106[0x127];
    s16 unk_354[1];
} unk_D_005AB790;

void func_0016DD90(s16, s16, s32 *);
void func_0016ED40(s16, s16, s32);
extern unk_D_005AB790 D_005AB790;
extern u8 D_005AB880[];
extern s16 D_005AB894[];

void func_001AB410(void) {
    s32 sp2C;
    u8 i;

    for (i = 0; i < D_005AB880[0]; i++) {
        func_0016DD90(D_005AB894[0], D_005AB790.unk_106[i], &sp2C);
        if (sp2C != 0) {
            func_0016ED40(D_005AB894[0], D_005AB790.unk_106[i], sp2C);
        }
        func_0016DD90(D_005AB894[0], D_005AB790.unk_354[i], &sp2C);
        if (sp2C != 0) {
            func_0016ED40(D_005AB894[0], D_005AB790.unk_354[i], sp2C);
        }
    }
}
