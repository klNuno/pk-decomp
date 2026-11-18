/* profile: opt_300 */
#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} unk_func_002E7730_0;

extern s32 D_0035C728[];
extern s32 D_0035C72C[];

unk_func_002E7730_0 **func_002E7730(unk_func_002E7730_0 **arg0, unk_func_002E7730_0 **arg1) {
    unk_func_002E7730_0 *temp;
    s32 eq;

    *arg0 = *arg1;
    temp = *arg0;
    eq = D_0035C728[0] == temp->unk_04;
    if (eq) {
        eq = D_0035C72C[0] == temp->unk_08;
    }
    if (!eq) {
        temp->unk_00++;
    }
    return arg0;
}
