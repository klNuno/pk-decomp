/* profile: o0 */
#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
} unk_func_00208B50_0;

extern unk_func_00208B50_0 D_00334180[];

s32 func_00208B50(s32 arg0) {
    return D_00334180[arg0].unk_00;
}
