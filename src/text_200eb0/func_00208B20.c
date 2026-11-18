/* profile: o0 */
#include "common.h"

typedef struct unk_func_00208B20_0 {
    s32 unk_00;
    u8 unk_04;
    u8 pad_05[3];
} unk_func_00208B20_0;

extern unk_func_00208B20_0 D_00334180[];

u8 func_00208B20(s32 arg0) {
    return D_00334180[arg0].unk_04;
}
