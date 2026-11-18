/* profile: o0_p */
#include "common.h"

typedef struct unk_func_001EF1F0_0 {
    s32 unk_00;
    struct unk_func_001EF1F0_0 *unk_04;
} unk_func_001EF1F0_0;

f32 func_001EF000(s32, s32);
extern unk_func_001EF1F0_0 *D_005ACAE4[];

s32 func_001EF1F0(s32 arg0) {
    unk_func_001EF1F0_0 *p;
    s32 ret = 0;
    f32 a;
    f32 b;

    p = D_005ACAE4[0];
    if (p == NULL) {
        return 0;
    }
    a = func_001EF000(p->unk_00, arg0);
    ret = p->unk_00;
    for (p = p->unk_04; p != NULL; p = p->unk_04) {
        b = func_001EF000(p->unk_00, arg0);
        if (b < a) {
            ret = p->unk_00;
        }
    }
    return ret;
}
