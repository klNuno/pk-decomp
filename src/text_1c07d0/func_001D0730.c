/* profile: o0_p */
#include "common.h"

typedef struct unk_func_001D0730_0 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} unk_func_001D0730_0;

extern u8 D_0036007C;
extern unk_func_001D0730_0 D_005ECB30[];
extern s32 D_005ECBF0[];

s32 func_001D0730(s32 arg0, unk_func_001D0730_0 *arg1) {
    u8 i;

    for (i = 0; i < D_0036007C; i++) {
        if (arg0 == D_005ECBF0[i]) {
            arg1->unk_00 = D_005ECB30[i].unk_00;
            arg1->unk_04 = D_005ECB30[i].unk_04;
            arg1->unk_08 = D_005ECB30[i].unk_08;
            return 1;
        }
    }
    return 0;
}
