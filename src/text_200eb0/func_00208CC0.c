/* profile: o0 */
#include "common.h"

typedef struct unk_func_00208CC0_0 {
    u8 pad_00[0x4];
    u8 unk_04;
    u8 pad_05[0x3];
} unk_func_00208CC0_0;

extern unk_func_00208CC0_0 D_00334820[];

u8 func_00208CC0(s32 arg0) {
    return D_00334820[arg0].unk_04;
}
