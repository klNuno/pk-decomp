/* profile: o0 */
#include "common.h"

typedef struct unk_func_001FDEF0_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_001FDEF0_0;

void func_001FDEF0(unk_func_001FDEF0_0 *arg0, unk_func_001FDEF0_0 *arg1, unk_func_001FDEF0_0 *arg2) {
    unk_func_001FDEF0_0 v;
    f32 d;

    if ((d = arg1->unk_00 * arg2->unk_00 + arg1->unk_04 * arg2->unk_04 + arg1->unk_08 * arg2->unk_08) != 0.0f) {
        v.unk_00 = d * arg2->unk_00;
        v.unk_04 = d * arg2->unk_04;
        v.unk_08 = d * arg2->unk_08;
        arg0->unk_00 = arg1->unk_00 - v.unk_00;
        arg0->unk_04 = arg1->unk_04 - v.unk_04;
        arg0->unk_08 = arg1->unk_08 - v.unk_08;
    } else {
        *(s32 *)&arg0->unk_00 = *(s32 *)&arg1->unk_00;
        *(s32 *)&arg0->unk_04 = *(s32 *)&arg1->unk_04;
        *(s32 *)&arg0->unk_08 = *(s32 *)&arg1->unk_08;
    }
}
