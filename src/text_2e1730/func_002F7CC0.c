/* profile: opt_300 */
#include "common.h"

typedef struct unk_func_002F7CC0_1 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
} unk_func_002F7CC0_1;

typedef struct unk_func_002F7CC0_0 {
    unk_func_002F7CC0_1 *unk_00;
} unk_func_002F7CC0_0;

typedef struct unk_func_002F7CC0_2 {
    s32 unk_00;
    s32 unk_04;
} unk_func_002F7CC0_2;

void func_00302FF0(s32, unk_func_002F7CC0_1 *);
s32 func_00303380(void);
unk_func_002F7CC0_1 *func_00302D10(s32, unk_func_002F7CC0_2 *);
extern s32 D_0035C728[];

void func_002F7CC0(unk_func_002F7CC0_0 *arg0, unk_func_002F7CC0_2 *arg1) {
    unk_func_002F7CC0_1 *p;
    unk_func_002F7CC0_2 *q;
    s32 diff;
    s32 same;

    p = arg0->unk_00;
    q = (unk_func_002F7CC0_2 *)&p->unk_04;
    diff = q->unk_00 != arg1->unk_00 || q->unk_04 != arg1->unk_04;
    if (diff) {
        same = D_0035C728[0] == p->unk_04 && D_0035C728[1] == p->unk_08;
        if (!same) {
            p->unk_00--;
            if (p->unk_00 == 0 && p->unk_0C == 0) {
                func_00302FF0(func_00303380(), p);
            }
        }
        arg0->unk_00 = func_00302D10(func_00303380(), arg1);
    }
}
