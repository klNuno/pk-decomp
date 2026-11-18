/* profile: o0 */
#include "common.h"

s32 SAV2_fn_eGiveElementTypeFromAIType(s32);

u8 func_001D6CF0(s32 arg0, s32 arg1) {
    u8 temp;

    temp = 0;
    if (arg0 == SAV2_fn_eGiveElementTypeFromAIType(arg1)) {
        temp = 1;
    }
    return temp;
}
