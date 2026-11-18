/* profile: o0 */
#include "common.h"

s32 func_00280710(s32, f32);
extern s32 D_007B00BC[];

s32 func_00281370(s32 arg0) {
    s32 temp;
    s32 temp2;

    temp = func_00280710(D_007B00BC[0], 450.0f);
    if (temp == -1) {
        return 3;
    }
    if (temp == 4) {
        return 2;
    }
    return 4;
}
