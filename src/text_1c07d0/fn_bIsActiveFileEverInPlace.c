/* profile: o0 */
#include "common.h"

s32 fn_bGetCheckSumFile(s32, char *, s32 *);
s32 func_0027F340(s32, char *, u8 *);
s32 memcmp(const void *, const void *, u32);
extern s32 D_00360070;
extern s32 D_00360074;
extern s32 D_00360078;
extern s32 D_003603DC;
extern char D_005ECA90[];
extern u8 D_005ECB10[];

s32 fn_bIsActiveFileEverInPlace(void) {
    u8 temp[0x18];
    s32 temp2;
    s32 temp3;

    if (D_00360070 == 0) {
        return 1;
    }
    if (fn_bGetCheckSumFile(D_00360074, D_005ECA90, &temp2) == 0) {
        return 0;
    }
    if (temp2 != D_00360078) {
        return 0;
    }
    temp3 = func_0027F340(D_00360074, D_005ECA90, temp);
    if (temp3 != 1) {
        return 0;
    }
    if (D_003603DC == 0 && memcmp(D_005ECB10, temp, 0x18) != 0) {
        return 0;
    }
    return 1;
}
