/* profile: opt_300 */
#include "common.h"

typedef struct unk_func_002E73A0_1 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
} unk_func_002E73A0_1;

typedef struct unk_func_002E73A0_0 {
    unk_func_002E73A0_1 *unk_00;
} unk_func_002E73A0_0;

void func_00302FF0(s32, unk_func_002E73A0_1 *);
s32 func_00303380(void);
void func_00304B00(unk_func_002E73A0_0 *);
extern s32 D_0035C728[];

unk_func_002E73A0_0 *func_002E73A0(unk_func_002E73A0_0 *arg0, s32 arg1) {
    unk_func_002E73A0_1 *p;
    s32 same;

    if (arg0 != NULL) {
        p = arg0->unk_00;
        same = D_0035C728[0] == p->unk_04 && D_0035C728[1] == p->unk_08;
        if (!same) {
            p->unk_00--;
            if (p->unk_00 == 0 && p->unk_0C == 0) {
                func_00302FF0(func_00303380(), p);
            }
        }
        if ((s16)arg1 > 0) {
            func_00304B00(arg0);
        }
    }
    return arg0;
}
