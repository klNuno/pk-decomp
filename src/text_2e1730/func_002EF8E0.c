/* profile: opt_300 */
#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} unk_func_002EF8E0_0;

extern s32 D_0035C728[];
extern s32 D_0035C72C[];

unk_func_002EF8E0_0 **func_002EF8E0(unk_func_002EF8E0_0 **arg0, unk_func_002EF8E0_0 **arg1) {
    unk_func_002EF8E0_0 *temp;
    s32 var_v0;

    *arg0 = *arg1;
    temp = *arg0;
    var_v0 = D_0035C728[0] == temp->unk_04;
    if (var_v0) {
        var_v0 = D_0035C72C[0] == temp->unk_08;
    }
    if (!var_v0) {
        temp->unk_00++;
    }
    return arg0;
}
