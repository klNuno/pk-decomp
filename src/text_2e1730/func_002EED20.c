/* profile: opt_300 */
#include "common.h"

typedef struct unk_func_002EED20_0 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
} unk_func_002EED20_0;

typedef struct unk_func_002EED20_1 {
    s32 unk_00;
    s32 unk_04;
    u8 pad_08[0x8];
} unk_func_002EED20_1;

void func_00302FF0(s32, unk_func_002EED20_0 *);
s32 func_00303380();
void func_00304B00(void *);
extern unk_func_002EED20_1 D_0035C728;

inline s32 unk_inline_0(unk_func_002EED20_1 *a, unk_func_002EED20_0 *b) {
    return a->unk_00 == b->unk_04 && a->unk_04 == b->unk_08;
}

unk_func_002EED20_0 **func_002EED20(unk_func_002EED20_0 **arg0, s16 arg1) {
    unk_func_002EED20_0 *p;

    if (arg0 != NULL) {
        p = *arg0;
        if (!unk_inline_0(&D_0035C728, p)) {
            p->unk_00--;
            if (p->unk_00 == 0 && p->unk_0C == 0) {
                func_00302FF0(func_00303380(), p);
            }
        }
        if (arg1 > 0) {
            func_00304B00(arg0);
        }
    }
    return arg0;
}
