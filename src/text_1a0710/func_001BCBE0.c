/* profile: o0 */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_001BCBE0_0;

f32 func_001BCC90(f32);

unk_func_001BCBE0_0 func_001BCBE0(unk_func_001BCBE0_0 *arg1) {
    unk_func_001BCBE0_0 v;

    v.unk_00 = 0.0f;
    v.unk_00 = 0.0f;
    v.unk_00 = 0.0f;
    if (arg1 != NULL) {
        v.unk_00 = func_001BCC90(arg1->unk_00);
        v.unk_04 = func_001BCC90(arg1->unk_04);
        v.unk_08 = func_001BCC90(arg1->unk_08);
    }
    return v;
}
