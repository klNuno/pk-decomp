/* profile: o0 */
#include "common.h"

typedef struct unk_func_001AB2D0_0 {
    u8 pad_00[0x106];
    s16 unk_106[0x127];
    s16 unk_354[1];
} unk_func_001AB2D0_0;

void func_0016DD90(s16, s16, s32 *);
void func_0016DED0(s32, f32);
void func_0016ED40(s16, s16, s32);
extern unk_func_001AB2D0_0 D_005AB790;
extern s16 D_005AB894[];

void func_001AB2D0(u8 arg0, s32 arg1, f32 arg2) {
    s32 sp1C;

    if (arg1 == 1) {
        func_0016DD90(D_005AB894[0], D_005AB790.unk_106[arg0], &sp1C);
        if (sp1C != 0) {
            func_0016DED0(sp1C, arg2);
            func_0016ED40(D_005AB894[0], D_005AB790.unk_106[arg0], sp1C);
        }
    } else {
        func_0016DD90(D_005AB894[0], D_005AB790.unk_354[arg0], &sp1C);
        if (sp1C != 0) {
            func_0016DED0(sp1C, arg2);
            func_0016ED40(D_005AB894[0], D_005AB790.unk_354[arg0], sp1C);
        }
    }
}
