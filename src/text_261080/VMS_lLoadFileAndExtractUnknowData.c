/* profile: o0_301 */
#include "common.h"

typedef struct unk_VMS_lLoadFileAndExtractUnknowData_0 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} unk_VMS_lLoadFileAndExtractUnknowData_0;

s32 func_0027D140(s32, s32, s32, s32, void *);
extern unk_VMS_lLoadFileAndExtractUnknowData_0 D_003313F0[];
extern s32 D_003603B8;

s32 VMS_lLoadFileAndExtractUnknowData(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp;

    if (D_003603B8 != 1) {
        return -1;
    }
    temp = func_0027D140(D_003313F0[arg0].unk_00, D_003313F0[arg0].unk_04, arg1, arg2, (void *)arg3);
    if (temp != 1) {
        return 0;
    }
    return 1;
}
