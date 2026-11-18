/* profile: o0 */
#include "common.h"

void WPG_fn_hBuildOrderedPathFromAtoB(s32, s32, s32, s32);

void WPG_fn_hBuildOrderedCircularPath(s32 arg0, s32 arg1, s32 arg2) {
    WPG_fn_hBuildOrderedPathFromAtoB(arg0, arg1, arg1, arg2);
}
