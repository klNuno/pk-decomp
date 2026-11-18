/* profile: o0_301 */
#include "common.h"

void func_001D66D0(s32, char *);
extern char D_0034BE20[];

s32 SAV2_fn_eGiveElementTypeFromAIType(s32 arg0) {
    s32 ret = 0;

    if (arg0 == 1 || arg0 == 2 || arg0 == 3) {
        ret = 1;
    } else if (arg0 == 4 || arg0 == 5) {
        ret = 2;
    } else if (arg0 == 6 || arg0 == 7) {
        ret = 3;
    } else if (arg0 == 8) {
        ret = 4;
    } else if (arg0 == 0x15) {
        ret = 5;
    } else if (arg0 == 9 || arg0 == 0x24) {
        ret = 6;
    } else {
        func_001D66D0(0, D_0034BE20);
    }
    return ret;
}
