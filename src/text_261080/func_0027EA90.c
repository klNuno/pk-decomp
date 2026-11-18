/* profile: o0 */
#include "common.h"

typedef struct unk_func_0027EA90_0 {
    u8 pad_00[8];
    s32 unk_08;
} unk_func_0027EA90_0;

extern unk_func_0027EA90_0 D_0033FE70[];

u8 func_0027EA90(s32 arg0) {
    if (arg0 < 0 || arg0 > 7) {
        return 0;
    }
    return D_0033FE70[arg0].unk_08 != -1;
}
