/* profile: opt_300 */
#include "common.h"

typedef struct unk_func_0028AD30_0 {
    u32 unk_00_0 : 12;
    u32 unk_00_C : 11;
} unk_func_0028AD30_0;

extern unk_func_0028AD30_0 D_007B0418[];
extern unk_func_0028AD30_0 D_007B041C[];
extern unk_func_0028AD30_0 D_007B0744[];
extern u8 D_007B0775[];

u32 func_0028AD30(s32 arg0) {
    switch (arg0) {
    case 0xF43:
        return D_007B0418[0].unk_00_0;
    case 0xF44:
        return D_007B0418[0].unk_00_C;
    case 0xF45:
        return D_007B041C[0].unk_00_0;
    case 0xF46:
        if (D_007B0775[0] != 0) {
            return D_007B0744[0].unk_00_C;
        }
        return D_007B041C[0].unk_00_C;
    default:
        return 0;
    }
}
