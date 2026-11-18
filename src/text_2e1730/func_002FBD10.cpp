#include "common.h"

typedef struct unk_func_002FBD10_0 {
    struct unk_func_002FBD10_0 *unk_00;
    struct unk_func_002FBD10_0 *unk_04;
    s32 unk_08;
    u32 unk_0C;
} unk_func_002FBD10_0;

typedef struct {
    s32 unk_00;
    unk_func_002FBD10_0 *unk_04;
} unk_func_002FBD10_1;

class unk_func_002FBD10_2 {
public:
    unk_func_002FBD10_0 *unk_00;
    unk_func_002FBD10_2(unk_func_002FBD10_0 *n) : unk_00(n) {}
};

extern "C" unk_func_002FBD10_2 func_002FBD10(unk_func_002FBD10_1 *arg1, const u32 &arg2) {
    unk_func_002FBD10_0 *x = arg1->unk_04;
    unk_func_002FBD10_0 *y = (unk_func_002FBD10_0 *)&arg1->unk_04;

    while (x != 0) {
        if (!(x->unk_0C < arg2)) {
            y = x;
            x = x->unk_00;
        } else {
            x = x->unk_04;
        }
    }
    unk_func_002FBD10_2 j(y);

    if (j.unk_00 == (unk_func_002FBD10_0 *)&arg1->unk_04 || arg2 < j.unk_00->unk_0C) {
        return unk_func_002FBD10_2((unk_func_002FBD10_0 *)&arg1->unk_04);
    }
    return j;
}
