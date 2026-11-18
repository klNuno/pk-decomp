/* profile: o0 */
#include "common.h"

s32 func_001DAF70(s32);
extern s32 D_003600D0;

s32 func_001D9ED0(void) {
    if (D_003600D0 != 0) {
        return func_001DAF70(D_003600D0) & 0xFF;
    }
    return 0;
}
