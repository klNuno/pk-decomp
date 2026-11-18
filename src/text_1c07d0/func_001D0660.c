/* profile: o0 */
#include "common.h"

typedef struct unk_func_001D0660_0 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} unk_func_001D0660_0;

extern u8 D_0036007C;
extern unk_func_001D0660_0 D_005ECB30[];
extern s32 D_005ECBF0[];

void func_001D0660(s32 arg0, unk_func_001D0660_0 *arg1) {
    D_005ECBF0[D_0036007C] = arg0;
    D_005ECB30[D_0036007C].unk_00 = arg1->unk_00;
    D_005ECB30[D_0036007C].unk_04 = arg1->unk_04;
    D_005ECB30[D_0036007C].unk_08 = arg1->unk_08;
    D_0036007C++;
}
